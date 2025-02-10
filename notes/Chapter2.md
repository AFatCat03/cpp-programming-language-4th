# A Tour of C++: The Basics
## The Basics
- C++ is a statically typed language. That is, the type of every entity (e.g., object, value, name, and expression) must be known to the compiler at its point of use. The type of an object determines the set of operations applicable to it.
### Hello, World!
- Every C++ program must have exactly one global function named `main()`. The program starts by executing that function. ... A nonzero value from `main()` indicates failure.
### Types, Variables, and Arithmetic
- A *declaration* is a statement that introduces a name into the program. It specifies a type for the named entity:
	- A type defines a set of possible values and a set of operations (for an object).
	- An object is some memory that holds a value of some type.
	- A value is a set of bits interpreted according to a type.
	- A variable is a named object.
- The `=` form is traditional and dates back to C, but if in doubt, use the general `{}`-list form (§6.3.5.2).
If nothing else, it saves you from conversions that lose information (narrowing conversions; §10.5)
- Don’t introduce a name until you have a suitable value for it.
### Constants
- C++ supports two notions of immutability (§7.5):													
	- `const`: meaning roughly "**I promise not to change this value**" (§7.5). This is used primarily to specify interfaces, so that data can be passed to functions without fear of it being modified. The compiler enforces the promise made by const.		
	- `constexpr`: meaning roughly "**to be evaluated at compile time**" (§10.4). This is used primarily to specify constants, to allow placement of data in memory where it is unlikely to be corrupted, and for performance.
- For a function to be usable in a constant expression, that is, in an expression that will be evaluated by the compiler, it must be defined `constexpr`. For example:
</br>`constexpr double square(double x) { return x∗x; }`</br>
To be `constexpr`, a function must be rather simple: **just a `return`-statement computing a value**. A `constexpr` function can be used for non-constant arguments, but when that is done the result is not a constant expression.
### Pointers, Arrays, and Loops
- In *declarations*, `[]` means "array of" and `∗` means "pointer to".
- In an *expression*, prefix unary `∗` means "contents of" and prefix unary `&` means "address of".
- In a *declaration*, the unary suffix `&` means "reference to".
- A reference cannot be made to refer to a different object after its initialization.
- There is only one `nullptr` shared by all pointer types.
- It is often wise to check that a pointer argument that is supposed to point to something, actually points to something.
## User-Defined Types
### Structures
- We use `.` (dot) to access `struct` members through a name (and through a reference) and `−>` to access `struct` members through a pointer.
### Classes
- The interface is defined by the `public` members of a class, and `private` members are accessible only through that interface.
- A "function" with the same name as its class is called a *constructor*, that is, a function used to construct objects of a class.
### Enumerations
- Enumerations are used to represent small sets of integer values.
## Modularity
### Error Handling
#### Invariants
- Such a statement of what is assumed to be true for a class is called a *class invariant*, or simply an *invariant*.
#### Static Assertions
- The `static_assert` mechanism can be used for anything that can be expressed in terms of constant expressions (§2.2.3, §10.4).
## Advice
- Don’t panic! All will become clear in time; §2.1.
- You don’t hav e to know every detail of C++ to write good programs; §1.3.1.
- Focus on programming techniques, not on language features; §2.1.