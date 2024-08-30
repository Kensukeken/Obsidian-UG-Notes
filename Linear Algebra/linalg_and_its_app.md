# Preface

## Overview
- The preface introduces the objectives and scope of the book.
- The author explains the motivation behind writing the book and the intended audience.
- It highlights the importance of linear algebra in various fields such as engineering, physics, and computer science.

## Author's Approach
- Emphasis on clarity and comprehensibility.
- Use of illustrative examples and applications to reinforce concepts.
- Structure designed to build a solid foundation before advancing to more complex topics.

## Key Goals
- Provide a comprehensive introduction to linear algebra.
- Facilitate understanding through practical applications and problem-solving.
- Equip readers with the tools needed for further study and research.
# Preface to the First Edition

## Overview
- Context of the first edition: the state of the field at the time of publication.
- Goals of the first edition: address gaps in existing literature and offer a fresh perspective.
- Notable differences between the first edition and subsequent revisions.

## Updates and Revisions
- New topics or expanded sections in the latest edition.
- Improvements based on feedback and advancements in the field.
- Acknowledgment of contributors and reviewers.

## Acknowledgments
- Recognition of individuals and institutions that supported the book's development.
# 1. Fundamentals

## Key Concepts
- **Linear Algebra**: Study of vectors, vector spaces, linear transformations, and matrices.
- **Vectors**: Quantities with both magnitude and direction. Fundamental objects in linear algebra.
  $$ \mathbf{v} = \begin{pmatrix} v_1 \\ v_2 \\ \vdots \\ v_n \end{pmatrix} $$
- **Matrices**: Rectangular arrays of numbers used to represent linear transformations and solve systems of linear equations.
  $$ A = \begin{pmatrix}
    a_{11} & a_{12} & \cdots & a_{1n} \\
    a_{21} & a_{22} & \cdots & a_{2n} \\
    \vdots & \vdots & \ddots & \vdots \\
    a_{m1} & a_{m2} & \cdots & a_{mn}
    \end{pmatrix} $$

## Topics Covered
- **Scalars**: Single numbers used in operations involving vectors and matrices.
  $$ \text{Scalar } \alpha \in \mathbb{R} $$
- **Vector Spaces**: Sets of vectors closed under addition and scalar multiplication.
  - A set $V$ is a vector space if:
    $$ \mathbf{u} + \mathbf{v} \in V $$
    $$ \alpha \mathbf{v} \in V $$
- **Subspaces**: Subsets of vector spaces that are themselves vector spaces.
# 2. Duality

## Key Concepts
- **Dual Space**: The set of all linear functionals on a vector space $V$, denoted $V^*$.
  - A linear functional is a function  $f: V \to \mathbb{R}$ such that:
    $$ f(\alpha \mathbf{u} + \beta \mathbf{v}) = \alpha f(\mathbf{u}) + \beta f(\mathbf{v}) $$
- **Linear Functionals**: Functions that map vectors to scalars in a linear manner.
  $$ f(\mathbf{v}) = \alpha_1 v_1 + \alpha_2 v_2 + \cdots + \alpha_n v_n $$
- **Duality in Optimization**: Relationship between primal and dual problems.

## Topics Covered
- **Construction of Dual Space**: How to form the dual space from a given vector space.
- **Properties of Linear Functionals**: Linearity, continuity, and boundedness.
- **Applications**: Duality in linear programming and its importance in problem-solving.
# 3. Linear Mappings

## Key Concepts
- **Linear Mappings**: Functions between vector spaces that preserve vector addition and scalar multiplication.
  - If $T: V \to W$ is a linear mapping, then:
    $$ T(\mathbf{u} + \mathbf{v}) = T(\mathbf{u}) + T(\mathbf{v}) $$
    $$ T(\alpha \mathbf{v}) = \alpha T(\mathbf{v}) $$
- **Kernel and Image**: The kernel (null space) of a mapping and its image (range).
  $$ \text{Kernel of } T: \text{Ker}(T) = \{ \mathbf{v} \in V \mid T(\mathbf{v}) = \mathbf{0} \} $$
  $$ \text{Image of } T: \text{Im}(T) = \{ T(\mathbf{v}) \mid \mathbf{v} \in V \} $$
- **Matrix Representation**: Representation of linear mappings using matrices.

## Topics Covered
- **Linear Transformations**: Transformations that maintain linearity.
- **Matrix Representation**: How to represent a linear mapping with a matrix.
  - For $T: \mathbb{R}^n \to \mathbb{R}^m$, matrix $A$ such that $T(\mathbf{x}) = A \mathbf{x}$.
