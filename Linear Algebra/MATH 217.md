---
title: Linear Algebra Course Notes
author: Kensukeken
date: June 28th, 2024
---

# Introduction

## Definitions and Notations

In linear algebra, we deal with scalars, vectors, and matrices. Scalars are single numbers, vectors are ordered lists of numbers, and matrices are rectangular arrays of numbers.

## Scalars, Vectors, and Matrices

A scalar is a single number, usually denoted by a lowercase letter (e.g., \(a, b, c\)). A vector is an ordered list of numbers, denoted by a lowercase bold letter (e.g., $\mathbf{v}$). A matrix is a rectangular array of numbers, denoted by an uppercase letter (e.g., \(A, B, C\)).

# Systems of Linear Equations

## Row Reduction and Echelon Forms

To solve systems of linear equations, we use row reduction to transform the augmented matrix into row echelon form.

$$
\begin{array}{ccc|c}
1 & 2 & 3 & 4 \\
0 & 1 & 4 & 5 \\
0 & 0 & 2 & 6 \\
\end{array}
$$
## Solutions to Linear Systems

A system of linear equations can have no solution, exactly one solution, or infinitely many solutions. This can be determined by the row echelon form of the augmented matrix.

# Matrix Algebra

## Matrix Operations

Matrices can be added, subtracted, and multiplied, and they can also be multiplied by scalars.

$$
A = \begin{pmatrix}
1 & 2 \\
3 & 4
\end{pmatrix}, \quad B = \begin{pmatrix}
5 & 6 \\
7 & 8
\end{pmatrix}
$$

$$
A + B = \begin{pmatrix}
6 & 8 \\
10 & 12
\end{pmatrix}
$$

## Inverses and Transposes

The transpose of a matrix \(A\) is denoted \(A^T\). A matrix \(A\) is invertible if there exists a matrix \(B\) such that \(AB = BA = I\).

# Determinants

## Properties of Determinants

The determinant is a scalar value that can be computed from a square matrix.

$$
\det(A) = a_{11}a_{22} - a_{12}a_{21}
$$

## Cofactor Expansion

The determinant can be computed using cofactor expansion.

# Vector Spaces

## Definitions and Examples

A vector space is a collection of vectors that can be added together and multiplied by scalars.

## Subspaces, Basis, and Dimension

A subspace is a subset of a vector space that is also a vector space. A basis is a set of vectors that span the vector space, and the dimension is the number of vectors in the basis.

# Eigenvalues and Eigenvectors

## Characteristic Equation

The eigenvalues of a matrix \(A\) are found by solving the characteristic equation \(\det(A - \lambda I) = 0\).

## Diagonalization

A matrix is diagonalizable if it has enough eigenvectors to form a basis.

# Orthogonality

## Inner Product, Norm, and Orthogonality

The inner product of two vectors is a scalar. The norm of a vector is its length, and two vectors are orthogonal if their inner product is zero.

## Gram-Schmidt Process

The Gram-Schmidt process is a method for orthogonalizing a set of vectors in an inner product space.

# Applications

## Linear Transformations

A linear transformation is a mapping between vector spaces that preserves addition and scalar multiplication.

## Applications in Differential Equations

Linear algebra techniques are used to solve systems of differential equations.


## Maps Between Spaces
Definition: Suppose that V and W are vector spaces of dimensions $n$ and $m$ with bases $B$ and $D$, and that $h: V \rightarrow W$ is a linear map. If
$$\operatorname{Rep}_D\left(h\left(\vec{\beta}_1\right)\right)=\left(\begin{matrix}
h_{1,1} \\
h_{2,1} \\
\vdots \\
h_{m,1}
\end{matrix}\right)_D \quad \ldots, \quad \operatorname{Rep}_D\left(h\left(\vec{\beta}_n\right)\right)=\left(\begin{matrix}
h_{1,n} \\
h_{2,n} \\
\vdots \\
h_{m,n}
\end{matrix}\right)_D,$$
then
$$\operatorname{Rep}_{B, D}(h) = \begin{pmatrix}
h_{1,1} & h_{1,2} & \ldots & h_{1,n} \\
h_{2,1} & h_{2,2} & \ldots & h_{2,n} \\
\vdots & \vdots & \ddots & \vdots \\
h_{m,1} & h_{m,2} & \ldots & h_{m,n}
\end{pmatrix}_{B, D}$$
is the matrix representation of h with respect to $B$ and $D$

Proof:

$$\operatorname{Rep}_D\left(h\left(\vec{\beta}_i\right)\right) = 
\begin{pmatrix}
h_{1,i} \\
h_{2,i} \\
\vdots \\
h_{m,i}
\end{pmatrix}_D \quad \text{for } i = 1, 2, \ldots, n$$
$$\operatorname{Rep}_{B, D}(h) = \left[
\operatorname{Rep}_D\left(h\left(\vec{\beta}_1\right)\right) \mid 
\operatorname{Rep}_D\left(h\left(\vec{\beta}_2\right)\right) \mid 
\cdots \mid 
\operatorname{Rep}_D\left(h\left(\vec{\beta}_n\right)\right)
\right]$$
$$= \begin{pmatrix}
h_{1,1} & h_{1,2} & \cdots & h_{1,n} \\
h_{2,1} & h_{2,2} & \cdots & h_{2,n} \\
\vdots & \vdots & \ddots & \vdots \\
h_{m,1} & h_{m,2} & \cdots & h_{m,n}
\end{pmatrix}_{B, D}$$
Q.E.D.