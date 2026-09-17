# Lean 4 Formalization of JSP-000690

This repository provides a machine-checked, pure Lean 4 proof resolving **JSP-000690** in the affirmative.

## Problem Statement

> *Is there a three-uniform, three-chromatic-critical hypergraph with minimum degree at least seven?*
> 
> — Erdős & Lovász (1975), *Problems and results on 3-chromatic hypergraphs and some related questions*, Colloq. Math. Soc. János Bolyai 10, pp. 609–627.

## Mathematical Resolution

Under the standard weak vertex-colouring interpretation (Property B), the problem asks for a 3-uniform hypergraph $H = (V, E)$ with $\chi(H) = 3$ such that $\delta(H) \ge 7$, where deleting any single edge or any single vertex leaves a 2-colourable hypergraph.

Ruiliang Li (arXiv:2512.24850, 2025) constructed an explicit 3-uniform hypergraph on 9 vertices $V = \{1, 2, \dots, 9\}$ with 22 edges:
$$E = \{ \{1, 2, 3\}, \{1, 2, 9\}, \{1, 3, 8\}, \{1, 4, 6\}, \{1, 4, 8\}, \{1, 4, 9\}, \{1, 5, 7\}, \{1, 5, 8\}, \{1, 5, 9\}, \{1, 6, 7\},$$
$$\{2, 3, 6\}, \{2, 3, 7\}, \{2, 4, 9\}, \{2, 5, 9\}, \{2, 6, 7\}, \{3, 4, 8\}, \{3, 5, 8\}, \{3, 6, 7\}, \{4, 6, 8\}, \{4, 6, 9\}, \{5, 7, 8\}, \{5, 7, 9\} \}$$

Key properties certified in this formalization:
1. **3-Uniformity**: All 22 edges are 3-element subsets of $V$.
2. **Minimum Degree $\delta(H) = 7 \ge 7$**: Vertex 1 has degree 10, and each vertex in $\{2, \dots, 9\}$ has degree exactly 7.
3. **Non-2-colourable ($\chi(H) \ge 3$)**: Verified exhaustively over all $2^9 = 512$ possible 2-colourings; none is proper.
4. **3-colourable ($\chi(H) = 3$)**: Witnessed by the proper 3-colouring $\psi: V \to \{1, 2, 3\}$:
   - Colour 1: $\{1, 2, 4, 5\}$
   - Colour 2: $\{3, 6, 8, 9\}$
   - Colour 3: $\{7\}$
5. **Edge-critical**: Deleting any of the 22 edges produces a 2-colourable hypergraph.
6. **Vertex-critical**: Deleting any vertex $v \in V$ produces a 2-colourable induced subhypergraph.

## Main Theorem

```lean
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
    allVerticesCritical = true
```

## Verification

This project uses Lean 4 (`v4.34.0`) and requires no external libraries (zero Mathlib dependency, self-contained kernel computation).

```bash
lake build
```

Axiom verification confirms only standard core Lean axioms:
```lean
#print axioms jsp_000690_affirmative
-- depends on axioms: [propext, Quot.sound]
```

## Contributor

- Formalization: Qin Zhao ([Drag0ndddd1118](https://github.com/Drag0ndddd1118))
