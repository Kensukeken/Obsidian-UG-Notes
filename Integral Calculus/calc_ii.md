# Integral Calculus


## Numerical Integration
Numerical integration is used when an integral cannot be solved analytically. Common methods include:
1. **Trapezoidal Rule**: Approximates the region under the graph of the function as a series of trapezoids.
    $$
    \int_a^b f(x) \, dx \approx \frac{b - a}{2n} \left[ f(x_0) + 2 \sum_{i=1}^{n-1} f(x_i) + f(x_n) \right]
    $$
2. **Simpson's Rule**: Uses parabolic segments to approximate the integral.
    $$
    \int_a^b f(x) \, dx \approx \frac{b - a}{3n} \left[ f(x_0) + 4 \sum_{i=1,3,5,\ldots}^{n-1} f(x_i) + 2 \sum_{i=2,4,6,\ldots}^{n-2} f(x_i) + f(x_n) \right]
    $$
3. **Monte Carlo Integration**: Uses random sampling to approximate the value of an integral, particularly useful for high-dimensional integrals.
    $$
    \int_D f(x) \, dx \approx \frac{1}{N} \sum_{i=1}^N f(x_i)
    $$


## Further Reading
For more in-depth study, consider the following resources:
1. **Books**:
    - "Calculus" by Michael Spivak
    - "Thomas' Calculus" by George B. Thomas Jr.
    - "Calculus: Early Transcendentals" by James Stewart
    - "The Calculus Lifesaver" by Adrian Banner
    - "Integral Calculus for Beginners" by Joseph Edwards
2. **Online Courses**:
    - MIT OpenCourseWare: Single Variable Calculus
    - Khan Academy: Integral Calculus
    - Coursera: Calculus courses by various universities
    - edX: Calculus courses by various institutions
3. **Research Papers**:
    - "The History of the Calculus and Its Conceptual Development" by Carl B. Boyer
    - "A Brief History of Calculus" by W. W. Rouse Ball

## Practice Problems
To master integral calculus, practice is essential. Here are some problems to get started:
1. Evaluate the integral:
    $$
    \int_0^1 (3x^2 + 2x + 1) \, dx
    $$
2. Find the area between the curves $ y = x^2 $ and $ y = x + 2 $.
3. Compute the volume of the solid obtained by rotating the region bounded by $ y = \sqrt{x} $ and $ y = x^2 $ about the x-axis.
4. Determine the arc length of the curve $ y = \ln(x) $ from $ x = 1 $ to $ x = e $.
5. Use the trapezoidal rule to approximate the integral $ \int_0^2 e^{-x^2} \, dx $ with $ n = 4 $.
6. Apply Simpson's rule to approximate the integral $ \int_1^3 \frac{1}{x} \, dx $ with $ n = 6 $.
7. Evaluate the improper integral:
    $$
    \int_1^\infty \frac{1}{x^2} \, dx
    $$
8. Use Monte Carlo integration to approximate the integral $ \int_0^1 e^{-x^2} \, dx $ using 1000 random samples.
9. Find the surface area of the solid obtained by rotating the curve $ y = \sin(x) $ from $ x = 0 $ to $ x = \pi $ about the x-axis.
10. Determine the centroid of the region bounded by $ y = x^2 $ and $ y = 0 $ from $ x = 0 $ to $ x = 1 $.


