# CPP-Module-03

This repository contains my solutions for Module 03. In these exercises I built upon the ClapTrap base class, creating derived robot types with specialized behavior and demonstrating correct inheritance, construction/destruction chaining, and new abilities. Below is an overview of each exercise, including file lists, implementation plans, and lessons learned.

---

## ex:00 – Aaaaand... OPEN!

**Files:** Makefile, main.cpp, ClapTrap.hpp, ClapTrap.cpp

**Plan**
1. **Implement `ClapTrap` class** with **private** attributes:
   - `std::string name;` (initialized via constructor parameter)
   - `unsigned int hitPoints = 10;`
   - `unsigned int energyPoints = 10;`
   - `unsigned int attackDamage = 0;`
2. **Public member functions:**
   - `void attack(const std::string& target);`  (costs 1 EP, prints attack message)
   - `void takeDamage(unsigned int amount);`    (subtracts HP, floor 0, prints damage message)
   - `void beRepaired(unsigned int amount);`    (costs 1 EP, adds HP, prints repair message)
3. **Logging:** constructor and destructor print messages for tracing object lifetimes.
4. **Testing:**
   - `main.cpp` creates a `ClapTrap`, exercises attack/takeDamage/beRepaired, including edge cases (zero HP/EP).

**Lessons Learned**
- Class design with **encapsulation** and **private** data.
- Implementation of **behavioral methods** respecting resource constraints (HP/EP).
- Importance of **logging** to verify object lifecycle and method calls.

---

## ex:01 – Serena, My Love!

**Files:** Files from ex:00 + ScavTrap.hpp, ScavTrap.cpp

**Plan**
1. **Implement `ScavTrap`** as a **public** subclass of `ClapTrap`.
2. **Stats override:** in constructor chain to `ClapTrap(name)`, then set:
   - `hitPoints = 100;`
   - `energyPoints = 50;`
   - `attackDamage = 20;`
3. **Override** `attack(const std::string&)` to print ScavTrap-specific message while preserving resource checks.
4. **New ability:** `void guardGate() const;` prints "Gate keeper mode" message.
5. **Copy semantics:** implement copy constructor and assignment operator, with logging.
6. **Testing:**
   - Construction/destruction chaining.
   - Inherited methods, `guardGate()`, and copy behavior in a nested scope.

**Lessons Learned**
- Use of **inheritance** and **constructor chaining** to reuse base functionality.
- Overriding methods to customize behavior in derived classes.
- Implementing **rule of three** (copy ctor, copy assignment, destructor) in subclasses.

---

## ex:02 – Repetitive Work

**Files:** Files from ex:01 + FragTrap.hpp, FragTrap.cpp

**Plan**
1. **Implement `FragTrap`** derived from `ClapTrap`.
2. **Stats override:** chain to base then set:
   - `hitPoints = 100;`
   - `energyPoints = 100;`
   - `attackDamage = 30;`
3. **Inherited methods** (`attack`, `takeDamage`, `beRepaired`) remain unchanged in logic.
4. **New ability:** `void highFivesGuys() const;` prints a high-five request.
5. **Copy semantics:** copy constructor and assignment with logging.
6. **Testing:**
   - Construction/destruction chaining.
   - All inherited methods, `highFivesGuys()`, and nested-scope copy behavior.

**Lessons Learned**
- Further practice with **inheritance**, customizing only what is necessary.
- Adding **unique abilities** in derived classes.
- Ensuring **correct destruction order** in complex hierarchies.

---

## Final Thoughts

Module 03 reinforced:

- Proper use of **private** vs. **protected** and controlled access in inheritance.
- **Constructor/destructor chaining** in class hierarchies.
- Overriding and extending base behavior while reusing existing code.
- Implementing **rule of three** in both base and derived classes.

All code compiles under:
```
c++ -Wall -Wextra -Werror -std=c++98
```