- **Composition of Mappings**: Combining multiple linear mappings into one.
$$ T \circ S (\mathbf{v}) = T(S(\mathbf{v})) $$
# 4. Matrices

## Key Concepts
- **Matrix Operations**: Addition, multiplication, and inversion of matrices.
  - **Addition**: 
    $$ (A + B)_{ij} = A_{ij} + B_{ij} $$
  - **Multiplication**: 
    $$ (AB)_{ij} = \sum_{k=1}^n A_{ik} B_{kj} $$
  - **Inversion**: 
    $$ A^{-1} \text{ such that } AA^{-1} = A^{-1}A = I $$
- **Special Matrices**: Diagonal, symmetric, and identity matrices.
  - **Diagonal Matrix**: 
    $$ D = \begin{pmatrix}
    d_1 & 0 & \cdots & 0 \\
    0 & d_2 & \cdots & 0 \\
    \vdots & \vdots & \ddots & \vdots \\
    0 & 0 & \cdots & d_n
    \end{pmatrix} $$
  - **Symmetric Matrix**: 
    $$ A^T = A $$
  - **Identity Matrix**: 
    $$ I = \begin{pmatrix}
    1 & 0 & \cdots & 0 \\
    0 & 1 & \cdots & 0 \\
    \vdots & \vdots & \ddots & \vdots \\
    0 & 0 & \cdots & 1
    \end{pmatrix} $$
- **Matrix Properties**: Determinant, rank, and trace.
  - **Determinant**: 
    $$ \text{det}(A) = \sum_{i=1}^n (-1)^{i+j} a_{ij} \text{det}(A_{ij}) $$
  - **Rank**: The dimension of the column space of $A$.
  - **Trace**: 
    $$ \text{Tr}(A) = \sum_{i=1}^n a_{ii} $$
# 5. Determinant and Trace

## Key Concepts
- **Determinant**: A scalar value that provides information about the matrix's invertibility and volume scaling.
  $$ \text{det}(A) = \sum_{i=1}^n (-1)^{i+j} a_{ij} \text{det}(A_{ij}) $$
- **Trace**: The sum of the diagonal elements of a matrix.
  $$ \text{Tr}(A) = \sum_{i=1}^n a_{ii} $$

## Topics Covered
- **Calculation of Determinants**: Methods such as expansion by minors and row reduction.
- **Properties of Determinants**: Multiplicative property, effects of matrix operations on the determinant.
- **Trace**: Properties and its relation to eigenvalues. $$ \text{Tr}(AB) = \text{Tr}(BA) $$
# 6. Spectral Theory

## Key Concepts
- **Spectral Theory**: Study of eigenvalues and eigenvectors of matrices and linear operators.
  - **Eigenvalues**: Scalars $\lambda$ such that $A \mathbf{v} = \lambda \mathbf{v}$.
  - **Eigenvectors**: Vectors $\mathbf{v}$ that satisfy the equation above.

## Topics Covered
- **Diagonalization**: The process of converting a matrix into a diagonal form using its eigenvalues and eigenvectors.
  - $$ A = PDP^{-1} $$
- **Spectral Theorem**: The theorem states that any symmetric matrix can be diagonalized by an orthogonal matrix.
- **Applications**: Use in differential equations, quantum mechanics, and optimization.
# 7. Euclidean Structure

## Key Concepts
- **Euclidean Space**: Space with a dot product that defines angles and lengths.
  - **Dot Product**: 
    $$ \mathbf{u} \cdot \mathbf{v} = \sum_{i=1}^n u_i v_i $$
- **Norms**: Measures of vector length.
  - **Euclidean Norm**: 
    $$ \| \mathbf{v} \| = \sqrt{\sum_{i=1}^n v_i^2} $$

## Topics Covered
- **Orthogonality**: Vectors are orthogonal if their dot product is zero.
- **Orthogonal Projection**: Projection of one vector onto another.
  - $$ \text{Proj}_{\mathbf{u}} \mathbf{v} = \frac{\mathbf{u} \cdot \mathbf{v}}{\mathbf{u} \cdot \mathbf{u}} \mathbf{u} $$
- **Applications**: Use in geometry, computer graphics, and physics.
# 8. Spectral Theory of Self-Adjoint Mappings of a Euclidean Space into Itself

