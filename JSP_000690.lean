/-
  Justin Sun Prize: JSP-000690
  Problem: Is there a three-uniform, three-chromatic-critical hypergraph with minimum degree at least seven?
  Reference:
    - Erdős & Lovász (1975), "Problems and results on 3-chromatic hypergraphs and some related questions"
    - Ruiliang Li (2025), "On an Erdős–Lovász problem: 3-critical 3-graphs of minimum degree 7", arXiv:2512.24850
  
  Resolution:
    Affirmative answer (under weak vertex-colouring):
    There exists an explicit 3-uniform hypergraph H = (V, E) on 9 vertices with minimum degree δ(H) = 7
    that is critically 3-chromatic:
      - 3-uniform: every edge has size 3
      - δ(H) = 7: deg(1) = 10 and deg(v) = 7 for each v ∈ {2, ..., 9}
      - χ(H) = 3: H has no proper 2-colouring, but has an explicit proper 3-colouring
      - Edge-critical: deleting any edge leaves a 2-colourable hypergraph
      - Vertex-critical: deleting any vertex leaves a 2-colourable hypergraph

  Formalized in pure Lean 4 (zero external axioms, fully kernel-verified).
  Formalizer: Drag0ndddd1118 (Qin Zhao)
-/

set_option maxRecDepth 2000000

namespace JSP000690

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

/-- Theorem: All 22 edges are valid 3-uniform edges on V. -/
theorem three_uniform : E.all isValidEdge = true := by rfl

/-- Degree of a vertex v in hypergraph H = (V, E). -/
def degree (v : Nat) : Nat :=
  (E.filter (fun (a, b, c) => a == v || b == v || c == v)).length

/-- Minimum degree δ(H). -/
def minDegree : Nat :=
  match V.map degree with
  | [] => 0
  | d :: ds => ds.foldl Nat.min d

/-- Degree computation: vertex 1 has degree 10, and vertices 2 through 9 have degree 7. -/
theorem degrees_witness :
    V.map (fun v => (v, degree v)) = [
      (1, 10), (2, 7), (3, 7), (4, 7), (5, 7), (6, 7), (7, 7), (8, 7), (9, 7)
    ] := by rfl

/-- Theorem: Minimum degree of H is exactly 7 (hence ≥ 7). -/
theorem min_degree_eq_seven : minDegree = 7 := by rfl

theorem min_degree_ge_seven : minDegree ≥ 7 := by decide

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

/-- Theorem: H is not 2-colourable (χ(H) ≥ 3).
    Exhaustively checked over all 512 possible 2-colourings. -/
theorem not_two_colorable : anyProper2Coloring E = false := by rfl

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

/-- Theorem: H is 3-colourable (χ(H) ≤ 3), witnessed by ψ. -/
theorem three_colorable : proper3Coloring = true := by rfl

/-- Check that deleting any edge e ∈ E makes the remaining hypergraph 2-colourable. -/
def allEdgesCritical : Bool :=
  E.all (fun e => anyProper2Coloring (E.filter (· != e)))

/-- Theorem: H is edge-critical for 3-chromaticity. -/
theorem edge_critical : allEdgesCritical = true := by rfl

/-- Check that deleting any vertex v ∈ V (and incident edges) makes the subhypergraph 2-colourable. -/
def allVerticesCritical : Bool :=
  V.all (fun v =>
    let Ev := E.filter (fun (a, b, c) => a != v && b != v && c != v)
    anyProper2Coloring Ev)

/-- Theorem: H is vertex-critical for 3-chromaticity. -/
theorem vertex_critical : allVerticesCritical = true := by rfl

/-- 
  Main Theorem resolving JSP-000690 in the affirmative:
  There exists an explicit 3-uniform, critically 3-chromatic hypergraph with minimum degree at least 7.
-/
theorem jsp_000690_affirmative :
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
    allVerticesCritical = true := by
  refine ⟨by rfl, by decide, by rfl, by rfl, by rfl, by rfl⟩

#print axioms jsp_000690_affirmative

end JSP000690
