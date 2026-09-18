/-
  The Justin Sun Prize (孙宇晨奖) — JSP-000690

  **Challenge.lean: the statement of record.**

  This file declares the definitions the problem is phrased with, and the proposition
  `jsp000690Statement`. It proves nothing. `Submission.lean` imports this file, so the proof and the
  statement refer to the *same* constant and the statement cannot drift between them.
  `check.py` type-checks the bridge

      example : JSP000690.jsp000690Statement := JSP000690.jsp_000690_affirmative

  and audits the axioms the submitted proof depends on. A reviewer has only to read this
  file in order to judge *what* has been claimed.
-/


namespace JSP000690

set_option maxRecDepth 2000000

/-- The vertex set V = {1, 2, ..., 9}. -/
def V : List Nat := [1, 2, 3, 4, 5, 6, 7, 8, 9]

/-- The edge set of 22 triples from Ruiliang Li (arXiv:2512.24850, Section 4.1). -/
def E : List (Nat × Nat × Nat) := [
  (1, 2, 3), (1, 2, 9), (1, 3, 8), (1, 4, 6), (1, 4, 8), (1, 4, 9),
  (1, 5, 7), (1, 5, 8), (1, 5, 9), (1, 6, 7),
  (2, 3, 6), (2, 3, 7), (2, 4, 9), (2, 5, 9), (2, 6, 7),
  (3, 4, 8), (3, 5, 8), (3, 6, 7),
  (4, 6, 8), (4, 6, 9),
  (5, 7, 8), (5, 7, 9)
]

/-- Validation that an edge is a strictly ordered 3-element subset of V. -/
def isValidEdge (e : Nat × Nat × Nat) : Bool :=
  let (a, b, c) := e
  a ∈ V && b ∈ V && c ∈ V && a < b && b < c

/-- Degree of a vertex v in hypergraph H = (V, E). -/
def degree (v : Nat) : Nat :=
  (E.filter (fun (a, b, c) => a == v || b == v || c == v)).length

/-- Minimum degree δ(H). -/
def minDegree : Nat :=
  match V.map degree with
  | [] => 0
  | d :: ds => ds.foldl Nat.min d

/-- Bitwise representation of a 2-colouring c ∈ [0, 512):
    Vertex v ∈ {1..9} receives colour 1 if bit (v - 1) of c is 1, and 0 otherwise. -/
def getColor (c : Nat) (v : Nat) : Bool :=
  ((c >>> (v - 1)) &&& 1) == 1

/-- An edge (a, b, d) is monochromatic under colouring c if all 3 vertices have the same colour. -/
def isMono (c : Nat) (e : Nat × Nat × Nat) : Bool :=
  let (a, b, d) := e
  let ca := getColor c a
  let cb := getColor c b
  let cd := getColor c d
  (ca == cb) && (cb == cd)

/-- A colouring c is proper for an edge list if no edge in the list is monochromatic. -/
def isProper2Coloring (c : Nat) (edges : List (Nat × Nat × Nat)) : Bool :=
  edges.all (fun e => !isMono c e)

/-- Checks whether any of the 2^9 = 512 colourings is a proper 2-colouring for `edges`. -/
def anyProper2Coloring (edges : List (Nat × Nat × Nat)) : Bool :=
  (List.range 512).any (fun c => isProper2Coloring c edges)

/-- Explicit 3-colouring ψ : V → {1, 2, 3}.
    Partitions V into:
      Colour 1: {1, 2, 4, 5}
      Colour 2: {3, 6, 8, 9}
      Colour 3: {7} -/
def psi (v : Nat) : Nat :=
  if v == 1 || v == 2 || v == 4 || v == 5 then 1
  else if v == 3 || v == 6 || v == 8 || v == 9 then 2
  else 3

def isMono3 (col : Nat → Nat) (e : Nat × Nat × Nat) : Bool :=
  let (a, b, d) := e
  col a == col b && col b == col d

def proper3Coloring : Bool :=
  E.all (fun e => !isMono3 psi e)

/-- Check that deleting any edge e ∈ E makes the remaining hypergraph 2-colourable. -/
def allEdgesCritical : Bool :=
  E.all (fun e => anyProper2Coloring (E.filter (· != e)))

/-- Check that deleting any vertex v ∈ V (and incident edges) makes the subhypergraph 2-colourable. -/
def allVerticesCritical : Bool :=
  V.all (fun v =>
    let Ev := E.filter (fun (a, b, c) => a != v && b != v && c != v)
    anyProper2Coloring Ev)

/-- **Statement of record for JSP-000690.**

The proposition this development resolves, phrased with the definitions above and
nothing else. -/

def jsp000690Statement : Prop :=
  -- (1) 3-uniform:
      E.all isValidEdge = true ∧
      -- (2) Minimum degree at least 7:
      minDegree ≥ 7 ∧
      -- (3) Not 2-colourable:
      anyProper2Coloring E = false ∧
      -- (4) 3-colourable (hence chromatic number χ = 3):
      proper3Coloring = true ∧
      -- (5) Edge-critical: deleting any edge allows a 2-colouring:
      allEdgesCritical = true ∧
      -- (6) Vertex-critical: deleting any vertex allows a 2-colouring:
      allVerticesCritical = true

end JSP000690