## Key Concepts
- **Self-Adjoint Mappings**: Mappings where $T = T^*$ (transpose or adjoint of $T$).
- **Spectral Theorem for Self-Adjoint Operators**: Every self-adjoint operator can be diagonalized by an orthogonal matrix.

## Topics Covered
- **Eigenvalue Decomposition**: The decomposition of a self-adjoint operator into its eigenvalues and eigenvectors.
  - $$ T(\mathbf{v}) = \lambda \mathbf{v} $$
- **Orthogonal Basis**: Basis consisting of orthogonal vectors used for diagonalization.
- **Applications**: Use in quantum mechanics and stability analysis.
# 9. Calculus of Vector- and Matrix-Valued Functions

## Key Concepts
- **Vector-Valued Functions**: Functions that output vectors.
  $$ \mathbf{f}(t) = \begin{pmatrix} f_1(t) \\ f_2(t) \\ \vdots \\ f_n(t) \end{pmatrix} $$
- **Matrix-Valued Functions**: Functions that output matrices.
  - $$ F(t) = \begin{pmatrix} f_{11}(t) & f_{12}(t) \\ f_{21}(t) & f_{22}(t) \end{pmatrix} $$

## Topics Covered
- **Differentiation and Integration**: Techniques for differentiating and integrating vector and matrix functions.
- **Applications**: Use in dynamics, control theory, and optimization.
- **Jacobian Matrix**: Matrix of all first-order partial derivatives.

$$ J = \frac{\partial \mathbf{f}}{\partial \mathbf{x}} $$
# 10. Matrix Inequalities

## Key Concepts
- **Matrix Norms**: Measures of the size of a matrix.
  - **Frobenius Norm**: 
    $$ \| A \|_F = \sqrt{\sum_{i,j} a_{ij}^2} $$
- **Matrix Inequalities**: Relations between norms and matrix properties.
  - **Cauchy-Schwarz Inequality**: 
    $$ \| AB \| \leq \| A \| \| B \| $$

## Topics Covered
- **Norm Inequalities**: Relationships between different matrix norms.
- **Applications**: Use in stability analysis and numerical methods.
# 11. Kinematics and Dynamics

## Key Concepts
- **Kinematics**: Study of motion without considering forces.
- **Dynamics**: Study of motion considering forces and torques.

## Topics Covered
- **Transformation Matrices**: Matrices used to represent rotations and translations.
  - **Rotation Matrix**: 
    $$ R = \begin{pmatrix}
    \cos \theta & -\sin \theta \\
    \sin \theta & \cos \theta
    \end{pmatrix} $$
- **Newton's Laws**: Equations of motion used to describe dynamics.
  - **Newton's Second Law**: 
    $$ \mathbf{F} = m \mathbf{a} $$
# 12. Convexity

## Key Concepts
- **Convex Sets**: Sets where the line segment between any two points in the set lies within the set.
  - **Definition**: A set $C$  is convex if:
    - $$ \text{For all } \mathbf{x}, \mathbf{y} \in C \text{ and } \alpha \in [0,1], \; \alpha \mathbf{x} + (1-\alpha) \mathbf{y} \in C $$
- **Convex Functions**: Functions where the line segment between any two points on the graph lies above the graph.
  - **Definition**: A function $f$ is convex if:
    - $$ f(\alpha \mathbf{x} + (1-\alpha) \mathbf{y}) \leq \alpha f(\mathbf{x}) + (1-\alpha) f(\mathbf{y}) $$

## Topics Covered
- **Properties of Convex Sets**: Closure properties and intersections.
- **Applications**: Use in optimization, economics, and engineering.
# 13. The Duality Theorem

## Key Concepts
- **Duality**: The principle that every optimization problem has a corresponding dual problem.
- **Strong Duality**: The optimal values of the primal and dual problems are equal under certain conditions.

## Topics Covered
- **Primal and Dual Problems**: Formulating and solving dual problems.
- **Applications**: Use in linear programming and optimization theory.
- **KKT Conditions**: Karush-Kuhn-Tucker conditions for solving constrained optimization problems.
# 14. Normed Linear Spaces

## Key Concepts
- **Normed Spaces**: Vector spaces with a norm that defines the length of vectors.
  - **Definition**: A norm $\| \cdot \|$ on a vector space $V$ is a function:
    - $$ \| \mathbf{v} \| \geq 0 $$
      $$ \| \mathbf{v} \| = 0 \text{ if and only if } \mathbf{v} = \mathbf{0} $$
      $$ \| \alpha \mathbf{v} \| = |\alpha| \| \mathbf{v} \| $$
      $$ \| \mathbf{u} + \mathbf{v} \| \leq \| \mathbf{u} \| + \| \mathbf{v} \| $$

