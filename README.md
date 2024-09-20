# Infix to Prefix Expression Converter

This C++ program converts an infix expression into its prefix (Polish) notation using a stack data structure. The program accounts for operator precedence and parentheses to ensure accurate conversion.

## Features

- **Infix to Prefix Conversion**: Convert expressions in infix notation to prefix notation.
- **Operator Precedence Handling**: Maintain the correct order of operations based on operator precedence.
- **Parentheses Management**: Handle parentheses to group expressions correctly.

## Usage

1. **Input Expression**:
   - The program processes a predefined infix expression (e.g., `X+Y*Z/W+U`).

2. **Reversing Expression**:
   - The infix expression is reversed before processing to facilitate conversion.

3. **Processing**:
   - The program iterates through the reversed expression, using a stack to manage operators and operands.

4. **Output**:
   - The resulting prefix expression is printed after converting the input expression.

### Example

In the given code:

- The infix expression `X+Y*Z/W+U` is reversed to `/W+U*Z+YX`.
- The conversion process results in the prefix expression `+X/Y*Z+U`.

**Output**:
```plaintext
Reversed expression= /W+U*Z+YX
Prefix expression= +X/Y*Z+U