## Topics Covered
- **Types of Norms**: Examples include $p$-norms and infinity norm.
- **Banach Spaces**: Complete normed spaces.
- **Applications**: Use in functional analysis and approximation theory.
# 15. Linear Mappings Between Normed Linear Spaces

## Key Concepts
- **Continuous Linear Mappings**: Mappings that preserve linearity and continuity.
- **Isomorphisms**: Mappings that are bijective and preserve structure.
  - **Definition**: A linear map $T$ is an isomorphism if there exists $T^{-1}$ such that:
    - $$ T \circ T^{-1} = I \text{ and } T^{-1} \circ T = I $$

## Topics Covered
- **Operator Norm**: Measure of the size of an operator.
  - $$ \| T \| = \sup_{\| \mathbf{v} \| = 1} \| T(\mathbf{v}) \| $$
- **Dual Spaces**: Space of all continuous linear functionals on a normed space.
- **Applications**: Use in functional analysis and operator theory.
# 16. Positive Matrices

## Key Concepts
- **Positive Matrices**: Matrices where all eigenvalues are positive.
- **Positive Definite Matrices**: Matrices $A$ for which:
  - $$ \mathbf{x}^T A \mathbf{x} > 0 \text{ for all } \mathbf{x} \neq \mathbf{0} $$

## Topics Covered
- **Properties of Positive Matrices**: Including symmetric and diagonalizable matrices.
- **Applications**: Use in optimization, statistics, and numerical analysis.
# 17. How to Solve Systems of Linear Equations

## Key Concepts
- **System of Linear Equations**: A set of equations where each equation is linear.
  - General form:
    $$ A \mathbf{x} = \mathbf{b} $$
  - Where $A$ is a matrix of coefficients, $\mathbf{x}$ is a vector of variables, and $\mathbf{b}$ is a vector of constants.

## Methods for Solving
- **Gaussian Elimination**: A method to reduce a system to row echelon form.
  - Steps involve:
    - Swapping rows
    - Multiplying rows by non-zero constants
    - Adding or subtracting rows to eliminate variables
- **Matrix Inversion**: Solving $A \mathbf{x} = \mathbf{b}$ by finding $\mathbf{x} = A^{-1} \mathbf{b}$, if $A$ is invertible.
  - Conditions for invertibility:
    - The matrix $A$ must be square.
    - The determinant of $A$ must be non-zero.
- **LU Decomposition**: Decomposing $A$ into a product of a lower triangular matrix $L$ and an upper triangular matrix $U$. 
	- Solve $A \mathbf{x} = \mathbf{b}$ by: 
	- First solving $L \mathbf{y} = \mathbf{b}$ for $\mathbf{y}$
	- Then solving $U \mathbf{x} = \mathbf{y}$ for $\mathbf{x}$
# 18. How to Calculate the Eigenvalues of Self-Adjoint Matrices

## Key Concepts
- **Eigenvalues and Eigenvectors**: For a matrix $A$, eigenvalues $\lambda$ and eigenvectors $\mathbf{v}$ satisfy:
  - $$ A \mathbf{v} = \lambda \mathbf{v} $$
- **Self-Adjoint Matrices**: Matrices $A$ that are equal to their own transpose (or adjoint), i.e., $A = A^T$ or  $A = A^*$.

## Calculating Eigenvalues
- **Characteristic Polynomial**: To find eigenvalues $\lambda$, solve:
  - $$ \text{det}(A - \lambda I) = 0 $$
  - Where $I$ is the identity matrix and $\text{det}$ denotes the determinant.
- **Properties of Eigenvalues**:
  - For self-adjoint matrices, eigenvalues are real.
  - Eigenvectors corresponding to distinct eigenvalues are orthogonal.

## Steps for Calculation
1. **Form the Characteristic Polynomial**:
   - Subtract $\lambda$ times the identity matrix $I$ from $A$ and compute the determinant.
   - Solve the resulting polynomial equation for $\lambda$.
2. **Find Eigenvectors**:
   - For each eigenvalue $\lambda$, solve $(A - \lambda I) \mathbf{v} = \mathbf{0}$  for the eigenvector $\mathbf{v}$.

## Applications
- **Physics**: Use in quantum mechanics and vibrational analysis.
- **Engineering**: Use in stability analysis and control systems.
- **Machine Learning**: Use in dimensionality reduction and Principal Component Analysis (PCA).
