# The C Projects Roadmap — 660 Educational C Projects

Every project is designed to **teach C**. Each entry contains: a folder name (`Folder`), a one-line definition (`Description`), a **what-you-build + what-it-is-good-for summary (`Summary`)**, difficulty, the C topic it teaches (`Teaches (C)`), topics, estimated lines of code, and libraries.

---

## Folder & Filtering Convention (Naming)

Every project has its own folder. Scheme:

```
NN-category-name/NNN-project-name/
```

- `NN` = category number (01–31) → folders list in the correct order.
- `NNN` = project number (001–660) → the global order is preserved.
- Names are **kebab-case** (lowercase, hyphenated) → safe on every operating system.

Example tree:

```
c-projects-roadmap/
├── 01-c-fundamentals/
│   ├── 001-temperature-converter/
│   │   ├── README.md
│   │   ├── Makefile
│   │   ├── src/main.c
│   │   └── tests/
│   └── ...
└── 31-git-build-test-debug/
    └── 660-full-debugger-dwarf/
```

### Filtering tags (put at the top of each README)

```
level: beginner        # beginner | intermediate | advanced
category: algorithms
teaches: pointers, recursion, bit-manipulation
libs: none             # none | ncurses | sdl2 | openssl | pthread | ...
loc: 450
```

Example filter commands:

```bash
grep -rl "^level: beginner" */*/README.md      # all beginner projects
grep -rl "teaches:.*pointers" */*/README.md    # projects that teach pointers
grep -rl "^libs: none" */*/README.md           # no external libs, start right away
grep -rl "^libs:.*ncurses" */*/README.md       # ncurses projects
```

### Category folders

| # | Folder | Projects |
|---|--------|----------|
| 01 | `01-c-fundamentals` | 001–026 |
| 02 | `02-console-apps` | 027–048 |
| 03 | `03-mathematics` | 049–075 |
| 04 | `04-utilities` | 076–096 |
| 05 | `05-file-processing` | 097–116 |
| 06 | `06-text-processing` | 117–137 |
| 07 | `07-data-structures` | 138–164 |
| 08 | `08-algorithms` | 165–197 |
| 09 | `09-games` | 198–224 |
| 10 | `10-operating-systems` | 225–245 |
| 11 | `11-linux-system` | 246–270 |
| 12 | `12-shell` | 271–283 |
| 13 | `13-networking` | 284–309 |
| 14 | `14-web-http` | 310–329 |
| 15 | `15-concurrency` | 330–349 |
| 16 | `16-memory-management` | 350–366 |
| 17 | `17-graphics` | 367–392 |
| 18 | `18-ncurses-tui` | 393–408 |
| 19 | `19-cryptography` | 409–431 |
| 20 | `20-security-reversing` | 432–457 |
| 21 | `21-image-processing` | 458–476 |
| 22 | `22-audio-dsp` | 477–492 |
| 23 | `23-compression` | 493–505 |
| 24 | `24-databases` | 506–524 |
| 25 | `25-compilers-vms` | 525–553 |
| 26 | `26-emulators` | 554–566 |
| 27 | `27-embedded-iot` | 567–590 |
| 28 | `28-ai-ml` | 591–611 |
| 29 | `29-parsers-serialization` | 612–627 |
| 30 | `30-devtools` | 628–648 |
| 31 | `31-git-build-test-debug` | 649–660 |

---

## 01. C Fundamentals (001–026) · `01-c-fundamentals`

001. Temperature Converter
Folder: 01-c-fundamentals/001-temperature-converter
Description: Convert between Celsius, Fahrenheit, and Kelvin with input validation.
Summary: You build a small menu program that reads a temperature and unit, converts across the three scales, and rejects bad input. It is the ideal first step for learning C's basic I/O, conversion functions, and validation.
Difficulty: Beginner
Teaches (C): scanf/printf, float vs int arithmetic, defining functions, input validation
Topics: I/O, arithmetic, functions
Estimated LOC: 80
Libraries: none

002. Number Base Converter
Folder: 01-c-fundamentals/002-number-base-converter
Description: Convert integers between binary, octal, decimal, and hexadecimal.
Summary: You build a tool that converts a number back and forth among bases 2/8/10/16. It is a perfect exercise for grasping how computers store numbers and the logic of bits and bases.
Difficulty: Beginner
Teaches (C): bitwise operators, integer division/mod, char arrays, loops
Topics: bitwise, loops, strings
Estimated LOC: 150
Libraries: none

003. Simple Calculator
Folder: 01-c-fundamentals/003-simple-calculator
Description: Evaluate `a op b` expressions from command-line arguments.
Summary: You build a calculator that reads expressions like `5 + 3` from the command line and prints the result. It teaches handling program arguments (argc/argv) and managing error cases like division by zero.
Difficulty: Beginner
Teaches (C): argc/argv, atof/strtol, switch-case, error handling
Topics: argv parsing, switch, error handling
Estimated LOC: 120
Libraries: none

004. FizzBuzz Variants Engine
Folder: 01-c-fundamentals/004-fizzbuzz-engine
Description: Configurable FizzBuzz where divisor/word pairs are user-defined.
Summary: You turn the classic FizzBuzz into a flexible engine where divisor-word pairs are user-defined. It teaches data-driven thinking and combining the modulo operation with a struct array.
Difficulty: Beginner
Teaches (C): modulo, arrays, struct basics, loop control
Topics: modulo, arrays, structs
Estimated LOC: 100
Libraries: none

005. Prime Number Checker & Sieve
Folder: 01-c-fundamentals/005-prime-sieve
Description: Test primality and list primes up to N using the Sieve of Eratosthenes.
Summary: You build a tool that tests whether a number is prime and lists all primes up to N with the Sieve of Eratosthenes. It concretely shows the difference between a naive method and an efficient algorithm.
Difficulty: Beginner
Teaches (C): nested loops, boolean arrays, dynamic memory (malloc), optimization
Topics: loops, arrays, optimization
Estimated LOC: 120
Libraries: none

006. Fibonacci & Sequence Explorer
Folder: 01-c-fundamentals/006-fibonacci-sequences
Description: Generate Fibonacci, factorial, and triangular numbers iteratively and recursively.
Summary: You build an explorer that generates Fibonacci, factorial, and triangular numbers both iteratively and recursively. It teaches comparing recursion vs iteration and when integer overflow happens.
Difficulty: Beginner
Teaches (C): recursion vs iteration, overflow awareness, unsigned long long
Topics: recursion, iteration, overflow
Estimated LOC: 130
Libraries: none

007. Grade Book Calculator
Folder: 01-c-fundamentals/007-grade-book
Description: Compute averages, min/max, and letter grades for a class roster.
Summary: You build a program that computes averages, min/max, and letter grades for a class roster. It is a nice start for struct arrays, sorting with qsort, and a real reporting flow.
Difficulty: Beginner
Teaches (C): struct arrays, qsort, passing arrays to functions
Topics: arrays, structs, sorting
Estimated LOC: 180
Libraries: none

008. Roman Numeral Converter
Folder: 01-c-fundamentals/008-roman-numerals
Description: Convert between Roman numerals and Arabic integers both directions.
Summary: You build a two-way converter that turns Roman numerals like `MCMXCIV` into integers and back. It practices lookup tables and string-scanning techniques.
Difficulty: Beginner
Teaches (C): lookup tables, string scanning, character comparison
Topics: strings, lookup tables, loops
Estimated LOC: 160
Libraries: none

009. Simple Interest & Loan Calculator
Folder: 01-c-fundamentals/009-loan-calculator
Description: Compute simple/compound interest and amortization schedules.
Summary: You build a finance tool that computes simple/compound interest and produces a monthly amortization schedule. It teaches floating-point arithmetic and printing cleanly formatted tables.
Difficulty: Beginner
Teaches (C): pow/floating point, formatted output (%.2f), building tables with loops
Topics: floating point, loops, formatting
Estimated LOC: 150
Libraries: math

010. Unit Conversion Toolkit
Folder: 01-c-fundamentals/010-unit-conversion
Description: Convert length, mass, volume, and speed across metric and imperial units.
Summary: You build an extensible toolkit that converts length, mass, volume, and speed between metric and imperial. It teaches data-driven design with struct tables and function pointers.
Difficulty: Beginner
Teaches (C): struct tables, function pointers, data-driven design
Topics: structs, function pointers, tables
Estimated LOC: 220
Libraries: none

011. Digital Clock (terminal tick)
Folder: 01-c-fundamentals/011-digital-clock
Description: Print a live updating HH:MM:SS clock in the terminal.
Summary: You show a digital clock in the terminal that updates once per second. It teaches reading system time and terminal tricks like updating a line in place (carriage return).
Difficulty: Beginner
Teaches (C): time.h, localtime, sleep, updating a line with carriage return
Topics: time, loops, terminal control
Estimated LOC: 90
Libraries: none

012. Number Guessing Game
Folder: 01-c-fundamentals/012-number-guessing
Description: Classic higher/lower guessing game with attempt tracking.
Summary: You build a game that makes the player guess a hidden number with higher/lower hints while counting attempts. It is a fun first project for random number generation and loop/condition logic.
Difficulty: Beginner
Teaches (C): rand/srand, seeding, conditional branching, loops
Topics: random, loops, conditionals
Estimated LOC: 90
Libraries: none

013. Bitwise Operations Playground
Folder: 01-c-fundamentals/013-bitwise-playground
Description: Interactive tool that demonstrates AND/OR/XOR/shift on user integers.
Summary: You build an interactive tool that applies AND/OR/XOR/shift on user numbers and prints the result in binary. It builds solid intuition by visualizing bit-level operations.
Difficulty: Beginner
Teaches (C): bit masks, shifting, printing binary representation, unsigned types
Topics: bitwise, binary display, masks
Estimated LOC: 160
Libraries: none

014. GPA & CGPA Tracker
Folder: 01-c-fundamentals/014-gpa-tracker
Description: Track semester courses and compute weighted GPA over time.
Summary: You build a tracker that takes courses and credits and computes a weighted GPA/CGPA, saving results to a file. It teaches structs, array management, and persisting data to a file together.
Difficulty: Beginner
Teaches (C): structs, array management, saving to a file (fprintf/fscanf)
Topics: structs, arrays, file save
Estimated LOC: 220
Libraries: none

015. Simple Menu-Driven Bank Ledger
Folder: 01-c-fundamentals/015-bank-ledger
Description: In-memory deposit/withdraw/balance with a text menu.
Summary: You build a menu-driven ledger that deposits/withdraws/queries balance and prevents negative balances. It is a classic exercise for holding state and splitting a program into functions.
Difficulty: Beginner
Teaches (C): holding state, splitting into functions, input validation
Topics: state, functions, validation
Estimated LOC: 200
Libraries: none

016. Matrix Basics Library
Folder: 01-c-fundamentals/016-matrix-basics
Description: Add, multiply, transpose, and print 2D matrices of any size.
Summary: You build a library that adds, multiplies, transposes, and prints matrices of any size. It forms a solid base for dynamically allocated 2D arrays and pointer arithmetic.
Difficulty: Beginner
Teaches (C): 2D arrays, dynamic matrices with malloc, pointer arithmetic
Topics: 2D arrays, dynamic allocation, loops
Estimated LOC: 250
Libraries: none

017. String Utility Library
Folder: 01-c-fundamentals/017-string-utils
Description: Reimplement strlen, strcpy, strcat, strcmp, strtok from scratch.
Summary: You reimplement strlen, strcpy, strcat, strcmp, and strtok yourself. Seeing behind the standard library, it deeply teaches pointer and null-termination logic.
Difficulty: Beginner
Teaches (C): pointers, null-termination, how string.h works
Topics: pointers, arrays, null-termination
Estimated LOC: 240
Libraries: none

018. Command-Line Stopwatch & Timer
Folder: 01-c-fundamentals/018-stopwatch-timer
Description: Start/stop stopwatch and countdown timer with lap support.
Summary: You build a tool with a start/stop stopwatch and countdown timer that records laps. It teaches time measurement and gracefully catching Ctrl+C (SIGINT).
Difficulty: Beginner
Teaches (C): clock/time, signals (SIGINT), loop timing
Topics: time, signals, loops
Estimated LOC: 160
Libraries: none

019. Simple ASCII Table Explorer
Folder: 01-c-fundamentals/019-ascii-explorer
Description: Print ASCII codes and let users look up characters and ranges.
Summary: You build an explorer that prints ASCII codes and lets the user look up characters and ranges. It clearly shows that in C a char is really a number, plus character arithmetic.
Difficulty: Beginner
Teaches (C): char is an int, ctype.h, character arithmetic
Topics: char arithmetic, loops, formatting
Estimated LOC: 90
Libraries: none

020. Quadratic & Polynomial Root Finder
Folder: 01-c-fundamentals/020-root-finder
Description: Solve quadratics and evaluate polynomials at given points.
Summary: You build a tool that solves quadratics via the discriminant and evaluates polynomials at given points. It teaches turning math formulas into code and handling floating-point edge cases.
Difficulty: Beginner
Teaches (C): sqrt, discriminant, floating-point edge cases
Topics: math, floating point, discriminant
Estimated LOC: 140
Libraries: math

021. Dice & Card Randomizer
Folder: 01-c-fundamentals/021-dice-card-randomizer
Description: Simulate dice rolls and shuffle/deal a standard card deck.
Summary: You build a tool that simulates dice rolls and fairly shuffles/deals a 52-card deck. It teaches the Fisher-Yates shuffle and the correct use of randomness.
Difficulty: Beginner
Teaches (C): Fisher-Yates shuffle, array indexing, rand mod bias
Topics: random, arrays, Fisher-Yates
Estimated LOC: 160
Libraries: none

022. Simple Voting Tally System
Folder: 01-c-fundamentals/022-voting-tally
Description: Register candidates, cast votes, and print ranked results.
Summary: You build a voting system that registers candidates, collects votes, and reports ranked results. Using struct arrays and sorting, it sets up a simple but realistic app flow.
Difficulty: Beginner
Teaches (C): struct array, counter logic, sorting with qsort
Topics: structs, arrays, sorting
Estimated LOC: 200
Libraries: none

023. Palindrome & Anagram Checker
Folder: 01-c-fundamentals/023-palindrome-anagram
Description: Detect palindromes and test if two strings are anagrams.
Summary: You build a tool that checks whether text is a palindrome and whether two words are anagrams. It reinforces basic string techniques like two-end scanning and letter counting.
Difficulty: Beginner
Teaches (C): two-end string scanning, letter counting, normalization
Topics: strings, counting, normalization
Estimated LOC: 130
Libraries: none

024. Currency Formatter
Folder: 01-c-fundamentals/024-currency-formatter
Description: Format raw amounts into localized currency strings with grouping.
Summary: You build a formatter that turns a raw amount like `1234567` into a grouped form like `1,234,567.00`. It teaches why money should be stored as integers (cents) and how to build the string by hand.
Difficulty: Beginner
Teaches (C): integer-based money (avoiding float error), building strings
Topics: strings, integer math, formatting
Estimated LOC: 140
Libraries: none

025. Simple State Machine Demo
Folder: 01-c-fundamentals/025-state-machine-demo
Description: Model a turnstile/traffic light as an explicit finite state machine.
Summary: You model a turnstile or traffic light as an explicit finite state machine and run it. It teaches designing state transitions cleanly with enum and switch — the foundation for advanced projects.
Difficulty: Beginner
Teaches (C): enum, switch-based transitions, state design
Topics: enums, switch, state transitions
Estimated LOC: 150
Libraries: none

026. Command Argument Parser Mini-lib
Folder: 01-c-fundamentals/026-arg-parser-mini
Description: Parse flags, options, and positional args like a tiny getopt.
Summary: You build a small getopt-like library that parses inputs like `-v`, `--output file`, and positional arguments. It teaches how real CLI tools handle arguments and how to write reusable code.
Difficulty: Beginner
Teaches (C): argv handling, string comparison, option model with structs
Topics: argv, strings, structs
Estimated LOC: 220
Libraries: none

---

## 02. Console Applications (027–048) · `02-console-apps`

027. To-Do List Manager
Folder: 02-console-apps/027-todo-manager
Description: Add, complete, delete, and persist tasks to a file.
Summary: You build a to-do app that adds, completes, and deletes tasks and stores the list in a file. It teaches the CRUD cycle and file persistence that survives program restarts.
Difficulty: Beginner
Teaches (C): CRUD logic, file I/O, persisting a struct array
Topics: file I/O, structs, CRUD
Estimated LOC: 300
Libraries: none

028. Contact Book / Address Manager
Folder: 02-console-apps/028-contact-book
Description: Store contacts with search, edit, and CSV export.
Summary: You build an address book that stores contacts (name, phone, email), searches/edits, and exports to CSV. It teaches record search and a real data-management flow with export.
Difficulty: Beginner
Teaches (C): record search, string fields, CSV writing
Topics: structs, file I/O, search
Estimated LOC: 350
Libraries: none

029. Expense Tracker
Folder: 02-console-apps/029-expense-tracker
Description: Log expenses by category and generate monthly summaries.
Summary: You build a budget tracker that logs expenses by category and generates monthly summaries/reports. It develops date handling and the skill of grouping/aggregating data.
Difficulty: Intermediate
Teaches (C): date handling, grouping/aggregation, persistent storage
Topics: structs, persistence, aggregation
Estimated LOC: 400
Libraries: none

030. Inventory Management System
Folder: 02-console-apps/030-inventory-system
Description: Track products, stock levels, and low-stock alerts.
Summary: You build an inventory system that tracks products and stock levels and warns when stock runs low. It teaches binary file records and random access with fseek.
Difficulty: Intermediate
Teaches (C): binary file records, fseek, reporting
Topics: CRUD, binary files, reporting
Estimated LOC: 450
Libraries: none

031. Library Management System
Folder: 02-console-apps/031-library-system
Description: Manage books, members, and borrow/return with due dates.
Summary: You build a library system that manages books, members, and borrow/return with due dates. It teaches related records and date arithmetic (overdue calculation) together.
Difficulty: Intermediate
Teaches (C): related records, date arithmetic, file updating
Topics: structs, file I/O, date logic
Estimated LOC: 500
Libraries: none

032. Quiz Application with Question Bank
Folder: 02-console-apps/032-quiz-app
Description: Load questions from a file, run timed quizzes, and score results.
Summary: You build a quiz app that reads a question bank from a file, runs a timed quiz, and scores it. It combines file parsing, timing, and scoring logic in a real product.
Difficulty: Intermediate
Teaches (C): file parsing, timing, scoring logic
Topics: file parsing, timing, scoring
Estimated LOC: 400
Libraries: none

033. Personal Diary with Encryption
Folder: 02-console-apps/033-encrypted-diary
Description: Journal entries encrypted with a passphrase at rest.
Summary: You build a diary app that stores journal entries encrypted with a passphrase. It teaches the basics of data privacy through simple encryption and byte-level file handling.
Difficulty: Intermediate
Teaches (C): XOR/simple encryption, byte-level file handling, key holding
Topics: file I/O, XOR, key handling
Estimated LOC: 350
Libraries: none

034. Command-Line Calendar
Folder: 02-console-apps/034-cli-calendar
Description: Print monthly/yearly calendars and highlight events.
Summary: You build a `cal`-like tool that prints monthly/yearly calendars and highlights events. It teaches finding the weekday with Zeller's congruence and printing aligned calendar output.
Difficulty: Intermediate
Teaches (C): Zeller's congruence, date math, aligned output
Topics: date math, formatting
Estimated LOC: 300
Libraries: none

035. Habit Tracker with Streaks
Folder: 02-console-apps/035-habit-tracker
Description: Track daily habits and compute current/longest streaks.
Summary: You build a tracker that marks daily habits and computes current/longest streaks. It teaches date-difference calculation and keeping persistent history.
Difficulty: Intermediate
Teaches (C): date-difference calculation, array-based history, persistence
Topics: date logic, persistence, stats
Estimated LOC: 350
Libraries: none

036. Restaurant Billing System
Folder: 02-console-apps/036-restaurant-billing
Description: Build orders from a menu and print an itemized bill with tax.
Summary: You build an ordering system that composes orders from a menu and prints an itemized bill with tax. It teaches a struct menu model and producing cleanly formatted invoices.
Difficulty: Beginner
Teaches (C): struct menu, total/tax computation, formatted invoice
Topics: structs, arithmetic, formatting
Estimated LOC: 300
Libraries: none

037. Flashcard Spaced-Repetition Tool
Folder: 02-console-apps/037-flashcards-srs
Description: Review flashcards using an SM-2 spaced-repetition schedule.
Summary: You build a study tool that schedules and shows flashcards with the SM-2 spaced-repetition algorithm. It teaches implementing a real algorithm (the basis of Anki) and persistent scheduling.
Difficulty: Intermediate
Teaches (C): algorithm implementation, persistent state, date scheduling
Topics: algorithms, persistence, date math
Estimated LOC: 400
Libraries: none

038. Command-Line Password Manager
Folder: 02-console-apps/038-password-manager
Description: Store service credentials encrypted behind a master password.
Summary: You build a password vault that stores service credentials encrypted behind one master password. It teaches key derivation (KDF), encrypted files, and holding sensitive data safely in memory.
Difficulty: Advanced
Teaches (C): KDF, encrypted files, sensitive-memory management
Topics: crypto, file I/O, KDF
Estimated LOC: 500
Libraries: openssl

039. Movie / Media Catalog
Folder: 02-console-apps/039-media-catalog
Description: Catalog media with ratings, tags, and multi-field search.
Summary: You build an app that catalogs movies/shows/books with ratings and tags and does multi-field search. It combines struct modeling, tag arrays, and search/sort techniques.
Difficulty: Intermediate
Teaches (C): multi-field search, tag arrays, sorting
Topics: structs, search, sorting
Estimated LOC: 400
Libraries: none

040. Command-Line Pomodoro Timer
Folder: 02-console-apps/040-pomodoro-timer
Description: Run focus/break cycles with notifications and session logs.
Summary: You build a Pomodoro timer that runs 25-min work / 5-min break cycles, notifies, and logs sessions. It is a practical productivity tool teaching timer loops and logging.
Difficulty: Beginner
Teaches (C): timer loops, signals, log file
Topics: timers, signals, logging
Estimated LOC: 250
Libraries: none

041. Employee Payroll System
Folder: 02-console-apps/041-payroll-system
Description: Compute salaries, deductions, and generate payslips.
Summary: You build a payroll system that computes salaries, deductions, and bonuses and produces payslips. It teaches struct-based computation and a realistic report-generation flow.
Difficulty: Intermediate
Teaches (C): struct computation, deduction logic, report generation
Topics: structs, arithmetic, reporting
Estimated LOC: 450
Libraries: none

042. Ticket Booking System
Folder: 02-console-apps/042-ticket-booking
Description: Reserve seats on a grid, prevent double-booking, and persist.
Summary: You build a booking system that reserves seats on a grid, prevents selling the same seat twice, and persists state. It teaches 2D state management and conflict checking.
Difficulty: Intermediate
Teaches (C): 2D state grid, conflict checking, file state
Topics: 2D arrays, state, file I/O
Estimated LOC: 450
Libraries: none

043. Command-Line Unit Test Runner Demo
Folder: 02-console-apps/043-test-runner-demo
Description: Register test functions and run them with pass/fail reporting.
Summary: You build a small test runner that registers test functions and runs them with pass/fail reporting. It teaches how function pointers and macro tricks power test frameworks.
Difficulty: Intermediate
Teaches (C): function pointers, macros, test registration table
Topics: function pointers, macros, reporting
Estimated LOC: 300
Libraries: none

044. Recipe Manager with Scaling
Folder: 02-console-apps/044-recipe-manager
Description: Store recipes and scale ingredient quantities by servings.
Summary: You build an app that stores recipes and proportionally scales ingredient quantities by servings. It combines struct lists and proportional math with file I/O.
Difficulty: Beginner
Teaches (C): struct lists, proportional math, file I/O
Topics: structs, arithmetic, file I/O
Estimated LOC: 350
Libraries: none

045. Command-Line Budget Envelope System
Folder: 02-console-apps/045-budget-envelopes
Description: Allocate income into envelopes and track spending against them.
Summary: You build a budgeting system that splits income into "envelopes" (rent, groceries, fun) and tracks spending. It teaches a real money-management model with persistence and remaining/overspend math.
Difficulty: Intermediate
Teaches (C): budget model, persistence, sum/remaining computation
Topics: structs, persistence, aggregation
Estimated LOC: 400
Libraries: none

046. Notes App with Full-Text Search
Folder: 02-console-apps/046-notes-fulltext
Description: Store notes and search them with a simple inverted index.
Summary: You build an app that stores notes and builds a simple inverted index for fast content search. It teaches the core data structure behind search engines at small scale.
Difficulty: Advanced
Teaches (C): inverted index, hashing, memory management
Topics: indexing, hashing, file I/O
Estimated LOC: 550
Libraries: none

047. Command-Line Chess Move Validator
Folder: 02-console-apps/047-chess-validator
Description: Validate chess moves and detect check on a board state.
Summary: You build an engine that validates whether moves are legal on a chess board state and detects check. It teaches expressing complex rule logic with clean code.
Difficulty: Advanced
Teaches (C): 2D board model, rules engine, complex logic
Topics: 2D arrays, rules engine, logic
Estimated LOC: 600
Libraries: none

048. Multi-User Auth Console
Folder: 02-console-apps/048-multiuser-auth
Description: Register/login users with salted hashed passwords in a file.
Summary: You build an auth console that registers/logs in users and stores passwords as salted hashes. It teaches why passwords are never stored in plaintext and the importance of salting.
Difficulty: Intermediate
Teaches (C): salting, hashing, secure password storage
Topics: hashing, file I/O, salts
Estimated LOC: 400
Libraries: openssl

---

## 03. Mathematics & Numerical Methods (049–075) · `03-mathematics`

049. Arbitrary-Precision Integer (BigInt)
Folder: 03-mathematics/049-bigint
Description: Add, subtract, multiply, and compare integers of unbounded size.
Summary: You build a library that stores huge integers (too big for `long long`) as digit arrays and adds/subtracts/multiplies them. It teaches manual carry logic and sets the base for crypto projects like RSA.
Difficulty: Advanced
Teaches (C): manual carry, digit arrays, dynamic memory
Topics: arrays, carry propagation, algorithms
Estimated LOC: 600
Libraries: none

050. Rational Number Library
Folder: 03-mathematics/050-rational-numbers
Description: Exact fraction arithmetic with automatic reduction via GCD.
Summary: You build a library that handles fractions (like 1/3 + 1/6) exactly without float error and auto-reduces. It teaches GCD (Euclid's algorithm) and struct-based number types.
Difficulty: Intermediate
Teaches (C): GCD (Euclid), fractions with structs, normalization
Topics: GCD, structs, normalization
Estimated LOC: 300
Libraries: none

051. Complex Number Library
Folder: 03-mathematics/051-complex-numbers
Description: Complex arithmetic including polar form and roots.
Summary: You build a library doing arithmetic, polar form, and roots on complex numbers. It teaches C99's complex.h support and trigonometric computation; a warm-up for FFT/fractal projects.
Difficulty: Intermediate
Teaches (C): complex.h, trigonometry, struct math
Topics: structs, trig, math
Estimated LOC: 300
Libraries: math

052. Matrix Algebra Library
Folder: 03-mathematics/052-matrix-algebra
Description: Determinant, inverse, LU decomposition, and solving linear systems.
Summary: You build a linear-algebra library computing determinant, inverse, LU decomposition, and solving linear systems. It teaches real numerical-analysis topics like numerical stability and pivoting.
Difficulty: Advanced
Teaches (C): dynamic 2D arrays, numerical stability, pivoting
Topics: linear algebra, numerical stability
Estimated LOC: 700
Libraries: math

053. Numerical Integration Toolkit
Folder: 03-mathematics/053-numerical-integration
Description: Integrate functions via trapezoid, Simpson, and Gaussian quadrature.
Summary: You build a tool that approximates the definite integral of a function via trapezoid, Simpson, and Gaussian quadrature. It teaches writing generic methods with function pointers and error analysis.
Difficulty: Intermediate
Teaches (C): function pointers, numerical methods, error analysis
Topics: numerical methods, function pointers
Estimated LOC: 350
Libraries: math

054. Root-Finding Solver
Folder: 03-mathematics/054-root-finding
Description: Find roots via bisection, Newton-Raphson, and secant methods.
Summary: You build a solver that finds roots of an equation via bisection, Newton-Raphson, and the secant method. It teaches convergence, tolerance, and derivative-based iteration.
Difficulty: Intermediate
Teaches (C): convergence, derivative-based iteration, tolerance
Topics: numerical methods, convergence
Estimated LOC: 350
Libraries: math

055. ODE Solver (Runge-Kutta)
Folder: 03-mathematics/055-ode-solver
Description: Solve ordinary differential equations with Euler and RK4.
Summary: You build a tool that numerically solves ODEs with Euler and RK4 methods. It teaches numerical integration and step control at the heart of physics simulations.
Difficulty: Advanced
Teaches (C): step control, function pointers, numerical integration
Topics: numerical methods, step control
Estimated LOC: 400
Libraries: math

056. Fast Fourier Transform
Folder: 03-mathematics/056-fft
Description: Implement radix-2 Cooley-Tukey FFT and inverse FFT.
Summary: You implement from scratch the fast Fourier transform (FFT) that decomposes a signal into frequency components, and its inverse. It teaches the core algorithm of audio/image processing and the power of divide-and-conquer.
Difficulty: Advanced
Teaches (C): recursive divide-and-conquer, complex numbers, bit-reversal
Topics: DSP, recursion, complex numbers
Estimated LOC: 400
Libraries: math

057. Statistics Toolkit
Folder: 03-mathematics/057-statistics-toolkit
Description: Mean, variance, median, percentiles, correlation, and regression.
Summary: You build a statistics library computing mean, variance, median, percentiles, correlation, and regression. It teaches numerically stable formulas like single-pass variance.
Difficulty: Intermediate
Teaches (C): single-pass variance, sorting, array statistics
Topics: statistics, sorting, arrays
Estimated LOC: 450
Libraries: math

058. Linear Regression Fitter
Folder: 03-mathematics/058-linear-regression
Description: Fit lines and polynomials by least squares to a dataset.
Summary: You build a tool that fits a line or polynomial to a dataset by least squares. It teaches the most basic ML model and the linear algebra behind it.
Difficulty: Intermediate
Teaches (C): least squares, matrix solving, numerical computation
Topics: linear algebra, statistics
Estimated LOC: 350
Libraries: math

059. Prime Factorization & Pollard Rho
Folder: 03-mathematics/059-pollard-rho
Description: Factor large integers using trial division and Pollard's rho.
Summary: You build a tool that factors large numbers using trial division and Pollard's rho. It teaches number theory and modular arithmetic as a foundation for cryptography.
Difficulty: Advanced
Teaches (C): number theory, mod arithmetic, avoiding overflow
Topics: number theory, algorithms
Estimated LOC: 350
Libraries: none

060. Modular Arithmetic Library
Folder: 03-mathematics/060-modular-arithmetic
Description: Modular exponentiation, inverse, and Chinese Remainder Theorem.
Summary: You build a library computing modular exponentiation, modular inverse, and the Chinese Remainder Theorem. It teaches the mathematical engine of crypto systems like RSA/Diffie-Hellman.
Difficulty: Intermediate
Teaches (C): fast exponentiation, modular inverse, CRT
Topics: number theory, algorithms
Estimated LOC: 300
Libraries: none

061. Continued Fraction Calculator
Folder: 03-mathematics/061-continued-fractions
Description: Convert reals to continued fractions and back to rationals.
Summary: You build a tool that expands a decimal into a continued fraction and back into the best rational approximation. It teaches the deep structure of numbers and iterative decomposition.
Difficulty: Intermediate
Teaches (C): floating-point precision, iterative decomposition
Topics: number theory, floating point
Estimated LOC: 250
Libraries: math

062. Monte Carlo Pi & Integrator
Folder: 03-mathematics/062-monte-carlo
Description: Estimate pi and integrals via Monte Carlo sampling.
Summary: You build a simulator that estimates pi and integrals by throwing random points. It concretely shows how randomness solves problems and demonstrates convergence.
Difficulty: Beginner
Teaches (C): sampling with rand, convergence, statistics
Topics: random, statistics, convergence
Estimated LOC: 200
Libraries: math

063. Expression Evaluator (Shunting Yard)
Folder: 03-mathematics/063-expression-eval
Description: Parse and evaluate infix math expressions with precedence.
Summary: You build an evaluator that correctly computes expressions like `3 + 4 * 2` by operator precedence. It teaches the stack data structure and the basics of parsing via the shunting-yard algorithm.
Difficulty: Intermediate
Teaches (C): stack, operator precedence, parsing
Topics: stacks, parsing, algorithms
Estimated LOC: 400
Libraries: none

064. Symbolic Differentiation Engine
Folder: 03-mathematics/064-symbolic-diff
Description: Differentiate symbolic expressions represented as trees.
Summary: You build an engine that represents an expression as a tree and takes its symbolic derivative. It teaches how a small computer-algebra system works via tree structures and recursive transforms.
Difficulty: Advanced
Teaches (C): tree structures, recursion, AST with pointers
Topics: trees, recursion, parsing
Estimated LOC: 600
Libraries: none

065. Fixed-Point Arithmetic Library
Folder: 03-mathematics/065-fixed-point
Description: Q-format fixed-point math for platforms without an FPU.
Summary: You build a Q-format fixed-point math library for embedded systems without an FPU. It teaches doing fractional math by scaling integers and multiply/divide via shifts.
Difficulty: Intermediate
Teaches (C): bit scaling, int32/int64, multiplying with shifts
Topics: bit manipulation, scaling
Estimated LOC: 350
Libraries: none

066. Vector & Quaternion Math Library
Folder: 03-mathematics/066-vector-quaternion
Description: 3D vector, matrix, and quaternion ops for graphics/games.
Summary: You build a math library offering 3D vector, matrix, and quaternion operations for games/graphics. It teaches transform/rotation math and performance with inline functions.
Difficulty: Intermediate
Teaches (C): struct math, inline functions, 3D transforms
Topics: linear algebra, 3D math
Estimated LOC: 500
Libraries: math

067. Pseudo-Random Number Generators
Folder: 03-mathematics/067-prng-suite
Description: Implement LCG, xorshift, and Mersenne Twister with quality tests.
Summary: You implement the LCG, xorshift, and Mersenne Twister generators and compare them with quality tests. It teaches the bit operations behind randomness and why some generators are "bad."
Difficulty: Intermediate
Teaches (C): bit operations, uint state, period analysis
Topics: PRNG, bit ops, statistics
Estimated LOC: 400
Libraries: none

068. Numerical Base-N Calculator
Folder: 03-mathematics/068-base-n-calculator
Description: Perform arithmetic in arbitrary bases with fractional support.
Summary: You build a calculator that does the four operations with fractional numbers in any base (e.g. base-7). It deeply teaches base conversion and arithmetic over strings.
Difficulty: Intermediate
Teaches (C): base conversion, string arithmetic, fractional part
Topics: base conversion, strings
Estimated LOC: 350
Libraries: none

069. Combinatorics Toolkit
Folder: 03-mathematics/069-combinatorics
Description: Compute permutations, combinations, and generate them lazily.
Summary: You build a tool that computes permutation/combination counts and generates them one by one (a generator). It teaches recursive generation and managing big-number overflow.
Difficulty: Intermediate
Teaches (C): recursive generation, overflow management, generator pattern
Topics: recursion, big numbers, generators
Estimated LOC: 350
Libraries: none

070. Geometric Primitives Library
Folder: 03-mathematics/070-geometry-primitives
Description: Point/line/polygon intersection, convex hull, and area.
Summary: You build a computational-geometry library for point/line/polygon intersection, convex hull, and area. It teaches geometric thinking where the cross product and edge cases are critical.
Difficulty: Advanced
Teaches (C): computational geometry, cross product, edge cases
Topics: computational geometry
Estimated LOC: 550
Libraries: math

071. Calculator with Variables & Functions
Folder: 03-mathematics/071-calculator-repl
Description: A REPL calculator supporting assignment and user functions.
Summary: You build an interactive calculator that allows variable/function definitions like `x = 5`, `f(a) = a*2`. It sets up the basis of a small interpreter with a symbol table and evaluation.
Difficulty: Advanced
Teaches (C): symbol table, parsing, evaluation (eval)
Topics: parsing, symbol tables, eval
Estimated LOC: 700
Libraries: none

072. Interval Arithmetic Library
Folder: 03-mathematics/072-interval-arithmetic
Description: Track rounding error bounds by computing on intervals.
Summary: You build a library that computes on [low, high] intervals instead of single numbers to track rounding-error bounds. It teaches why floating point is imperfect and how to track error margins.
Difficulty: Advanced
Teaches (C): fenv.h rounding modes, floating-point bounds
Topics: floating point, numerical analysis
Estimated LOC: 400
Libraries: math

073. Bignum Rational + Decimal Library
Folder: 03-mathematics/073-bignum-decimal
Description: Arbitrary-precision decimal arithmetic with configurable precision.
Summary: You build a library that does decimal arithmetic at any requested precision (ideal for financial math). It teaches big integers, scaling, and correct rounding rules.
Difficulty: Advanced
Teaches (C): big integers, scaling, rounding rules
Topics: big integers, scaling, rounding
Estimated LOC: 800
Libraries: none

074. Newton Fractal / Mandelbrot Data Generator
Folder: 03-mathematics/074-fractal-generator
Description: Compute escape-time fractal data and export to PPM.
Summary: You build a generator that computes Mandelbrot/Newton fractals and exports them as a PPM image file. It teaches complex-number iteration and producing images with code.
Difficulty: Intermediate
Teaches (C): complex iteration, PPM image output
Topics: complex math, iteration, image output
Estimated LOC: 300
Libraries: math

075. Numerical Linear System Benchmark
Folder: 03-mathematics/075-linear-solver-benchmark
Description: Compare Gaussian elimination, Jacobi, and Gauss-Seidel solvers.
Summary: You build a benchmark that solves linear systems with Gaussian elimination, Jacobi, and Gauss-Seidel and compares speed/convergence. It makes the difference between direct and iterative solvers concrete.
Difficulty: Advanced
Teaches (C): iterative vs direct solvers, timing, convergence
Topics: numerical methods, benchmarking
Estimated LOC: 500
Libraries: math

---

## 04. Utilities (076–096) · `04-utilities`

076. wc Clone (word/line/byte count)
Folder: 04-utilities/076-wc-clone
Description: Count lines, words, characters, and bytes like coreutils wc.
Summary: You build a clone of Unix `wc` that counts lines/words/characters/bytes. It teaches stream-based reading and handling command-line flags — a classic system-tool exercise.
Difficulty: Beginner
Teaches (C): getchar loop, stream state, argv flags
Topics: file I/O, streams, flags
Estimated LOC: 200
Libraries: none

077. cat / tac Clone
Folder: 04-utilities/077-cat-tac
Description: Concatenate files to stdout, forward and reversed, with line numbers.
Summary: You build a tool that concatenates files forward and reversed (tac) and can add line numbers. It teaches buffered reading and stdin/stdout stream management.
Difficulty: Beginner
Teaches (C): buffered reading, line counter, stdin/stdout
Topics: file I/O, buffering
Estimated LOC: 200
Libraries: none

078. head / tail with Follow Mode
Folder: 04-utilities/078-head-tail-follow
Description: Print first/last N lines and follow a growing file like tail -f.
Summary: You build a tool that prints the first/last N lines of a file and follows a growing file live like `tail -f`. It teaches ring buffers and tracking file changes.
Difficulty: Intermediate
Teaches (C): ring buffer, inotify/polling, fseek
Topics: file I/O, inotify
Estimated LOC: 300
Libraries: none

079. grep Clone with Regex
Folder: 04-utilities/079-grep-clone
Description: Search files for lines matching a pattern with context flags.
Summary: You build a `grep` clone that finds lines matching a regex and can show context lines. It teaches the POSIX regex library and the flow of a real search tool.
Difficulty: Intermediate
Teaches (C): regex.h (POSIX), line buffering, context lines
Topics: regex, file I/O, flags
Estimated LOC: 400
Libraries: none

080. find Clone
Folder: 04-utilities/080-find-clone
Description: Recursively find files by name, type, size, and modification time.
Summary: You build a `find` clone that recursively searches files by name/type/size/date. It teaches directory traversal (dirent) and querying file metadata (stat).
Difficulty: Intermediate
Teaches (C): dirent/opendir, stat, recursive traversal
Topics: directory traversal, filtering
Estimated LOC: 400
Libraries: none

081. ls Clone with Colors
Folder: 04-utilities/081-ls-clone
Description: List directory contents with long format, sorting, and colors.
Summary: You build an `ls` clone with long format, sorting, and colored output. It teaches reading file permissions (stat) and printing aligned, colored tables.
Difficulty: Intermediate
Teaches (C): stat permissions, ANSI color, alignment
Topics: stat, permissions, formatting
Estimated LOC: 450
Libraries: none

082. du Disk Usage Analyzer
Folder: 04-utilities/082-du-analyzer
Description: Compute directory sizes recursively with a human-readable tree.
Summary: You build a tool that computes directory sizes recursively and shows a human-readable (KB/MB/GB) tree. It teaches the logic of disk analysis via recursion and size summation.
Difficulty: Intermediate
Teaches (C): recursion, stat st_size, human-readable format
Topics: recursion, stat, formatting
Estimated LOC: 350
Libraries: none

083. diff Tool (LCS-based)
Folder: 04-utilities/083-diff-lcs
Description: Show line differences between two files using longest common subsequence.
Summary: You build a `diff` tool that shows line differences between two files via the longest common subsequence. It teaches the DP algorithm underneath Git and code review.
Difficulty: Advanced
Teaches (C): dynamic programming, 2D table, backtracking
Topics: dynamic programming, file I/O
Estimated LOC: 450
Libraries: none

084. sort Clone
Folder: 04-utilities/084-sort-clone
Description: Sort lines with numeric, reverse, unique, and key options.
Summary: You build a `sort` clone with numeric/reverse/unique/key options. It teaches qsort comparator functions and flag handling.
Difficulty: Intermediate
Teaches (C): qsort comparators, line arrays, flag handling
Topics: sorting, comparators, flags
Estimated LOC: 350
Libraries: none

085. uniq Clone
Folder: 04-utilities/085-uniq-clone
Description: Filter or count adjacent duplicate lines with flag options.
Summary: You build a `uniq` clone that filters or counts adjacent duplicate lines. It is a short, instructive tool teaching stream processing and line comparison.
Difficulty: Beginner
Teaches (C): line comparison, counters, stream processing
Topics: streams, string compare
Estimated LOC: 200
Libraries: none

086. xxd / Hex Dump Utility
Folder: 04-utilities/086-hex-dump
Description: Dump files as hex + ASCII and reverse a hex dump to binary.
Summary: You build a tool that dumps files as hex+ASCII and reverses a hex dump back to binary. It teaches reading binary data and formatted output — a basis for reverse engineering.
Difficulty: Intermediate
Teaches (C): binary reading, formatted output, reverse conversion
Topics: binary I/O, formatting
Estimated LOC: 300
Libraries: none

087. File Splitter & Joiner (split)
Folder: 04-utilities/087-split-join
Description: Split large files into chunks and reassemble them exactly.
Summary: You build a tool that splits large files into chunks and reassembles them exactly. It is a practical exercise in binary I/O and buffer size management.
Difficulty: Beginner
Teaches (C): binary I/O, buffer size, fwrite/fread
Topics: binary I/O, buffering
Estimated LOC: 250
Libraries: none

088. Duplicate File Finder
Folder: 04-utilities/088-dup-finder
Description: Find duplicate files by size then content hash.
Summary: You build a tool that finds identical files first by size then by content hash. It teaches efficient handling of large data with two-stage filtering and a hash table.
Difficulty: Intermediate
Teaches (C): hashing, hash tables, two-stage filtering
Topics: hashing, hash tables, traversal
Estimated LOC: 400
Libraries: openssl

089. Batch File Renamer
Folder: 04-utilities/089-batch-renamer
Description: Rename files in bulk with patterns, counters, and dry-run mode.
Summary: You build a tool that bulk-renames files with patterns and counters, showing a dry-run first. It teaches string handling and safe file operations.
Difficulty: Intermediate
Teaches (C): string patterns, rename(), directory ops
Topics: strings, directory ops
Estimated LOC: 350
Libraries: none

090. tree Directory Visualizer
Folder: 04-utilities/090-tree-visualizer
Description: Print a directory hierarchy as an ASCII/Unicode tree.
Summary: You build the `tree` tool that prints a directory hierarchy as a nice ASCII/Unicode tree. It teaches recursion and prefix management to produce visual output.
Difficulty: Intermediate
Teaches (C): recursion, prefix management, Unicode drawing
Topics: recursion, formatting
Estimated LOC: 300
Libraries: none

091. env / Environment Inspector
Folder: 04-utilities/091-env-inspector
Description: Print, filter, and run commands with modified environment variables.
Summary: You build a tool that prints/filters environment variables and runs commands with a modified environment. It teaches the environ array and the exec family.
Difficulty: Beginner
Teaches (C): environ, getenv/setenv, execvp
Topics: environ, exec, strings
Estimated LOC: 200
Libraries: none

092. Clipboard Manager (file-backed)
Folder: 04-utilities/092-clipboard-manager
Description: Store and recall multiple clipboard entries from the CLI.
Summary: You build a manager that stores and recalls multiple clipboard entries from the CLI. It teaches file-backed history and ring-buffer logic.
Difficulty: Intermediate
Teaches (C): file-backed history, IPC basics, ring buffer
Topics: file I/O, IPC, history
Estimated LOC: 350
Libraries: none

093. watch Command Clone
Folder: 04-utilities/093-watch-clone
Description: Re-run a command on an interval and display refreshing output.
Summary: You build the `watch` tool that re-runs a command on an interval and shows refreshing output. It teaches fork/exec and doing live updates by clearing the terminal.
Difficulty: Intermediate
Teaches (C): fork/exec, clearing the terminal, timing
Topics: fork/exec, terminal control, timing
Estimated LOC: 300
Libraries: none

094. QR Code / Barcode Data Encoder
Folder: 04-utilities/094-qr-encoder
Description: Encode text into a QR matrix and render it as terminal blocks.
Summary: You build a generator that encodes text into a QR matrix and draws it with terminal blocks. It teaches advanced topics like Reed-Solomon error-correction codes and bit packing.
Difficulty: Advanced
Teaches (C): Reed-Solomon, bit packing, matrix layout
Topics: Reed-Solomon, bit packing
Estimated LOC: 800
Libraries: none

095. cron-style Task Scheduler
Folder: 04-utilities/095-cron-scheduler
Description: Parse crontab syntax and run scheduled commands.
Summary: You build a scheduler that parses crontab syntax and runs commands when due. It teaches time parsing and background task management with fork/exec.
Difficulty: Advanced
Teaches (C): time parsing, fork/exec, loop timing
Topics: parsing, time, fork/exec
Estimated LOC: 500
Libraries: none

096. Progress Bar & Spinner Library
Folder: 04-utilities/096-progress-bar
Description: Reusable animated progress bars and spinners for CLI tools.
Summary: You build a library offering reusable animated progress bars and spinners for CLI tools. It teaches sleek terminal output via ANSI escape sequences and in-place line updates.
Difficulty: Beginner
Teaches (C): carriage return, ANSI escapes, timing
Topics: terminal control, timing
Estimated LOC: 250
Libraries: none

---

## 05. File Processing (097–116) · `05-file-processing`

097. CSV Parser & Query Tool
Folder: 05-file-processing/097-csv-parser
Description: Parse RFC-4180 CSV and run simple column filters and projections.
Summary: You build a tool that correctly parses real CSV (RFC-4180) with quotes and escapes and runs column filters. It teaches robust parsing with a state machine — a frequently needed skill.
Difficulty: Intermediate
Teaches (C): state machine, quote/escape handling, field splitting
Topics: parsing, quoting, state machine
Estimated LOC: 450
Libraries: none

098. INI Configuration Parser
Folder: 05-file-processing/098-ini-parser
Description: Read and write INI files with sections, comments, and types.
Summary: You build a library that reads and writes INI config files with sections, comments, and typed values. It teaches parsing a simple but real file format.
Difficulty: Beginner
Teaches (C): line parsing, section/key model, trim
Topics: parsing, hash maps
Estimated LOC: 300
Libraries: none

099. JSON Parser & Serializer
Folder: 05-file-processing/099-json-parser
Description: Parse JSON into a value tree and serialize it back.
Summary: You build a full library that parses JSON into a value tree and serializes it back. It deeply teaches recursive-descent parsing and memory management with a tagged union.
Difficulty: Advanced
Teaches (C): recursive descent, tagged union, memory management
Topics: recursive descent, memory, unicode
Estimated LOC: 700
Libraries: none

100. Binary File Format Reader (BMP)
Folder: 05-file-processing/100-bmp-reader
Description: Parse and manipulate BMP headers and pixel data.
Summary: You build a tool that reads and modifies BMP headers and pixel data. It teaches binary-format topics like packed structs, byte alignment, and endianness.
Difficulty: Intermediate
Teaches (C): packed struct, endianness, byte alignment
Topics: binary layout, structs, endianness
Estimated LOC: 350
Libraries: none

101. WAV Audio File Reader/Writer
Folder: 05-file-processing/101-wav-io
Description: Read, generate, and modify PCM WAV files.
Summary: You build a library that reads, generates, and modifies PCM WAV audio files. It teaches the RIFF chunk structure and handling binary audio data — a base for audio projects.
Difficulty: Intermediate
Teaches (C): RIFF chunk structure, binary I/O, sample data
Topics: RIFF format, binary I/O
Estimated LOC: 400
Libraries: none

102. Tarball Creator & Extractor
Folder: 05-file-processing/102-tar-tool
Description: Build and unpack POSIX tar archives without external libs.
Summary: You build a tool that creates and unpacks POSIX tar archives without external libraries. It teaches the fixed-block header format, checksums, and archiving file permissions.
Difficulty: Advanced
Teaches (C): fixed-block headers, checksums, file permissions
Topics: archive format, checksums
Estimated LOC: 600
Libraries: none

103. File Metadata Extractor
Folder: 05-file-processing/103-metadata-extractor
Description: Report size, timestamps, permissions, and MIME guess for files.
Summary: You build a tool that reports a file's size, timestamps, permissions, and guessed MIME type. It teaches the stat struct and type guessing via magic bytes.
Difficulty: Beginner
Teaches (C): stat struct, magic bytes, time formatting
Topics: stat, magic bytes
Estimated LOC: 300
Libraries: none

104. Log File Rotator
Folder: 05-file-processing/104-log-rotator
Description: Rotate, compress, and prune log files by size or age.
Summary: You build a tool that rotates, compresses, and prunes log files by size/age. It teaches log rotation and compression integration — critical on real servers.
Difficulty: Intermediate
Teaches (C): file rotation, compression call, size/age criteria
Topics: file ops, compression, scheduling
Estimated LOC: 400
Libraries: zlib

105. EXIF Metadata Reader
Folder: 05-file-processing/105-exif-reader
Description: Extract camera metadata from JPEG EXIF segments.
Summary: You build a tool that extracts camera/date/GPS metadata from the EXIF segments of JPEG photos. It teaches solving TIFF/EXIF layout and endianness in a real format.
Difficulty: Advanced
Teaches (C): TIFF/EXIF layout, endianness, tag tables
Topics: TIFF/EXIF layout, endianness
Estimated LOC: 550
Libraries: none

106. Memory-Mapped File Text Search
Folder: 05-file-processing/106-mmap-search
Description: Search huge files fast using mmap instead of read loops.
Summary: You build a tool that searches huge files fast using mmap instead of read loops. It teaches the power of memory-mapped files (mmap) and scanning with pointers.
Difficulty: Intermediate
Teaches (C): mmap/munmap, pointer scanning, page access
Topics: mmap, string search
Estimated LOC: 300
Libraries: none

107. File Integrity Monitor
Folder: 05-file-processing/107-integrity-monitor
Description: Track file hashes and alert on unexpected changes.
Summary: You build an integrity monitor that stores file hashes and alerts on unexpected changes. It teaches how a simple security-monitoring tool works via hashing and state persistence.
Difficulty: Intermediate
Teaches (C): hashing, state persistence, directory traversal
Topics: hashing, persistence, traversal
Estimated LOC: 400
Libraries: openssl

108. Fixed-Width Record Parser
Folder: 05-file-processing/108-fixed-width-parser
Description: Parse and reformat fixed-width column data files.
Summary: You build a tool that parses and reformats fixed-width column data files (old bank/government formats). It teaches extracting fields at fixed offsets.
Difficulty: Beginner
Teaches (C): fixed-offset fields, substring extraction, formatting
Topics: parsing, formatting
Estimated LOC: 250
Libraries: none

109. PDF Text Extractor (basic)
Folder: 05-file-processing/109-pdf-text-extractor
Description: Extract uncompressed text streams from simple PDF files.
Summary: You build a tool that extracts text streams from simple PDF files. It teaches PDF's object structure, tokenizing, and stream decoding — a real format reverse-engineering.
Difficulty: Advanced
Teaches (C): PDF object structure, tokenizing, stream decoding
Topics: PDF structure, tokenizing
Estimated LOC: 700
Libraries: zlib

110. ELF Header Parser
Folder: 05-file-processing/110-elf-header-parser
Description: Parse ELF headers, sections, and symbol tables.
Summary: You build a tool that parses the headers, sections, and symbol tables of Linux executables (ELF). It teaches the internal structure of the binary executable format.
Difficulty: Advanced
Teaches (C): elf.h structs, offset/size fields, binary layout
Topics: ELF format, binary layout
Estimated LOC: 500
Libraries: none

111. SQLite-Style Page File Reader
Folder: 05-file-processing/111-sqlite-page-reader
Description: Read the on-disk pages of a SQLite database file.
Summary: You build a tool that reads the on-disk pages of a SQLite database file. It teaches the disk format of databases, page structure, and B-tree nodes on real data.
Difficulty: Advanced
Teaches (C): page structure, big-endian reading, B-tree nodes
Topics: file format, B-trees, endianness
Estimated LOC: 600
Libraries: none

112. Config File Diff & Merge
Folder: 05-file-processing/112-config-diff-merge
Description: Compare two config files and produce a merged result.
Summary: You build a tool that compares two config files and produces a merged result. It teaches key matching, diff logic, and merge decisions.
Difficulty: Intermediate
Teaches (C): key matching, diff logic, merging
Topics: parsing, diffing
Estimated LOC: 400
Libraries: none

113. Recursive File Encryptor
Folder: 05-file-processing/113-recursive-encryptor
Description: Encrypt/decrypt entire directory trees with a password.
Summary: You build a tool that encrypts/decrypts an entire directory tree with a password. It teaches stream encryption, directory traversal, and processing large files buffer by buffer.
Difficulty: Advanced
Teaches (C): stream encryption, directory traversal, buffered processing
Topics: crypto, traversal, streaming
Estimated LOC: 500
Libraries: openssl

114. File Type Identifier (file clone)
Folder: 05-file-processing/114-file-identifier
Description: Identify file types by magic-number signatures.
Summary: You build a `file` clone that identifies file types by magic-number signatures, not extensions. It teaches magic-byte tables and byte comparison.
Difficulty: Intermediate
Teaches (C): magic bytes table, byte comparison, offsets
Topics: magic bytes, tables
Estimated LOC: 400
Libraries: none

115. Line-Ending Normalizer
Folder: 05-file-processing/115-line-ending-normalizer
Description: Convert between CRLF/LF/CR and detect mixed endings.
Summary: You build a tool that converts Windows/Unix/Mac line endings (CRLF/LF/CR) and detects mixed endings. It teaches byte-level scanning and line-ending differences.
Difficulty: Beginner
Teaches (C): byte scanning, line-ending detection, rewriting
Topics: byte scanning, I/O
Estimated LOC: 200
Libraries: none

116. Streaming File Deduplicator
Folder: 05-file-processing/116-stream-dedup
Description: Deduplicate a byte stream into content-addressed blocks.
Summary: You build a tool that splits a byte stream into content-addressed blocks to remove duplicates. It teaches the base of backup systems via chunking with a rolling hash.
Difficulty: Advanced
Teaches (C): rolling hash, chunking, content addressing
Topics: rolling hash, chunking
Estimated LOC: 500
Libraries: none

---

## 06. Text Processing (117–137) · `06-text-processing`

117. sed-style Stream Editor (subset)
Folder: 06-text-processing/117-sed-subset
Description: Apply substitution, delete, and print commands to a stream.
Summary: You build a mini `sed` that applies substitute/delete/print commands to a text stream. It combines command parsing, regex, and line-buffer management.
Difficulty: Advanced
Teaches (C): command parsing, regex, line buffer
Topics: parsing, regex, streams
Estimated LOC: 600
Libraries: none

118. awk-style Field Processor (subset)
Folder: 06-text-processing/118-awk-subset
Description: Run per-line field programs with patterns and actions.
Summary: You build a mini `awk` that splits each line into fields and runs pattern-action programs. It teaches field splitting and how a small expression evaluator is written.
Difficulty: Advanced
Teaches (C): field splitting, expression evaluation, pattern-action
Topics: parsing, expression eval
Estimated LOC: 800
Libraries: none

119. Markdown to HTML Converter
Folder: 06-text-processing/119-markdown-to-html
Description: Convert core Markdown syntax to valid HTML.
Summary: You build a converter that turns core Markdown (headings, lists, links, code) into valid HTML. It teaches block/inline separation and output generation with a state machine.
Difficulty: Intermediate
Teaches (C): state machine, block/inline separation, output generation
Topics: parsing, state machine, output
Estimated LOC: 600
Libraries: none

120. Word Frequency Counter
Folder: 06-text-processing/120-word-frequency
Description: Tokenize text and rank words by frequency.
Summary: You build a tool that splits text into words and ranks the most frequent ones. It teaches using a hash table together with tokenization — a practical text-analysis exercise.
Difficulty: Beginner
Teaches (C): hash table, tokenization, sorting with qsort
Topics: hashing, sorting, tokenizing
Estimated LOC: 300
Libraries: none

121. Spell Checker with Suggestions
Folder: 06-text-processing/121-spell-checker
Description: Flag misspellings and suggest edits by edit distance.
Summary: You build a spell checker that flags misspelled words and suggests fixes by edit distance. It teaches dictionary loading and generating suggestions with dynamic programming (edit distance).
Difficulty: Advanced
Teaches (C): dictionary loading, edit distance (DP), suggestion ranking
Topics: dictionaries, dynamic programming
Estimated LOC: 550
Libraries: none

122. Regex Engine (NFA/backtracking)
Folder: 06-text-processing/122-regex-engine
Description: Implement a small regex engine supporting . * + ? | ().
Summary: You build from scratch a small regex engine supporting `.`, `*`, `+`, `?`, `|`, `()`. It teaches automata theory and backtracking matching with concrete code.
Difficulty: Advanced
Teaches (C): recursion, backtracking, automata thinking
Topics: automata, recursion, parsing
Estimated LOC: 700
Libraries: none

123. Text Justifier & Wrapper
Folder: 06-text-processing/123-text-justifier
Description: Reflow paragraphs to a width with greedy or optimal wrapping.
Summary: You build a tool that reflows paragraphs to a width and justifies both sides. It teaches greedy and optimal (DP) line-breaking algorithms comparatively.
Difficulty: Intermediate
Teaches (C): dynamic programming, word measurement, space distribution
Topics: dynamic programming, strings
Estimated LOC: 400
Libraries: none

124. Template Engine
Folder: 06-text-processing/124-template-engine
Description: Render templates with variable substitution, loops, and conditionals.
Summary: You build an engine that fills templates supporting `{{name}}`, loops, and conditionals with data. It teaches how a small template language works via parsing and a symbol table.
Difficulty: Advanced
Teaches (C): parsing, symbol table, loop/conditional execution
Topics: parsing, symbol tables
Estimated LOC: 650
Libraries: none

125. Syntax Highlighter (terminal)
Folder: 06-text-processing/125-syntax-highlighter
Description: Tokenize source code and colorize keywords in the terminal.
Summary: You build a tool that tokenizes source code and colorizes keywords in the terminal. It teaches lexing and code visualization with ANSI color codes.
Difficulty: Intermediate
Teaches (C): lexing, keyword table, ANSI color
Topics: lexing, ANSI colors
Estimated LOC: 450
Libraries: none

126. Levenshtein / Fuzzy String Matcher
Folder: 06-text-processing/126-fuzzy-matcher
Description: Rank candidate strings by fuzzy similarity to a query.
Summary: You build a tool that ranks candidates by fuzzy similarity to a query. It teaches the edit-distance DP and memory optimization.
Difficulty: Intermediate
Teaches (C): DP matrix, memory optimization, scoring
Topics: dynamic programming, scoring
Estimated LOC: 300
Libraries: none

127. Text Adventure Story Parser
Folder: 06-text-processing/127-story-parser
Description: Parse a branching-story file format into a playable graph.
Summary: You build an engine that parses branching-story files into a playable node graph. It combines parsing and graphs with state transitions — a basis for interactive fiction.
Difficulty: Intermediate
Teaches (C): graph nodes, parsing, state transitions
Topics: parsing, graphs, state
Estimated LOC: 450
Libraries: none

128. ROT13 / Caesar / Vigenère Toolkit
Folder: 06-text-processing/128-classic-ciphers
Description: Encode/decode classic substitution ciphers with cracking hints.
Summary: You build a tool that encodes/decodes Caesar, ROT13, and Vigenère and gives cracking hints. It teaches modular letter shifting and the logic of classic cryptography.
Difficulty: Beginner
Teaches (C): modular letter shift, ctype, key cycling
Topics: strings, modular arithmetic
Estimated LOC: 300
Libraries: none

129. UTF-8 Encoder/Decoder & Validator
Folder: 06-text-processing/129-utf8-codec
Description: Decode, validate, and re-encode UTF-8 byte streams.
Summary: You build a library that decodes, validates, and re-encodes UTF-8 byte streams. It deeply teaches how Unicode code points are packed into bits.
Difficulty: Intermediate
Teaches (C): bit masks, multi-byte code points, validation
Topics: unicode, bit manipulation
Estimated LOC: 350
Libraries: none

130. Text Statistics & Readability Scorer
Folder: 06-text-processing/130-readability-scorer
Description: Compute Flesch-Kincaid and other readability metrics.
Summary: You build a tool that computes a text's readability score (Flesch-Kincaid, etc.). It teaches syllable/word/sentence counting and applying statistical formulas.
Difficulty: Intermediate
Teaches (C): syllable/word counting, statistics, formula application
Topics: tokenizing, statistics
Estimated LOC: 350
Libraries: none

131. Autocomplete Engine (Trie-based)
Folder: 06-text-processing/131-autocomplete-trie
Description: Suggest completions from a prefix using a trie.
Summary: You build an engine that suggests completions from a prefix using a trie. It teaches the trie structure and recursive traversal — the base of search boxes.
Difficulty: Intermediate
Teaches (C): trie structure, recursive traversal, pointer nodes
Topics: tries, recursion
Estimated LOC: 400
Libraries: none

132. Diff-based Merge Conflict Resolver
Folder: 06-text-processing/132-merge-resolver
Description: Perform three-way merges and mark conflicts.
Summary: You build a tool that three-way merges two file versions from a common ancestor and marks conflicts. It teaches Git's merge logic and diff algorithms.
Difficulty: Advanced
Teaches (C): three-way merge, diff algorithm, conflict markers
Topics: diff algorithms, merging
Estimated LOC: 600
Libraries: none

133. CSV/TSV to Markdown Table Converter
Folder: 06-text-processing/133-csv-to-md-table
Description: Convert delimited data into aligned Markdown tables.
Summary: You build a tool that converts CSV/TSV data into aligned Markdown tables. It teaches field parsing and computing column widths for clean output.
Difficulty: Beginner
Teaches (C): field parsing, column width, alignment
Topics: parsing, formatting
Estimated LOC: 250
Libraries: none

134. Text Compression Visualizer
Folder: 06-text-processing/134-compression-visualizer
Description: Show how Huffman/RLE compresses a given text sample.
Summary: You build a tool that shows step by step how a text sample is compressed by Huffman/RLE. It teaches by visualizing compression trees and bit savings.
Difficulty: Intermediate
Teaches (C): tree building, bit counting, visualization
Topics: compression, trees, visualization
Estimated LOC: 450
Libraries: none

135. Named-Entity Tokenizer
Folder: 06-text-processing/135-entity-tokenizer
Description: Tokenize text into words, numbers, emails, and URLs by rules.
Summary: You build a tokenizer that splits text into types like word/number/email/URL by rules. It teaches rule-based lexing with state machines and character classes.
Difficulty: Intermediate
Teaches (C): state machine, character classes, rule-based lexing
Topics: lexing, state machines
Estimated LOC: 400
Libraries: none

136. Boyer-Moore / KMP Search Tool
Folder: 06-text-processing/136-bm-kmp-search
Description: Fast substring search implementing Boyer-Moore and KMP.
Summary: You build a fast substring-search tool implementing Boyer-Moore and KMP. It teaches why naive search is slow and how prefix tables speed it up.
Difficulty: Advanced
Teaches (C): prefix table, bad-character rule, string algorithms
Topics: string algorithms
Estimated LOC: 350
Libraries: none

137. Text Table Formatter (pretty-print)
Folder: 06-text-processing/137-table-formatter
Description: Auto-size columns and render bordered ASCII tables.
Summary: You build a library that auto-sizes columns and prints bordered ASCII tables. It teaches two-pass measurement and alignment techniques.
Difficulty: Intermediate
Teaches (C): two-pass measurement, alignment, Unicode borders
Topics: formatting, measurement
Estimated LOC: 350
Libraries: none

---

## 07. Data Structures (138–164) · `07-data-structures`

138. Dynamic Array (Vector)
Folder: 07-data-structures/138-dynamic-array
Description: Generic growable array with amortized O(1) append.
Summary: You build a generic auto-growing array that can hold any type (via void*). It teaches realloc and the amortized-cost concept — how C++ vector works.
Difficulty: Beginner
Teaches (C): realloc, generics via void*, growth strategy
Topics: realloc, generics, macros
Estimated LOC: 250
Libraries: none

139. Singly & Doubly Linked Lists
Folder: 07-data-structures/139-linked-lists
Description: Full linked-list library with insert, delete, reverse, and sort.
Summary: You build a full linked-list library with insert, delete, reverse, and sort. A foundational project teaching pointers and the lifecycle of node memory.
Difficulty: Beginner
Teaches (C): pointers, node linking, memory lifecycle
Topics: pointers, memory
Estimated LOC: 350
Libraries: none

140. Stack & Queue Library
Folder: 07-data-structures/140-stack-queue
Description: Array- and list-backed stacks, queues, and deques.
Summary: You build a library implementing stacks, queues, and deques backed by both arrays and linked lists. It teaches comparing different implementations of the same abstract data type.
Difficulty: Beginner
Teaches (C): abstract data types, comparing two implementations
Topics: abstract data types
Estimated LOC: 300
Libraries: none

141. Hash Table (open addressing + chaining)
Folder: 07-data-structures/141-hash-table
Description: Generic hash map with two collision strategies and resizing.
Summary: You build a hash table offering two collision strategies (chaining and open addressing) and auto-resizing. It teaches hash functions and the importance of the load factor.
Difficulty: Intermediate
Teaches (C): hash function, collision resolution, resizing
Topics: hashing, load factor, memory
Estimated LOC: 450
Libraries: none

142. Binary Search Tree
Folder: 07-data-structures/142-bst
Description: BST with insert, delete, traversal, and balance checks.
Summary: You build a binary search tree with insert, delete (three cases), and traversal. A key data structure teaching recursive tree operations and balancing intuition.
Difficulty: Intermediate
Teaches (C): recursive trees, node deletion (3 cases), traversal
Topics: trees, recursion
Estimated LOC: 400
Libraries: none

143. AVL Tree
Folder: 07-data-structures/143-avl-tree
Description: Self-balancing BST with rotation-based rebalancing.
Summary: You build an AVL tree that balances itself with rotations. It teaches balance factors and height tracking and why trees need to be balanced.
Difficulty: Advanced
Teaches (C): balance factor, rotations, height updates
Topics: balanced trees, rotations
Estimated LOC: 500
Libraries: none

144. Red-Black Tree
Folder: 07-data-structures/144-red-black-tree
Description: Red-black tree with full insert/delete rebalancing.
Summary: You build a red-black tree with full insert/delete rebalancing. It teaches the structure under std::map via color invariants and complex delete cases.
Difficulty: Advanced
Teaches (C): color invariants, complex deletion, sentinel node
Topics: balanced trees, invariants
Estimated LOC: 700
Libraries: none

145. B-Tree / B+Tree
Folder: 07-data-structures/145-btree
Description: Disk-friendly B-tree supporting range scans.
Summary: You build a disk-friendly multiway B-tree supporting range scans. It teaches the base of database indexes via node splitting/merging and page logic.
Difficulty: Advanced
Teaches (C): multiway nodes, split/merge, page logic
Topics: multiway trees, paging
Estimated LOC: 800
Libraries: none

146. Binary Heap & Priority Queue
Folder: 07-data-structures/146-binary-heap
Description: Min/max heap with heapify and a priority queue API.
Summary: You build an array-based min/max heap and a priority-queue API. It teaches sift-up/down and the array-vs-tree representation (index math) — the base of Dijkstra.
Difficulty: Intermediate
Teaches (C): array-based tree, sift-up/down, index math
Topics: heaps, arrays
Estimated LOC: 300
Libraries: none

147. Fibonacci / Pairing Heap
Folder: 07-data-structures/147-fibonacci-heap
Description: Advanced heap with fast decrease-key for Dijkstra.
Summary: You build an advanced heap (Fibonacci/pairing) with a very fast decrease-key that speeds up Dijkstra. It teaches amortized analysis and node-merging techniques.
Difficulty: Advanced
Teaches (C): amortized analysis, node merging, decrease-key
Topics: amortized analysis, heaps
Estimated LOC: 550
Libraries: none

148. Trie & Radix Tree
Folder: 07-data-structures/148-trie-radix
Description: Prefix tree and compressed radix tree for string keys.
Summary: You build a prefix tree (trie) and a compressed radix tree for string keys. It teaches the data structure behind real uses like autocomplete and IP routing.
Difficulty: Intermediate
Teaches (C): character-indexed nodes, compression, string keys
Topics: tries, string keys
Estimated LOC: 450
Libraries: none

149. Graph Library (adjacency list/matrix)
Folder: 07-data-structures/149-graph-library
Description: Represent graphs and run BFS/DFS with both representations.
Summary: You build a library that represents graphs with both adjacency list and matrix and runs BFS/DFS. It teaches the memory/speed trade-off of the two representations and traversal algorithms.
Difficulty: Intermediate
Teaches (C): adjacency list/matrix, queue/stack, traversal
Topics: graphs, traversal
Estimated LOC: 450
Libraries: none

150. Disjoint Set (Union-Find)
Folder: 07-data-structures/150-union-find
Description: Union-find with path compression and union by rank.
Summary: You build a union-find structure with near-constant time via path compression and union by rank. It teaches the base of Kruskal's MST and connectivity queries with amortized analysis.
Difficulty: Intermediate
Teaches (C): path compression, union by rank, amortized
Topics: amortized analysis
Estimated LOC: 200
Libraries: none

151. Skip List
Folder: 07-data-structures/151-skip-list
Description: Probabilistic ordered set with O(log n) search.
Summary: You build a skip list giving O(log n) search via probabilistic levels. It teaches the power of randomization as a simple alternative to balanced trees.
Difficulty: Advanced
Teaches (C): probabilistic levels, multi-layer linked list
Topics: randomization, linked structures
Estimated LOC: 450
Libraries: none

152. Bloom Filter
Folder: 07-data-structures/152-bloom-filter
Description: Space-efficient probabilistic membership test.
Summary: You build a Bloom filter that answers "might this element be in the set?" with tiny memory. It teaches probabilistic data structures via multiple hashes and bit arrays.
Difficulty: Intermediate
Teaches (C): bit array, multiple hashes, false-positive rate
Topics: hashing, bit arrays
Estimated LOC: 300
Libraries: none

153. LRU Cache
Folder: 07-data-structures/153-lru-cache
Description: Fixed-size cache with O(1) get/put via hashmap + list.
Summary: You build a fixed-size LRU cache with O(1) get/put. It teaches solving the most-asked interview problem by combining a hash table with a doubly linked list.
Difficulty: Intermediate
Teaches (C): hash + doubly linked list, O(1) eviction
Topics: hashing, linked lists
Estimated LOC: 350
Libraries: none

154. Circular Ring Buffer
Folder: 07-data-structures/154-ring-buffer
Description: Lock-free-friendly ring buffer for producer/consumer data.
Summary: You build a ring buffer for producer/consumer data. It teaches modular indexing and full/empty distinction — used everywhere in embedded and audio systems.
Difficulty: Intermediate
Teaches (C): modular indexing, full/empty distinction, buffers
Topics: buffers, modular indexing
Estimated LOC: 250
Libraries: none

155. Segment Tree
Folder: 07-data-structures/155-segment-tree
Description: Range query/update structure for sums, mins, and maxes.
Summary: You build a segment tree doing range sum/min/max query and update in O(log n). It teaches the key competitive-programming structure with lazy propagation.
Difficulty: Advanced
Teaches (C): divide and conquer, lazy propagation, range queries
Topics: divide and conquer, lazy propagation
Estimated LOC: 450
Libraries: none

156. Fenwick Tree (BIT)
Folder: 07-data-structures/156-fenwick-tree
Description: Binary indexed tree for prefix sums with updates.
Summary: You build a Fenwick tree (BIT) that manages prefix sums with updates in O(log n). It teaches a compact alternative to segment trees via an elegant bit trick (lowbit).
Difficulty: Intermediate
Teaches (C): lowbit, prefix sums, updates
Topics: bit manipulation, prefix sums
Estimated LOC: 200
Libraries: none

157. Suffix Array & LCP
Folder: 07-data-structures/157-suffix-array
Description: Build suffix arrays for fast substring queries.
Summary: You build a suffix array and LCP structure for fast substring queries. It teaches string indexing and a powerful technique used in bioinformatics/search engines.
Difficulty: Advanced
Teaches (C): sort-based construction, LCP, string indexing
Topics: string algorithms, sorting
Estimated LOC: 500
Libraries: none

158. Suffix Tree (Ukkonen)
Folder: 07-data-structures/158-suffix-tree
Description: Linear-time suffix tree construction for pattern matching.
Summary: You build a library that constructs a suffix tree in linear time with Ukkonen's algorithm. It teaches one of the hardest but most powerful string structures.
Difficulty: Advanced
Teaches (C): Ukkonen's algorithm, suffix links, active point
Topics: string algorithms, trees
Estimated LOC: 700
Libraries: none

159. Quadtree / Octree
Folder: 07-data-structures/159-quadtree-octree
Description: Spatial partition tree for 2D/3D point queries.
Summary: You build a quadtree/octree that recursively partitions 2D/3D space to speed up point queries. It teaches the spatial data structure behind game collision and map indexing.
Difficulty: Advanced
Teaches (C): spatial partitioning, recursive subdivision, bounding box
Topics: spatial indexing, recursion
Estimated LOC: 550
Libraries: none

160. K-D Tree
Folder: 07-data-structures/160-kd-tree
Description: Multidimensional tree for nearest-neighbor search.
Summary: You build a k-d tree that speeds up nearest-neighbor search in multidimensional data. It teaches a structure common in machine learning via axis switching and pruning.
Difficulty: Advanced
Teaches (C): axis switching, nearest-neighbor, pruning
Topics: spatial data, recursion
Estimated LOC: 500
Libraries: none

161. Generic Iterator Framework
Folder: 07-data-structures/161-iterator-framework
Description: Uniform iteration interface over multiple container types.
Summary: You build a framework offering a single traversal interface over different container types. It teaches building abstraction in C with function pointers and the vtable pattern.
Difficulty: Intermediate
Teaches (C): function pointers, abstraction, vtable pattern
Topics: function pointers, abstraction
Estimated LOC: 350
Libraries: none

162. Persistent (Immutable) Data Structures
Folder: 07-data-structures/162-persistent-structures
Description: Structural-sharing immutable list and map.
Summary: You build an immutable list and map that keep old versions when modified (structural sharing). It teaches functional-programming data structures and reference counting.
Difficulty: Advanced
Teaches (C): structural sharing, reference counting, immutability
Topics: persistence, reference counting
Estimated LOC: 600
Libraries: none

163. Rope (heavy text buffer)
Folder: 07-data-structures/163-rope
Description: Rope structure for efficient large-string editing.
Summary: You build a rope data structure for fast insert/delete on huge text. It teaches why text editors keep big files as a balanced tree.
Difficulty: Advanced
Teaches (C): balanced tree, string pieces, fast insert/delete
Topics: balanced trees, strings
Estimated LOC: 600
Libraries: none

164. Interval Tree
Folder: 07-data-structures/164-interval-tree
Description: Store intervals and query all that overlap a point/range.
Summary: You build an interval tree that stores intervals and quickly queries those overlapping a point/range. It teaches augmented trees for problems like calendar conflicts and genomics.
Difficulty: Advanced
Teaches (C): augmented tree, max-endpoint, overlap query
Topics: augmented trees
Estimated LOC: 450
Libraries: none

---

## 08. Algorithms (165–197) · `08-algorithms`

165. Sorting Algorithms Visual Suite
Folder: 08-algorithms/165-sorting-suite
Description: Implement and benchmark 10+ sorting algorithms with stats.
Summary: You build a suite of 10+ sorting algorithms and compare them by comparison/swap counts. It experimentally teaches how algorithmic complexity affects speed.
Difficulty: Intermediate
Teaches (C): 10+ sorts, comparison/swap counting, timing
Topics: sorting, benchmarking
Estimated LOC: 600
Libraries: none

166. Search Algorithms Toolkit
Folder: 08-algorithms/166-search-toolkit
Description: Linear, binary, interpolation, and exponential search.
Summary: You build a toolkit implementing linear, binary, interpolation, and exponential search. It teaches binary search's easy-to-make bugs (off-by-one) and complexity.
Difficulty: Beginner
Teaches (C): binary search bounds, complexity, off-by-one
Topics: searching, complexity
Estimated LOC: 300
Libraries: none

167. Dijkstra Shortest Path
Folder: 08-algorithms/167-dijkstra
Description: Compute shortest paths with a priority-queue Dijkstra.
Summary: You build Dijkstra's algorithm that finds shortest paths in a weighted graph with a priority queue. It teaches graphs, heap usage, and relaxation — the base of map routing.
Difficulty: Intermediate
Teaches (C): priority queue, relaxation, graph weights
Topics: graphs, heaps
Estimated LOC: 350
Libraries: none

168. A* Pathfinding
Folder: 08-algorithms/168-astar
Description: Grid pathfinding with heuristics and obstacle maps.
Summary: You build A* that finds the shortest path on an obstacle grid using a heuristic. It teaches the core algorithm of game AI and navigation.
Difficulty: Intermediate
Teaches (C): heuristics, open/closed lists, grids
Topics: graphs, heuristics
Estimated LOC: 400
Libraries: none

169. Bellman-Ford & Negative Cycles
Folder: 08-algorithms/169-bellman-ford
Description: Shortest paths allowing negative edges with cycle detection.
Summary: You build Bellman-Ford that handles negative-weight edges and detects negative cycles. It teaches cases where Dijkstra fails and edge relaxation.
Difficulty: Intermediate
Teaches (C): edge relaxation, negative cycle detection
Topics: graphs, relaxation
Estimated LOC: 300
Libraries: none

170. Floyd-Warshall All-Pairs
Folder: 08-algorithms/170-floyd-warshall
Description: Compute all-pairs shortest paths via dynamic programming.
Summary: You build Floyd-Warshall computing shortest paths between all node pairs via dynamic programming. It teaches the power of an elegant triple-nested DP.
Difficulty: Intermediate
Teaches (C): 3-layer DP, matrix update
Topics: dynamic programming, graphs
Estimated LOC: 250
Libraries: none

171. Minimum Spanning Tree (Kruskal & Prim)
Folder: 08-algorithms/171-mst
Description: Build MSTs with union-find and priority queues.
Summary: You build a tool that computes minimum spanning trees via Kruskal (union-find) and Prim (priority queue). It teaches the correctness of greedy algorithms and network-design uses.
Difficulty: Intermediate
Teaches (C): greedy, union-find, edge sorting
Topics: graphs, greedy
Estimated LOC: 400
Libraries: none

172. Topological Sort & Cycle Detection
Folder: 08-algorithms/172-topological-sort
Description: Order a DAG and detect cycles in dependencies.
Summary: You build a tool that orders dependencies (topological sort) and detects cycles. It teaches the graph algorithm underneath build systems and task scheduling.
Difficulty: Intermediate
Teaches (C): in-degree, DFS coloring, ordering
Topics: graphs, DFS
Estimated LOC: 300
Libraries: none

173. Strongly Connected Components (Tarjan)
Folder: 08-algorithms/173-tarjan-scc
Description: Find SCCs in a directed graph in linear time.
Summary: You build Tarjan's algorithm that finds strongly connected components of a directed graph in linear time. It teaches subtle DFS techniques like low-link values and the DFS stack.
Difficulty: Advanced
Teaches (C): low-link values, DFS stack, component extraction
Topics: graphs, DFS
Estimated LOC: 350
Libraries: none

174. Max Flow (Edmonds-Karp / Dinic)
Folder: 08-algorithms/174-max-flow
Description: Compute maximum flow and minimum cut in networks.
Summary: You build Edmonds-Karp/Dinic that compute maximum flow and minimum cut in a network. It teaches residual graphs and augmenting paths — the base of matching problems.
Difficulty: Advanced
Teaches (C): residual graph, augmenting paths, level graph
Topics: graphs, flow
Estimated LOC: 500
Libraries: none

175. Dynamic Programming Problem Set Solver
Folder: 08-algorithms/175-dp-solver
Description: Solve knapsack, LIS, edit distance, and coin change generically.
Summary: You build a toolkit that solves classic DP problems like knapsack, LIS, edit distance, and coin change. It teaches memoization and table filling together.
Difficulty: Intermediate
Teaches (C): memoization, table filling, subproblem design
Topics: dynamic programming
Estimated LOC: 500
Libraries: none

176. Backtracking Solver Framework
Folder: 08-algorithms/176-backtracking-framework
Description: Generic backtracking engine for N-Queens, Sudoku, and mazes.
Summary: You build a generic backtracking engine that solves problems like N-Queens, Sudoku, and mazes. It teaches recursion, pruning, and state undo in one framework.
Difficulty: Intermediate
Teaches (C): recursion, pruning, state undo
Topics: recursion, pruning
Estimated LOC: 500
Libraries: none

177. String Matching Suite
Folder: 08-algorithms/177-string-matching-suite
Description: KMP, Rabin-Karp, Boyer-Moore, and Aho-Corasick in one lib.
Summary: You bundle KMP, Rabin-Karp, Boyer-Moore, and Aho-Corasick into one library. It teaches the different strategies of single- and multi-pattern search comparatively.
Difficulty: Advanced
Teaches (C): prefix function, multi-pattern automaton, rolling hash
Topics: string algorithms
Estimated LOC: 700
Libraries: none

178. Convex Hull Algorithms
Folder: 08-algorithms/178-convex-hull
Description: Compute hulls via Graham scan and Andrew's monotone chain.
Summary: You build a tool that computes the convex hull of a point set via Graham scan and monotone chain. It teaches determining geometric orientation via the cross-product sign.
Difficulty: Advanced
Teaches (C): angle sorting, cross-product sign, stack
Topics: computational geometry
Estimated LOC: 400
Libraries: math

179. Line-Segment Intersection Sweep
Folder: 08-algorithms/179-segment-intersection
Description: Find all intersections with a Bentley-Ottmann sweep line.
Summary: You build an algorithm that finds all segment intersections with a Bentley-Ottmann sweep line. It teaches advanced geometry via an event queue and status tree.
Difficulty: Advanced
Teaches (C): event queue, sweep line, status tree
Topics: computational geometry, events
Estimated LOC: 550
Libraries: none

180. Huffman Coding
Folder: 08-algorithms/180-huffman-coding
Description: Build Huffman trees to compress and decompress data.
Summary: You build Huffman coding that compresses/decompresses data by producing optimal bit codes from frequencies. It teaches greedy tree building and bit-level I/O — part of ZIP/JPEG.
Difficulty: Intermediate
Teaches (C): greedy tree, bit I/O, priority queue
Topics: greedy, trees, bit I/O
Estimated LOC: 450
Libraries: none

181. Simplex Linear Programming Solver
Folder: 08-algorithms/181-simplex
Description: Solve LP problems with the simplex method.
Summary: You build a solver for linear-programming problems with the simplex method. It teaches the fundamental algorithm of optimization and tableau pivoting.
Difficulty: Advanced
Teaches (C): pivoting, tableau operations, optimization
Topics: optimization, linear algebra
Estimated LOC: 600
Libraries: math

182. Genetic Algorithm Framework
Folder: 08-algorithms/182-genetic-algorithm
Description: Evolve solutions with selection, crossover, and mutation.
Summary: You build a generic genetic-algorithm framework that "evolves" solutions with selection, crossover, and mutation. It teaches how nature-inspired optimization is coded.
Difficulty: Advanced
Teaches (C): population, fitness function, randomness
Topics: metaheuristics, randomness
Estimated LOC: 500
Libraries: none

183. Simulated Annealing Optimizer
Folder: 08-algorithms/183-simulated-annealing
Description: Optimize hard problems (TSP) with annealing schedules.
Summary: You build a tool that optimizes hard problems (e.g. TSP) with simulated annealing. It teaches how probabilistic acceptance and a cooling schedule escape local minima.
Difficulty: Advanced
Teaches (C): probabilistic acceptance, cooling schedule, neighborhood
Topics: metaheuristics, probability
Estimated LOC: 450
Libraries: math

184. Traveling Salesman Approximations
Folder: 08-algorithms/184-tsp-approx
Description: Solve TSP with nearest-neighbor, 2-opt, and heuristics.
Summary: You build a tool that solves TSP with nearest-neighbor and 2-opt heuristic improvement. It teaches producing approximate solutions to NP-hard problems.
Difficulty: Advanced
Teaches (C): heuristic improvement, 2-opt swap, tour cost
Topics: optimization, graphs
Estimated LOC: 550
Libraries: math

185. Reservoir Sampling & Streaming Stats
Folder: 08-algorithms/185-reservoir-sampling
Description: Sample and summarize data from unbounded streams.
Summary: You build the reservoir sampling algorithm that draws a fair sample from an unknown-size stream. It teaches processing big data in one pass with bounded memory.
Difficulty: Intermediate
Teaches (C): probabilistic sampling, single pass, streaming
Topics: probability, streaming
Estimated LOC: 300
Libraries: none

186. HyperLogLog Cardinality Estimator
Folder: 08-algorithms/186-hyperloglog
Description: Estimate distinct counts in huge streams with tiny memory.
Summary: You build HyperLogLog that estimates distinct-element counts in huge streams with tiny memory. It teaches the probabilistic-counting genius Redis also uses.
Difficulty: Advanced
Teaches (C): hash, leading-zero counting, buckets/registers
Topics: hashing, probabilistic counting
Estimated LOC: 400
Libraries: none

187. Rabin-Karp Plagiarism Detector
Folder: 08-algorithms/187-plagiarism-detector
Description: Detect copied passages between documents via rolling hashes.
Summary: You build a plagiarism detector that finds copied passages between two documents via rolling hashes. It teaches a practical application of Rabin-Karp.
Difficulty: Intermediate
Teaches (C): rolling hash, window, collision verification
Topics: hashing, string algorithms
Estimated LOC: 400
Libraries: none

188. Union of Rectangles / Sweep Area
Folder: 08-algorithms/188-rectangle-union
Description: Compute total covered area of overlapping rectangles.
Summary: You compute the total area covered by overlapping rectangles via a sweep line + segment tree. It combines advanced geometry with coordinate compression.
Difficulty: Advanced
Teaches (C): sweep line, segment tree, coordinate compression
Topics: sweep line, segment trees
Estimated LOC: 500
Libraries: none

189. Matrix Chain & DP Optimizer
Folder: 08-algorithms/189-matrix-chain
Description: Find optimal parenthesization for matrix multiplication.
Summary: You build a DP tool that finds the least-cost parenthesization for matrix-chain multiplication. It teaches interval DP with a classic problem.
Difficulty: Intermediate
Teaches (C): interval DP, cost table, parenthesization
Topics: dynamic programming
Estimated LOC: 250
Libraries: none

190. Fast Exponentiation & Matrix Power
Folder: 08-algorithms/190-fast-exponentiation
Description: Compute large powers and linear recurrences fast.
Summary: You build a tool that computes large powers and linear recurrences (like Fibonacci) in logarithmic time via divide-and-conquer. It teaches the matrix-power technique.
Difficulty: Intermediate
Teaches (C): divide-and-conquer exponentiation, matrix multiply, mod
Topics: divide and conquer
Estimated LOC: 250
Libraries: none

191. Miller-Rabin Primality Test
Folder: 08-algorithms/191-miller-rabin
Description: Probabilistic primality testing for large integers.
Summary: You build Miller-Rabin that probabilistically tests the primality of large numbers. It teaches the primality test used in cryptography via modular exponentiation and witnesses.
Difficulty: Advanced
Teaches (C): modular exponentiation, witness test, uint64 overflow
Topics: number theory, modular math
Estimated LOC: 300
Libraries: none

192. Karatsuba & FFT Multiplication
Folder: 08-algorithms/192-karatsuba-fft
Description: Multiply large numbers faster than schoolbook methods.
Summary: You implement Karatsuba and FFT-based multiplication that beat the schoolbook method for large numbers. It teaches divide-and-conquer and a real speedup from FFT.
Difficulty: Advanced
Teaches (C): divide-and-conquer, FFT multiplication, carry
Topics: divide and conquer, FFT
Estimated LOC: 500
Libraries: math

193. Job Scheduling Algorithms
Folder: 08-algorithms/193-job-scheduling
Description: Compare FCFS, SJF, and interval scheduling optimality.
Summary: You build a tool comparing job-scheduling algorithms like FCFS, SJF, and interval scheduling. It intuitively teaches when greedy choices are optimal.
Difficulty: Intermediate
Teaches (C): greedy choice, sorting, optimality intuition
Topics: greedy, scheduling
Estimated LOC: 350
Libraries: none

194. Approximate Nearest Neighbor (LSH)
Folder: 08-algorithms/194-lsh-ann
Description: Find similar high-dimensional vectors with locality-sensitive hashing.
Summary: You build a tool that quickly finds similar high-dimensional vectors via locality-sensitive hashing (LSH). It teaches the scalable technique behind recommendation and similarity search.
Difficulty: Advanced
Teaches (C): hash families, buckets, vector distance
Topics: hashing, vectors
Estimated LOC: 500
Libraries: math

195. Boyer-Moore Majority & Heavy Hitters
Folder: 08-algorithms/195-heavy-hitters
Description: Find frequent elements in a stream in one pass.
Summary: You build algorithms that find the majority/most-frequent elements in a stream in one pass with fixed memory. It teaches the elegant counter-decrement trick (Boyer-Moore majority).
Difficulty: Intermediate
Teaches (C): counter decrement, single pass, stream counting
Topics: streaming, counting
Estimated LOC: 250
Libraries: none

196. Maze Generation Algorithms
Folder: 08-algorithms/196-maze-generation
Description: Generate mazes via DFS, Prim, and recursive division.
Summary: You build a tool that generates random mazes via DFS, Prim, and recursive division. It teaches a visual application of graph generation and randomness.
Difficulty: Intermediate
Teaches (C): graph generation, randomness, cell walls
Topics: graphs, randomness
Estimated LOC: 400
Libraries: none

197. Algorithm Complexity Profiler
Folder: 08-algorithms/197-complexity-profiler
Description: Empirically fit runtime curves to infer Big-O of a function.
Summary: You build a tool that runs a function at different sizes and empirically infers its Big-O by fitting the time curve. It teaches combining theoretical complexity with measurement.
Difficulty: Advanced
Teaches (C): timing, curve fitting, scaling analysis
Topics: benchmarking, curve fitting
Estimated LOC: 400
Libraries: math

---

## 09. Games (198–224) · `09-games`

198. Tic-Tac-Toe with Minimax AI
Folder: 09-games/198-tic-tac-toe-minimax
Description: Unbeatable tic-tac-toe using the minimax algorithm.
Summary: You build a tic-tac-toe that never loses using minimax. It teaches game trees and recursive decision-making in a fun way.
Difficulty: Beginner
Teaches (C): game tree, recursion, minimax
Topics: game trees, recursion
Estimated LOC: 300
Libraries: none

199. Hangman
Folder: 09-games/199-hangman
Description: Word-guessing game with categories and ASCII gallows.
Summary: You build a word-guessing game (hangman) with categories and an ASCII gallows. A nice starter teaching string masking and state management.
Difficulty: Beginner
Teaches (C): string masking, letter state, arrays
Topics: strings, state
Estimated LOC: 250
Libraries: none

200. Connect Four with AI
Folder: 09-games/200-connect-four
Description: Two-player Connect Four with an alpha-beta AI opponent.
Summary: You build a Connect Four with an alpha-beta pruning AI opponent. It teaches speeding up minimax with pruning and board evaluation.
Difficulty: Intermediate
Teaches (C): alpha-beta pruning, board evaluation
Topics: game trees, alpha-beta
Estimated LOC: 450
Libraries: none

201. Snake (terminal)
Folder: 09-games/201-snake
Description: Classic snake with growing tail and collision detection.
Summary: You build the classic snake with a growing tail and collision detection in the terminal. It teaches the game loop, non-blocking keyboard input, and collision.
Difficulty: Intermediate
Teaches (C): game loop, non-blocking input, collision
Topics: game loop, input, ncurses
Estimated LOC: 350
Libraries: ncurses

202. Tetris (terminal)
Folder: 09-games/202-tetris
Description: Falling-block puzzle with rotation, line clears, and scoring.
Summary: You build Tetris in the terminal with piece rotation, line clears, and scoring. A satisfying project teaching piece rotation and grid collision logic.
Difficulty: Advanced
Teaches (C): piece rotation, collision, line clearing
Topics: game loop, collision, rotation
Estimated LOC: 600
Libraries: ncurses

203. 2048
Folder: 09-games/203-2048
Description: Sliding-tile number-merging game with animations.
Summary: You build the number-merging puzzle 2048 with keyboard control. A short but fun project teaching grid sliding and merge logic.
Difficulty: Intermediate
Teaches (C): grid sliding, merge logic, input
Topics: grids, input, merging
Estimated LOC: 400
Libraries: ncurses

204. Minesweeper
Folder: 09-games/204-minesweeper
Description: Grid minesweeper with flood-fill reveal and flagging.
Summary: You build Minesweeper with flagging and flood-fill revealing of empty areas. It teaches recursion and grid logic in a fun way.
Difficulty: Intermediate
Teaches (C): flood fill, recursion, grids
Topics: recursion, grids
Estimated LOC: 450
Libraries: ncurses

205. Sudoku Generator & Solver
Folder: 09-games/205-sudoku
Description: Generate valid puzzles and solve them by backtracking.
Summary: You build a tool that generates valid Sudoku puzzles and solves them by backtracking. It makes constraint-based problem solving and backtracking concrete.
Difficulty: Intermediate
Teaches (C): backtracking, constraint checking, grid validation
Topics: backtracking, constraints
Estimated LOC: 500
Libraries: none

206. Text-Based RPG Engine
Folder: 09-games/206-text-rpg-engine
Description: Data-driven RPG with rooms, items, combat, and saves.
Summary: You build a data-driven text-RPG engine with rooms, items, combat, and save/load. It teaches state machines, file parsing, and organizing a big project.
Difficulty: Advanced
Teaches (C): state machines, data-file parsing, save/load
Topics: state machines, parsing, persistence
Estimated LOC: 900
Libraries: none

207. Blackjack
Folder: 09-games/207-blackjack
Description: Card game with dealer AI, betting, and basic strategy hints.
Summary: You build a Blackjack game with dealer AI, betting, and strategy hints. It teaches card-deck management and probability-based decisions.
Difficulty: Intermediate
Teaches (C): card deck, probability, state management
Topics: cards, probability, state
Estimated LOC: 450
Libraries: none

208. Checkers with AI
Folder: 09-games/208-checkers
Description: Full checkers with forced captures and minimax AI.
Summary: You build a full checkers game with forced captures and a minimax AI. It teaches board-game rules and game-tree search.
Difficulty: Advanced
Teaches (C): forced capture, game tree, board model
Topics: board games, game trees
Estimated LOC: 700
Libraries: none

209. Chess Engine (basic)
Folder: 09-games/209-chess-engine
Description: Legal-move chess with a simple evaluation and search.
Summary: You build a chess engine with legal move generation, a simple evaluation, and search. It teaches serious AI topics like board representation, move generation, and search.
Difficulty: Advanced
Teaches (C): board representation, move generation, search
Topics: board representation, search
Estimated LOC: 1500
Libraries: none

210. Pong (SDL2)
Folder: 09-games/210-pong
Description: Two-paddle Pong with physics and score.
Summary: You build a two-paddle Pong with physics and score using SDL2. Ideal for an intro to the graphical game loop, collision, and window/rendering.
Difficulty: Intermediate
Teaches (C): game loop, collision, SDL2 rendering
Topics: game loop, collision, rendering
Estimated LOC: 400
Libraries: sdl2

211. Breakout / Arkanoid (SDL2)
Folder: 09-games/211-breakout
Description: Brick-breaking game with power-ups and levels.
Summary: You build the brick-breaker Arkanoid with power-ups and levels using SDL2. It teaches physics, collision detection, and level-data management.
Difficulty: Intermediate
Teaches (C): physics, collision detection, level data
Topics: physics, collision, levels
Estimated LOC: 600
Libraries: sdl2

212. Space Invaders (Raylib)
Folder: 09-games/212-space-invaders
Description: Wave-based shooter with enemies, bullets, and score.
Summary: You build Space Invaders with enemy waves, bullets, and score using Raylib. It teaches entity arrays and bullet management via a classic arcade game.
Difficulty: Intermediate
Teaches (C): entity arrays, bullet management, game loop
Topics: game loop, entities
Estimated LOC: 600
Libraries: raylib

213. Flappy Bird Clone (Raylib)
Folder: 09-games/213-flappy-bird
Description: One-button flappy game with procedural pipes.
Summary: You build a one-button Flappy Bird clone with procedurally generated pipes. A quick, fun project teaching simple gravity physics and collision.
Difficulty: Beginner
Teaches (C): gravity physics, collision, procedural obstacles
Topics: physics, collision
Estimated LOC: 350
Libraries: raylib

214. Platformer with Tile Maps (SDL2)
Folder: 09-games/214-platformer
Description: Side-scroller with tile collision, gravity, and camera.
Summary: You build a side-scrolling platformer with tile collision, gravity, and a following camera. It teaches real game physics and tile-map systems.
Difficulty: Advanced
Teaches (C): tile collision, camera, physics integration
Topics: physics, tilemaps, camera
Estimated LOC: 1000
Libraries: sdl2

215. Roguelike Dungeon Crawler
Folder: 09-games/215-roguelike
Description: Procedural dungeons, turn-based combat, and permadeath.
Summary: You build a roguelike with procedural dungeons, turn-based combat, and permadeath. An ambitious project teaching procedural generation and field-of-view (FOV).
Difficulty: Advanced
Teaches (C): procedural generation, field-of-view (FOV), turn-based
Topics: procedural generation, FOV
Estimated LOC: 1200
Libraries: ncurses

216. Conway's Game of Life
Folder: 09-games/216-game-of-life
Description: Cellular automaton with patterns, wrap, and speed control.
Summary: You build Conway's Game of Life where simple rules produce complex patterns. It teaches cellular automata and double-buffered updates.
Difficulty: Beginner
Teaches (C): 2D grid, neighbor counting, double buffer
Topics: grids, simulation
Estimated LOC: 300
Libraries: ncurses

217. Wordle Clone
Folder: 09-games/217-wordle
Description: Daily word puzzle with color feedback and stats.
Summary: You build a Wordle clone with color feedback and stats. It teaches string comparison and letter-feedback logic (green/yellow/gray).
Difficulty: Beginner
Teaches (C): letter feedback, string comparison, color
Topics: strings, feedback logic
Estimated LOC: 300
Libraries: none

218. Simon Says Memory Game
Folder: 09-games/218-simon-says
Description: Sequence-memory game with increasing difficulty and sound.
Summary: You build a Simon game that recalls a growing color/sound sequence. It teaches sequence growth and timing-based input matching.
Difficulty: Beginner
Teaches (C): sequence growth, timing, input matching
Topics: sequences, timing
Estimated LOC: 300
Libraries: ncurses

219. Reversi / Othello with AI
Folder: 09-games/219-othello
Description: Othello with legal-move highlighting and heuristic AI.
Summary: You build Othello (Reversi) with legal-move highlighting and a heuristic AI. It teaches disc-flipping logic and positional evaluation.
Difficulty: Advanced
Teaches (C): disc flipping, evaluation function, board
Topics: board games, evaluation
Estimated LOC: 600
Libraries: none

220. Asteroids (Raylib)
Folder: 09-games/220-asteroids
Description: Vector-style shooter with wrapping physics and splitting rocks.
Summary: You build classic Asteroids with wrap-around physics and splitting rocks using Raylib. It teaches vector physics and rotation/acceleration math.
Difficulty: Intermediate
Teaches (C): vector physics, screen wrapping, splitting
Topics: vector math, physics
Estimated LOC: 700
Libraries: raylib

221. Tower Defense (SDL2)
Folder: 09-games/221-tower-defense
Description: Place towers to stop waves along a path with economy.
Summary: You build a tower-defense game where you place towers to stop waves along a path, with an economy. It teaches pathfinding, entity management, and game balance.
Difficulty: Advanced
Teaches (C): pathfinding, entity management, economy balance
Topics: pathfinding, entities, balancing
Estimated LOC: 1200
Libraries: sdl2

222. Card Game Framework (rules engine)
Folder: 09-games/222-card-game-framework
Description: Configurable engine to implement multiple card games.
Summary: You build a configurable rules engine that lets you define multiple card games. It teaches building flexible systems with abstraction and data-driven design.
Difficulty: Advanced
Teaches (C): rules engine, abstraction, data-driven design
Topics: rules engines, abstraction
Estimated LOC: 900
Libraries: none

223. Physics Sandbox (Verlet)
Folder: 09-games/223-verlet-physics
Description: Simulate ropes, cloth, and collisions with Verlet integration.
Summary: You build a physics sandbox that simulates ropes, cloth, and collisions with Verlet integration. It teaches the surprising simplicity of constraint-based physics.
Difficulty: Advanced
Teaches (C): Verlet integration, constraints, collision
Topics: physics, integration
Estimated LOC: 700
Libraries: raylib

224. Multiplayer Terminal Snake (networked)
Folder: 09-games/224-multiplayer-snake
Description: Two-player snake over TCP with a shared game state.
Summary: You build a two-player, shared-state snake game over TCP. An advanced project teaching how to combine game logic with network synchronization.
Difficulty: Advanced
Teaches (C): socket synchronization, game-state sharing
Topics: networking, game state sync
Estimated LOC: 800
Libraries: ncurses

---

## 10. Operating Systems (225–245) · `10-operating-systems`

225. Bootloader (x86 real mode)
Folder: 10-operating-systems/225-bootloader
Description: Write a 512-byte MBR bootloader that prints to screen.
Summary: You write a 512-byte bootloader that the BIOS loads and print text to the screen. It teaches what a computer does at boot and freestanding code at the lowest level.
Difficulty: Advanced
Teaches (C): freestanding code, BIOS interrupts, boot signature
Topics: assembly, BIOS, boot
Estimated LOC: 300
Libraries: none

226. Minimal Kernel (Hello Kernel)
Folder: 10-operating-systems/226-minimal-kernel
Description: Boot into a C kernel that writes to VGA text memory.
Summary: You move from the bootloader into a minimal C kernel that writes to VGA text memory. It teaches linker scripts and running C with no operating system.
Difficulty: Advanced
Teaches (C): linker script, VGA memory, freestanding C
Topics: freestanding C, linker scripts
Estimated LOC: 500
Libraries: none

227. Physical Memory Manager (frame allocator)
Folder: 10-operating-systems/227-frame-allocator
Description: Manage physical frames with a bitmap allocator in a kernel.
Summary: You write an allocator that manages physical memory frames with a bitmap inside a kernel. It teaches how an OS hands out memory in pieces.
Difficulty: Advanced
Teaches (C): bitmap, frame allocation, memory map
Topics: memory management, bitmaps
Estimated LOC: 500
Libraries: none

228. Virtual Memory & Paging
Folder: 10-operating-systems/228-paging
Description: Set up page tables and enable paging in a hobby kernel.
Summary: You set up page tables and enable virtual memory (paging) in the kernel. It deeply teaches how the MMU translates virtual to physical addresses.
Difficulty: Advanced
Teaches (C): page tables, MMU, virtual-physical mapping
Topics: paging, MMU
Estimated LOC: 700
Libraries: none

229. Interrupt Descriptor Table & Handlers
Folder: 10-operating-systems/229-idt-handlers
Description: Install IDT entries and handle keyboard/timer interrupts.
Summary: You install an IDT and write code that handles keyboard and timer interrupts. It teaches how hardware signals the CPU with interrupts and how to write ISRs.
Difficulty: Advanced
Teaches (C): IDT, ISR, interrupt handling
Topics: interrupts, ISRs
Estimated LOC: 600
Libraries: none

230. Cooperative Multitasking Scheduler
Folder: 10-operating-systems/230-coop-scheduler
Description: Switch between kernel tasks using saved contexts.
Summary: You write a cooperative scheduler that switches between kernel tasks by saving contexts. It teaches the most basic mechanism of multitasking.
Difficulty: Advanced
Teaches (C): context switching, saving the stack, task list
Topics: context switching, scheduling
Estimated LOC: 600
Libraries: none

231. Preemptive Round-Robin Scheduler
Folder: 10-operating-systems/231-preemptive-scheduler
Description: Timer-driven preemptive scheduling of processes.
Summary: You build a preemptive scheduler that forcibly switches tasks on a timer interrupt. It teaches how modern OSes fairly share time.
Difficulty: Advanced
Teaches (C): timer interrupt, preemptive scheduling, quantum
Topics: scheduling, timers
Estimated LOC: 700
Libraries: none

232. Simple In-Memory Filesystem
Folder: 10-operating-systems/232-ram-filesystem
Description: Implement a RAM filesystem with files, dirs, and a VFS layer.
Summary: You build a RAM filesystem with files, directories, and a VFS layer. It teaches the inode/directory abstraction of filesystems.
Difficulty: Advanced
Teaches (C): VFS abstraction, inode, directory tree
Topics: filesystems, data structures
Estimated LOC: 800
Libraries: none

233. FAT12/16 Filesystem Reader
Folder: 10-operating-systems/233-fat-reader
Description: Read files from a FAT-formatted disk image.
Summary: You build a tool that reads files from a FAT-formatted disk image. It teaches the cluster-chain structure of a real disk filesystem.
Difficulty: Advanced
Teaches (C): FAT table, cluster chain, disk layout
Topics: filesystems, on-disk layout
Estimated LOC: 700
Libraries: none

234. Userspace Threading Library (ucontext)
Folder: 10-operating-systems/234-green-threads
Description: Implement green threads with your own scheduler.
Summary: You write userspace threads (green threads) with your own scheduler. It teaches context switching and coroutine logic without a kernel.
Difficulty: Advanced
Teaches (C): ucontext, coroutine, userspace scheduling
Topics: context switching, coroutines
Estimated LOC: 500
Libraries: none

235. Slab / Buddy Kernel Allocator
Folder: 10-operating-systems/235-buddy-slab-allocator
Description: Implement buddy and slab allocators for kernel memory.
Summary: You write buddy and slab allocators for kernel memory. It teaches how the Linux kernel manages memory without fragmentation.
Difficulty: Advanced
Teaches (C): buddy system, slab cache, fragmentation
Topics: allocators, fragmentation
Estimated LOC: 700
Libraries: none

236. System Call Interface Demo
Folder: 10-operating-systems/236-syscall-interface
Description: Add a syscall gate and expose a few kernel services to userspace.
Summary: You add a syscall gate and expose kernel services to userspace. It teaches how user programs talk to the kernel across privilege levels.
Difficulty: Advanced
Teaches (C): syscall gate, privilege levels, ABI
Topics: syscalls, privilege levels
Estimated LOC: 600
Libraries: none

237. ELF Program Loader
Folder: 10-operating-systems/237-elf-loader
Description: Load and execute a static ELF binary in a hobby OS.
Summary: You write a loader that loads a static ELF binary into memory and executes it. It teaches how an OS runs a program.
Difficulty: Advanced
Teaches (C): ELF segments, memory loading, entry point
Topics: ELF, loaders, memory
Estimated LOC: 700
Libraries: none

238. Process Simulator with Scheduling Policies
Folder: 10-operating-systems/238-scheduling-simulator
Description: Simulate FCFS/SJF/RR/priority scheduling and report metrics.
Summary: You build a tool that simulates FCFS/SJF/RR/priority scheduling and reports wait/turnaround times. It teaches scheduling theory without writing a kernel.
Difficulty: Intermediate
Teaches (C): queue simulation, wait/turnaround time, metrics
Topics: scheduling, simulation
Estimated LOC: 500
Libraries: none

239. Deadlock Detection Simulator
Folder: 10-operating-systems/239-deadlock-detector
Description: Model resource allocation and detect deadlock cycles.
Summary: You build a simulator that models resource allocation and detects deadlock cycles. It teaches the banker's algorithm and the resource graph.
Difficulty: Intermediate
Teaches (C): banker's algorithm, resource graph, cycle detection
Topics: graphs, bankers algorithm
Estimated LOC: 450
Libraries: none

240. Page Replacement Simulator
Folder: 10-operating-systems/240-page-replacement
Description: Compare FIFO, LRU, Optimal, and Clock page replacement.
Summary: You build a simulator comparing FIFO/LRU/Optimal/Clock page replacement. It teaches the page-fault behavior of virtual memory.
Difficulty: Intermediate
Teaches (C): page-fault counting, eviction policies, simulation
Topics: memory management, simulation
Estimated LOC: 450
Libraries: none

241. Disk Scheduling Simulator
Folder: 10-operating-systems/241-disk-scheduling
Description: Simulate FCFS, SSTF, SCAN, and C-SCAN disk head movement.
Summary: You build a tool that simulates disk-head movement with FCFS/SSTF/SCAN/C-SCAN. It teaches disk scheduling policies and total head-movement computation.
Difficulty: Intermediate
Teaches (C): head movement, ordering policies, distance computation
Topics: scheduling, simulation
Estimated LOC: 400
Libraries: none

242. Semaphore & Mutex Primitives (from scratch)
Folder: 10-operating-systems/242-sync-primitives
Description: Build synchronization primitives on atomics/futex.
Summary: You write your own semaphore/mutex primitives on top of atomics and futex. It teaches what's behind synchronization primitives.
Difficulty: Advanced
Teaches (C): atomic operations, futex, lock design
Topics: concurrency, atomics
Estimated LOC: 400
Libraries: pthread

243. Producer-Consumer & Dining Philosophers
Folder: 10-operating-systems/243-classic-concurrency
Description: Classic concurrency problems with visible state.
Summary: You solve the producer-consumer and dining-philosophers problems with visible state. It teaches classic synchronization problems and deadlock avoidance.
Difficulty: Intermediate
Teaches (C): synchronization, deadlock avoidance, threads
Topics: synchronization, threads
Estimated LOC: 400
Libraries: pthread

244. Shell with Job Control
Folder: 10-operating-systems/244-shell-job-control
Description: A userspace shell supporting fg/bg jobs.
Summary: You write a userspace shell that supports fg/bg job control. It teaches process groups, terminal control, and signals.
Difficulty: Advanced
Teaches (C): process groups, terminal control, signals
Topics: process groups, signals
Estimated LOC: 800
Libraries: none

245. Boot-to-REPL Mini OS
Folder: 10-operating-systems/245-boot-repl-os
Description: Boot into a tiny interactive command shell in your kernel.
Summary: You build a mini OS that boots into an interactive command shell in your kernel. It combines a keyboard driver and command parsing at the kernel level.
Difficulty: Advanced
Teaches (C): keyboard driver, command parsing, kernel REPL
Topics: kernel, keyboard, parsing
Estimated LOC: 1000
Libraries: none

---

## 11. Linux & System Programming (246–270) · `11-linux-system`

246. ps Process Lister
Folder: 11-linux-system/246-ps-clone
Description: List running processes by parsing /proc.
Summary: You build a `ps` clone that lists running processes by parsing /proc. It teaches that Linux exposes process info as a filesystem.
Difficulty: Intermediate
Teaches (C): /proc parsing, directory traversal, stat
Topics: /proc, parsing
Estimated LOC: 350
Libraries: none

247. top-style System Monitor
Folder: 11-linux-system/247-top-clone
Description: Live CPU, memory, and process view refreshing in the terminal.
Summary: You build a `top` clone showing live CPU, memory, and processes. It teaches computing CPU percentages from /proc/stat and a live ncurses UI.
Difficulty: Advanced
Teaches (C): /proc/stat, CPU percentage, ncurses
Topics: /proc, ncurses, stats
Estimated LOC: 700
Libraries: ncurses

248. strace-lite Syscall Tracer
Folder: 11-linux-system/248-strace-lite
Description: Trace a child process's syscalls using ptrace.
Summary: You write a mini `strace` that traces a child process's syscalls with ptrace. It teaches observing how programs interact with the kernel.
Difficulty: Advanced
Teaches (C): ptrace, syscall capture, register reading
Topics: ptrace, syscalls
Estimated LOC: 600
Libraries: none

249. kill / Signal Sender
Folder: 11-linux-system/249-kill-clone
Description: Send signals to processes and demonstrate handlers.
Summary: You build a tool that sends signals to processes and demonstrates signal handlers. It teaches the basics of the Unix signal mechanism.
Difficulty: Beginner
Teaches (C): kill(), signal handler, pid
Topics: signals, pid
Estimated LOC: 200
Libraries: none

250. Daemonizer
Folder: 11-linux-system/250-daemonizer
Description: Turn a program into a well-behaved background daemon.
Summary: You write the code that turns a program into a well-behaved background daemon. It teaches detaching from the terminal via fork/setsid and daemon conventions.
Difficulty: Intermediate
Teaches (C): fork, setsid, file-descriptor handling
Topics: fork, setsid, file descriptors
Estimated LOC: 300
Libraries: none

251. Inter-Process Pipe Chat
Folder: 11-linux-system/251-fifo-chat
Description: Two processes chatting over named pipes (FIFOs).
Summary: You build a program where two processes chat over named pipes (FIFOs). It teaches the simplest form of inter-process communication (IPC).
Difficulty: Intermediate
Teaches (C): mkfifo, IPC, blocking reads
Topics: FIFOs, IPC
Estimated LOC: 300
Libraries: none

252. Shared Memory + Semaphore IPC
Folder: 11-linux-system/252-shared-memory-ipc
Description: Share a data structure between processes via POSIX shm.
Summary: You share a data structure between processes via POSIX shared memory, synchronized with a semaphore. It teaches the fastest IPC method and concurrency control.
Difficulty: Advanced
Teaches (C): shm_open, mmap, semaphore synchronization
Topics: shared memory, sync
Estimated LOC: 400
Libraries: none

253. Message Queue IPC Demo
Folder: 11-linux-system/253-message-queue
Description: Pass structured messages between processes via message queues.
Summary: You build a demo passing structured messages between processes via message queues. It teaches priority messaging and IPC options.
Difficulty: Intermediate
Teaches (C): mq_send/mq_receive, message struct, priority
Topics: IPC, message queues
Estimated LOC: 350
Libraries: none

254. File Watcher (inotify)
Folder: 11-linux-system/254-inotify-watcher
Description: React to filesystem create/modify/delete events.
Summary: You build a tool that reacts to filesystem events (create/modify/delete) via inotify. It teaches event-driven file watching — the base of auto-build tools.
Difficulty: Intermediate
Teaches (C): inotify, reading events, watch descriptor
Topics: inotify, events
Estimated LOC: 350
Libraries: none

255. Memory Usage Profiler for a PID
Folder: 11-linux-system/255-memory-profiler
Description: Report RSS, heap, and mappings for a process from /proc.
Summary: You build a tool that reports RSS, heap, and memory mappings for a process from /proc/PID/maps. It teaches reading how a program uses memory.
Difficulty: Intermediate
Teaches (C): /proc/PID/maps, parsing, memory segments
Topics: /proc/maps, parsing
Estimated LOC: 400
Libraries: none

256. nice/Priority Manager
Folder: 11-linux-system/256-priority-manager
Description: Adjust process scheduling priorities and affinity.
Summary: You build a tool that adjusts process scheduling priority and CPU affinity. It teaches scheduling priorities and pinning processes to specific cores.
Difficulty: Intermediate
Teaches (C): setpriority, sched_setaffinity, CPU affinity
Topics: scheduling, syscalls
Estimated LOC: 250
Libraries: none

257. epoll-based Event Loop Library
Folder: 11-linux-system/257-epoll-event-loop
Description: Reusable event loop for readable/writable fd callbacks.
Summary: You build a reusable event-loop library with callbacks for readable/writable fds. It teaches the core of high-performance servers.
Difficulty: Advanced
Teaches (C): epoll, callback registration, event-driven design
Topics: epoll, event-driven design
Estimated LOC: 500
Libraries: none

258. Zombie Reaper & Process Supervisor
Folder: 11-linux-system/258-process-supervisor
Description: Supervise child processes and restart them on crash.
Summary: You build a supervisor that watches child processes and restarts them on crash. It teaches fork/wait, SIGCHLD, and reaping zombie processes.
Difficulty: Intermediate
Teaches (C): fork/wait, SIGCHLD, restarting
Topics: fork, wait, signals
Estimated LOC: 400
Libraries: none

259. mount/Filesystem Info Tool
Folder: 11-linux-system/259-filesystem-info
Description: Report mounted filesystems and usage from /proc/mounts + statvfs.
Summary: You build a tool that reports mounted filesystems and their usage from /proc/mounts and statvfs. It teaches reading disk-usage info from the system.
Difficulty: Intermediate
Teaches (C): statvfs, /proc/mounts, disk usage
Topics: statvfs, parsing
Estimated LOC: 300
Libraries: none

260. Container-lite (namespaces + cgroups)
Folder: 11-linux-system/260-container-lite
Description: Isolate a process with namespaces and resource limits.
Summary: You build a mini "container" that isolates a process with namespaces and cgroups. It teaches the Linux isolation technology under Docker.
Difficulty: Advanced
Teaches (C): clone(), namespaces, cgroups
Topics: namespaces, cgroups, clone
Estimated LOC: 700
Libraries: none

261. chroot Jail Runner
Folder: 11-linux-system/261-chroot-jail
Description: Run a command inside a chroot with a minimal filesystem.
Summary: You build a tool that runs a command inside a chroot with a minimal filesystem. It teaches filesystem isolation and privilege handling.
Difficulty: Advanced
Teaches (C): chroot, privilege, minimal rootfs
Topics: chroot, capabilities
Estimated LOC: 400
Libraries: none

262. File Locking Demo (flock/fcntl)
Folder: 11-linux-system/262-file-locking
Description: Coordinate file access across processes with locks.
Summary: You build a demo that coordinates cross-process file access with locks. It teaches race conditions and file locking.
Difficulty: Intermediate
Teaches (C): fcntl locks, advisory lock, race conditions
Topics: file locking, concurrency
Estimated LOC: 300
Libraries: none

263. Terminal Multiplexer (mini-tmux)
Folder: 11-linux-system/263-mini-tmux
Description: Run multiple shells via ptys with split panes.
Summary: You build a mini tmux that runs multiple shells in split panes via ptys. It teaches pseudo-terminals (pty) and terminal multiplexing.
Difficulty: Advanced
Teaches (C): pty (forkpty), terminal, multiplexing
Topics: pty, terminal, multiplexing
Estimated LOC: 900
Libraries: ncurses

264. uptime/Load Average Reader
Folder: 11-linux-system/264-uptime-reader
Description: Report uptime, load averages, and logged-in users.
Summary: You build a tool that reports system uptime, load averages, and logged-in users. It teaches reading sysinfo and /proc.
Difficulty: Beginner
Teaches (C): sysinfo, /proc/loadavg, time formatting
Topics: /proc, sysinfo
Estimated LOC: 200
Libraries: none

265. Signal-Safe Logging Library
Folder: 11-linux-system/265-signal-safe-logger
Description: Async-signal-safe logger usable inside signal handlers.
Summary: You build an async-signal-safe logger usable even inside signal handlers. It teaches reentrancy and which functions are safe inside a signal.
Difficulty: Advanced
Teaches (C): async-signal-safe functions, write(), reentrancy
Topics: signals, reentrancy
Estimated LOC: 350
Libraries: none

266. lsof-lite (open files by process)
Folder: 11-linux-system/266-lsof-lite
Description: List open file descriptors per process from /proc/*/fd.
Summary: You build a mini `lsof` that lists each process's open file descriptors from /proc/PID/fd. It teaches reading symlinks and the fd model.
Difficulty: Intermediate
Teaches (C): /proc/PID/fd, readlink, symlinks
Topics: /proc, symlinks
Estimated LOC: 350
Libraries: none

267. Battery / Sensor Monitor
Folder: 11-linux-system/267-sensor-monitor
Description: Read battery, temperature, and fan data from sysfs.
Summary: You build a monitor that reads battery, temperature, and fan data from sysfs. A practical tool teaching reading hardware info as files.
Difficulty: Beginner
Teaches (C): sysfs reading, file parsing, scaling
Topics: sysfs, parsing
Estimated LOC: 250
Libraries: none

268. seccomp Syscall Sandbox
Folder: 11-linux-system/268-seccomp-sandbox
Description: Restrict a program to an allowlist of syscalls.
Summary: You build a seccomp-bpf sandbox that limits a program to allowed syscalls only. It teaches secure execution and syscall filtering.
Difficulty: Advanced
Teaches (C): seccomp-bpf, syscall filtering, security
Topics: seccomp-bpf, security
Estimated LOC: 400
Libraries: seccomp

269. dd-style Block Copier
Folder: 11-linux-system/269-dd-clone
Description: Copy blocks with configurable size, count, and conversions.
Summary: You build a `dd` clone that copies raw data with configurable block size and count. It teaches raw I/O and how buffer size affects performance.
Difficulty: Intermediate
Teaches (C): raw read/write, block size, offset
Topics: raw I/O, buffering
Estimated LOC: 300
Libraries: none

270. System Resource Limit (ulimit) Tool
Folder: 11-linux-system/270-rlimit-tool
Description: Query and set resource limits via getrlimit/setrlimit.
Summary: You build a tool that queries and sets resource limits (memory, open files) via getrlimit/setrlimit. It teaches the soft/hard limit concept.
Difficulty: Intermediate
Teaches (C): getrlimit/setrlimit, soft/hard limit
Topics: rlimits, syscalls
Estimated LOC: 250
Libraries: none

---

## 12. Shell Programming (271–283) · `12-shell`

271. Minimal Shell (fork/exec)
Folder: 12-shell/271-minimal-shell
Description: Read, parse, and execute single commands with arguments.
Summary: You build a minimal shell that reads and parses a command and runs it with fork/exec. It teaches a shell's core principle (fork-exec-wait).
Difficulty: Intermediate
Teaches (C): fork/execvp/waitpid, command parsing
Topics: fork, exec, wait
Estimated LOC: 300
Libraries: none

272. Shell with Pipes & Redirection
Folder: 12-shell/272-shell-pipes
Description: Support pipe, output, input, and append redirection.
Summary: You build a shell that supports `|`, `>`, `<`, and `>>`. It deeply teaches how file-descriptor redirection works via pipe() and dup2.
Difficulty: Advanced
Teaches (C): pipe(), dup2, file-descriptor redirection
Topics: pipes, dup2, parsing
Estimated LOC: 600
Libraries: none

273. Shell with Built-ins & History
Folder: 12-shell/273-shell-builtins
Description: Add cd, export, history, and up-arrow recall.
Summary: You build a shell that adds cd/export/history built-ins and up-arrow recall. It teaches built-in commands and line editing.
Difficulty: Advanced
Teaches (C): builtin commands, line editing, history
Topics: builtins, line editing
Estimated LOC: 700
Libraries: readline

274. Shell Command Autocompletion
Folder: 12-shell/274-shell-autocomplete
Description: Tab-complete commands and file paths in your shell.
Summary: You add Tab completion for commands and file paths to your shell. It teaches the readline completion API and PATH scanning.
Difficulty: Advanced
Teaches (C): readline completion, PATH scanning, matching
Topics: readline, completion
Estimated LOC: 400
Libraries: readline

275. Shell Scripting Interpreter
Folder: 12-shell/275-shell-scripting
Description: Interpret a scripting subset with variables, if, and loops.
Summary: You build a shell that interprets a scripting subset with variables, if, and loops. It teaches parsing and control-flow execution.
Difficulty: Advanced
Teaches (C): parsing, control flow, variable scope
Topics: parsing, control flow
Estimated LOC: 900
Libraries: none

276. Alias & Environment Manager
Folder: 12-shell/276-alias-env-manager
Description: Support aliases and per-session environment configuration.
Summary: You build a module supporting aliases and per-session environment configuration. It teaches hash tables and string expansion.
Difficulty: Intermediate
Teaches (C): hash table, string expansion, parsing
Topics: hash maps, parsing
Estimated LOC: 400
Libraries: none

277. Prompt Customization Engine
Folder: 12-shell/277-prompt-engine
Description: Render a configurable prompt with git status and time.
Summary: You build a configurable shell-prompt engine that shows git status and time. It teaches reading subprocess output and string templating.
Difficulty: Intermediate
Teaches (C): subprocess output, string template, color
Topics: strings, subprocess
Estimated LOC: 350
Libraries: none

278. Command Timing Wrapper (time clone)
Folder: 12-shell/278-time-clone
Description: Measure real/user/sys time for any command.
Summary: You build a `time` clone that measures the real/user/sys time of any command. It teaches CPU-time measurement via fork and getrusage.
Difficulty: Intermediate
Teaches (C): fork, getrusage, real/CPU time
Topics: fork, rusage, timing
Estimated LOC: 250
Libraries: none

279. Background Job Manager
Folder: 12-shell/279-job-manager
Description: Run commands in the background and manage them with jobs/fg/bg.
Summary: You build a module that runs commands in the background and manages them with jobs/fg/bg. It teaches process groups and the SIGTSTP/SIGCONT signals.
Difficulty: Advanced
Teaches (C): process groups, SIGTSTP/SIGCONT, job table
Topics: process groups, signals
Estimated LOC: 500
Libraries: none

280. Glob Pattern Expander
Folder: 12-shell/280-glob-expander
Description: Expand asterisk, question mark, and bracket patterns like a shell.
Summary: You build a module that expands `*`, `?`, and `[...]` patterns like a shell. It teaches pattern matching and directory scanning.
Difficulty: Intermediate
Teaches (C): pattern matching, dirent scanning, recursion
Topics: pattern matching, dirent
Estimated LOC: 350
Libraries: none

281. Here-Doc & Variable Expansion Engine
Folder: 12-shell/281-heredoc-expansion
Description: Implement here-documents and variable expansion.
Summary: You build an engine that implements here-documents (`<<EOF`) and `$VAR`/`${VAR}` expansion. It teaches input redirection and string substitution.
Difficulty: Advanced
Teaches (C): input redirection, string substitution, parsing
Topics: parsing, substitution
Estimated LOC: 400
Libraries: none

282. Shell Pipeline Profiler
Folder: 12-shell/282-pipeline-profiler
Description: Report per-stage timing and byte throughput in a pipeline.
Summary: You build a tool that reports per-stage timing and byte throughput in a pipeline. It teaches pipe measurement and throughput computation.
Difficulty: Advanced
Teaches (C): pipe measurement, stage timing, throughput
Topics: pipes, timing, stats
Estimated LOC: 450
Libraries: none

283. Dotfile Manager
Folder: 12-shell/283-dotfile-manager
Description: Symlink and version dotfiles across machines from a config.
Summary: You build a manager that distributes dotfiles across machines via symlinks from a config. It teaches symlinks and config parsing.
Difficulty: Intermediate
Teaches (C): symlink(), config parsing, file operations
Topics: symlinks, file ops
Estimated LOC: 400
Libraries: none

---

## 13. Networking (TCP/UDP/IP) (284–309) · `13-networking`

284. TCP Echo Server & Client
Folder: 13-networking/284-tcp-echo
Description: A blocking TCP server that echoes back what clients send.
Summary: You build a TCP server/client pair that echoes back whatever the client sends. It teaches the socket/bind/listen/accept cycle — the "hello world" of network programming.
Difficulty: Beginner
Teaches (C): socket/bind/listen/accept, TCP streams
Topics: sockets, TCP
Estimated LOC: 250
Libraries: none

285. UDP Echo & Ping Tool
Folder: 13-networking/285-udp-echo
Description: Send/receive UDP datagrams and measure round-trip time.
Summary: You build a tool that sends/receives UDP datagrams and measures round-trip time. It teaches connectionless communication and the TCP-vs-UDP difference.
Difficulty: Beginner
Teaches (C): sendto/recvfrom, datagrams, RTT measurement
Topics: sockets, UDP
Estimated LOC: 250
Libraries: none

286. Concurrent Chat Server (fork/thread)
Folder: 13-networking/286-chat-server-threads
Description: Multi-client chat room broadcasting messages to all peers.
Summary: You build a chat server that accepts many clients and broadcasts messages to everyone. It teaches a thread per client and concurrent connection management.
Difficulty: Intermediate
Teaches (C): thread per client, broadcast, concurrency
Topics: sockets, concurrency
Estimated LOC: 500
Libraries: pthread

287. Chat Server with select()/poll()
Folder: 13-networking/287-chat-server-select
Description: Single-threaded multiplexed chat server.
Summary: You write the same chat server single-threaded, multiplexing with select/poll. It teaches the base of managing many connections without threads (I/O multiplexing).
Difficulty: Intermediate
Teaches (C): select/poll, fd_set, multiplexing
Topics: I/O multiplexing
Estimated LOC: 450
Libraries: none

288. High-Concurrency epoll Server
Folder: 13-networking/288-epoll-server
Description: Handle thousands of connections with an epoll event loop.
Summary: You build a server that handles thousands of concurrent connections with an epoll event loop. It teaches the technique of modern high-performance servers (nginx-style).
Difficulty: Advanced
Teaches (C): epoll edge/level, non-blocking sockets, event loop
Topics: epoll, non-blocking I/O
Estimated LOC: 600
Libraries: none

289. File Transfer Protocol (custom)
Folder: 13-networking/289-file-transfer
Description: Reliable file transfer with chunking and checksums over TCP.
Summary: You build a protocol that reliably transfers files over TCP with chunking and checksums. It teaches framing and data integrity.
Difficulty: Intermediate
Teaches (C): framing, checksums, chunked transfer
Topics: sockets, framing
Estimated LOC: 500
Libraries: none

290. Port Scanner
Folder: 13-networking/290-port-scanner
Description: Scan a host for open TCP ports with connect/SYN modes.
Summary: You build a tool that scans a host for open TCP ports. It teaches non-blocking connect and timeout handling — the base of network discovery.
Difficulty: Intermediate
Teaches (C): non-blocking connect, timeout, scanning
Topics: sockets, timeouts
Estimated LOC: 350
Libraries: none

291. ping (ICMP)
Folder: 13-networking/291-ping
Description: Send ICMP echo requests and report latency and loss.
Summary: You build a `ping` that sends ICMP echo requests and reports latency/loss. It teaches raw sockets, ICMP headers, and the internet checksum.
Difficulty: Advanced
Teaches (C): raw sockets, ICMP header, checksum
Topics: raw sockets, ICMP, checksums
Estimated LOC: 400
Libraries: none

292. traceroute
Folder: 13-networking/292-traceroute
Description: Map the route to a host using TTL-limited probes.
Summary: You build `traceroute` that maps each router to a host by increasing TTL. It teaches TTL and the ICMP time-exceeded mechanism.
Difficulty: Advanced
Teaches (C): TTL manipulation, ICMP time-exceeded, raw sockets
Topics: raw sockets, TTL, ICMP
Estimated LOC: 450
Libraries: none

293. DNS Resolver (from scratch)
Folder: 13-networking/293-dns-resolver
Description: Build and parse DNS queries over UDP without libc resolver.
Summary: You build a tool that constructs DNS queries by hand and resolves them over UDP without the libc resolver. It teaches DNS's wire format and name compression.
Difficulty: Advanced
Teaches (C): DNS wire format, name compression, UDP
Topics: DNS wire format, UDP
Estimated LOC: 500
Libraries: none

294. DHCP Client (basic)
Folder: 13-networking/294-dhcp-client
Description: Perform DISCOVER/OFFER/REQUEST/ACK to obtain a lease.
Summary: You build a basic DHCP client that obtains an IP lease via DISCOVER/OFFER/REQUEST/ACK. It teaches how joining a network works under the hood.
Difficulty: Advanced
Teaches (C): DHCP packets, raw sockets, option parsing
Topics: DHCP, raw sockets
Estimated LOC: 600
Libraries: none

295. ARP Scanner
Folder: 13-networking/295-arp-scanner
Description: Discover hosts on a LAN via ARP requests.
Summary: You build a scanner that discovers devices on the local network via ARP requests. It teaches layer-2 (Ethernet) frames and AF_PACKET raw sockets.
Difficulty: Advanced
Teaches (C): layer-2 frames, AF_PACKET, MAC addresses
Topics: raw sockets, layer 2
Estimated LOC: 450
Libraries: none

296. Packet Sniffer
Folder: 13-networking/296-packet-sniffer
Description: Capture and decode Ethernet/IP/TCP headers off the wire.
Summary: You build a sniffer that captures Ethernet/IP/TCP packets off the wire and decodes their headers. It teaches the packet structure of protocol layers (Wireshark logic).
Difficulty: Advanced
Teaches (C): libpcap, header parsing, protocol layers
Topics: raw sockets, packet parsing
Estimated LOC: 600
Libraries: libpcap

297. Bandwidth Meter (iperf-lite)
Folder: 13-networking/297-bandwidth-meter
Description: Measure throughput between two hosts over TCP/UDP.
Summary: You build an `iperf`-like tool that measures link throughput between two hosts. It teaches timing and socket data-flow measurement.
Difficulty: Intermediate
Teaches (C): throughput computation, timing, socket flow
Topics: sockets, timing
Estimated LOC: 450
Libraries: none

298. NTP Time Client
Folder: 13-networking/298-ntp-client
Description: Query an NTP server and compute clock offset.
Summary: You build a client that queries an NTP server and computes clock offset. It teaches the NTP packet format and time synchronization.
Difficulty: Intermediate
Teaches (C): NTP packet format, timestamps, offset computation
Topics: NTP protocol, UDP
Estimated LOC: 350
Libraries: none

299. Simple VPN Tunnel (TUN device)
Folder: 13-networking/299-vpn-tunnel
Description: Tunnel IP packets between hosts through a userspace TUN device.
Summary: You build a simple VPN that tunnels IP packets between two hosts via a userspace TUN device. It teaches the base of TUN/TAP and encrypted tunneling.
Difficulty: Advanced
Teaches (C): TUN/TAP, IP packet tunneling, encryption
Topics: TUN/TAP, encryption
Estimated LOC: 700
Libraries: openssl

300. TCP Proxy / Port Forwarder
Folder: 13-networking/300-tcp-proxy
Description: Forward connections between a local and remote endpoint.
Summary: You build a TCP proxy that forwards a local port to a remote endpoint. It teaches bidirectional data relay and connection mapping.
Difficulty: Intermediate
Teaches (C): bidirectional relay, select, connection mapping
Topics: sockets, relaying
Estimated LOC: 400
Libraries: none

301. SOCKS5 Proxy Server
Folder: 13-networking/301-socks5-proxy
Description: Implement the SOCKS5 handshake and relay traffic.
Summary: You build a proxy server that implements the SOCKS5 handshake and relays traffic. It teaches a real proxy protocol and state management.
Difficulty: Advanced
Teaches (C): SOCKS5 handshake, protocol state, relaying
Topics: proxy protocols, sockets
Estimated LOC: 600
Libraries: none

302. Reliable UDP Protocol
Folder: 13-networking/302-reliable-udp
Description: Add ACKs, retransmission, and ordering on top of UDP.
Summary: You build a reliable protocol by adding ACKs, retransmission, and ordering on top of UDP. It teaches from scratch how TCP achieves reliability.
Difficulty: Advanced
Teaches (C): ACK/sequence numbers, retransmission, window
Topics: protocol design, reliability
Estimated LOC: 700
Libraries: none

303. Network Chat with Encryption
Folder: 13-networking/303-encrypted-chat
Description: End-to-end encrypted chat over TCP with key exchange.
Summary: You build an end-to-end encrypted TCP chat app with key exchange. It teaches combining cryptography with network programming.
Difficulty: Advanced
Teaches (C): key exchange, encrypted stream, sockets
Topics: crypto, sockets
Estimated LOC: 700
Libraries: openssl

304. Multicast Group Messenger
Folder: 13-networking/304-multicast-messenger
Description: Send and receive on IP multicast groups.
Summary: You build a tool that sends/receives messages on IP multicast groups. It teaches multicast (one source, many receivers).
Difficulty: Intermediate
Teaches (C): IP_ADD_MEMBERSHIP, multicast, UDP
Topics: multicast, UDP
Estimated LOC: 350
Libraries: none

305. WHOIS Client
Folder: 13-networking/305-whois-client
Description: Query WHOIS servers and display registration data.
Summary: You build a client that queries WHOIS servers and shows domain registration data. A short project teaching simple text-based protocols.
Difficulty: Beginner
Teaches (C): TCP client, protocol query, response reading
Topics: sockets, protocols
Estimated LOC: 250
Libraries: none

306. mDNS / Service Discovery
Folder: 13-networking/306-mdns-discovery
Description: Advertise and discover services on the local network.
Summary: You build an mDNS tool that advertises and discovers services on the local network. It teaches how devices auto-find each other on a network.
Difficulty: Advanced
Teaches (C): multicast DNS, record advertising, discovery
Topics: mDNS, multicast
Estimated LOC: 600
Libraries: none

307. Simple BitTorrent Peer (leech)
Folder: 13-networking/307-bittorrent-peer
Description: Parse a .torrent, contact peers, and download pieces.
Summary: You build a client that parses a .torrent, contacts peers, and downloads pieces. It teaches bencode, the peer protocol, and piece verification.
Difficulty: Advanced
Teaches (C): bencode, peer protocol, piece verification (SHA-1)
Topics: bencode, peer protocol
Estimated LOC: 1200
Libraries: openssl

308. Syslog Server
Folder: 13-networking/308-syslog-server
Description: Receive and store RFC-5424 syslog messages over UDP.
Summary: You build a server that receives and stores RFC-5424 syslog messages over UDP. It teaches the base of log-collection systems and message parsing.
Difficulty: Intermediate
Teaches (C): syslog parsing, UDP, file logging
Topics: parsing, UDP
Estimated LOC: 400
Libraries: none

309. Load Balancer (round-robin/least-conn)
Folder: 13-networking/309-load-balancer
Description: Distribute TCP connections across backend servers.
Summary: You build a load balancer that distributes TCP connections across backend servers (round-robin/least-conn). It teaches proxying and health checks.
Difficulty: Advanced
Teaches (C): epoll, distribution policies, health checks
Topics: proxying, health checks
Estimated LOC: 700
Libraries: none

---

## 14. Web Servers, HTTP & REST (310–329) · `14-web-http`

310. HTTP/1.0 Static File Server
Folder: 14-web-http/310-static-file-server
Description: Serve files from a directory with correct MIME types.
Summary: You build an HTTP server that serves files from a directory with correct MIME types. A basic web server teaching the HTTP response format and file sending.
Difficulty: Intermediate
Teaches (C): HTTP response, MIME types, file sending
Topics: HTTP, sockets, file I/O
Estimated LOC: 500
Libraries: none

311. HTTP Request Parser
Folder: 14-web-http/311-http-request-parser
Description: Parse request line, headers, and body robustly.
Summary: You build a module that robustly parses the request line, headers, and body. It teaches HTTP's text protocol and parsing with a state machine.
Difficulty: Intermediate
Teaches (C): header parsing, state machine, robustness
Topics: parsing, HTTP
Estimated LOC: 400
Libraries: none

312. HTTP Client (curl-lite)
Folder: 14-web-http/312-http-client
Description: Perform GET/POST requests and print responses.
Summary: You build a mini `curl` that performs GET/POST requests and prints responses. It teaches building requests and reading chunked responses.
Difficulty: Intermediate
Teaches (C): building requests, reading responses, chunked
Topics: HTTP, sockets
Estimated LOC: 450
Libraries: none

313. HTTP/1.1 Server with Keep-Alive
Folder: 14-web-http/313-http11-server
Description: Persistent connections, chunked encoding, and pipelining.
Summary: You build an HTTP/1.1 server with persistent connections, chunked encoding, and pipelining. It teaches the performance features of modern HTTP.
Difficulty: Advanced
Teaches (C): keep-alive, chunked transfer, streaming
Topics: HTTP/1.1, streaming
Estimated LOC: 800
Libraries: none

314. REST API Server (in-memory)
Folder: 14-web-http/314-rest-api-server
Description: CRUD JSON REST endpoints backed by an in-memory store.
Summary: You build an API server that does CRUD over an in-memory store with JSON REST endpoints. It teaches routing and REST design.
Difficulty: Advanced
Teaches (C): routing, JSON, CRUD API
Topics: HTTP, JSON, routing
Estimated LOC: 900
Libraries: none

315. URL Router & Middleware Framework
Folder: 14-web-http/315-router-middleware
Description: Route requests by method/path with composable middleware.
Summary: You build a framework that routes requests by method/path and offers a composable middleware chain. It teaches how web frameworks are built with function pointers.
Difficulty: Advanced
Teaches (C): function pointers, middleware chain, matching
Topics: routing, function pointers
Estimated LOC: 600
Libraries: none

316. WebSocket Server
Folder: 14-web-http/316-websocket-server
Description: Perform the WS handshake and exchange framed messages.
Summary: You build a server that performs the WebSocket handshake and exchanges framed messages. It teaches the SHA-1/base64 handshake and the frame/masking logic.
Difficulty: Advanced
Teaches (C): WS handshake (SHA-1/base64), framing, masking
Topics: WebSocket, framing, SHA-1
Estimated LOC: 700
Libraries: openssl

317. HTTPS Server with TLS
Folder: 14-web-http/317-https-server
Description: Serve HTTP over TLS using OpenSSL.
Summary: You build an HTTPS server that serves HTTP over TLS using OpenSSL. It teaches secure web serving with TLS sockets and certificates.
Difficulty: Advanced
Teaches (C): TLS sockets, SSL_read/write, certificates
Topics: TLS, sockets
Estimated LOC: 700
Libraries: openssl

318. CGI Web Server
Folder: 14-web-http/318-cgi-server
Description: Execute CGI scripts and stream their output to clients.
Summary: You build a server that runs CGI scripts and streams their output to clients. It teaches the old base of dynamic web via fork/exec, environ, and pipes.
Difficulty: Advanced
Teaches (C): fork/exec, environ, output via pipe
Topics: fork/exec, environ, HTTP
Estimated LOC: 700
Libraries: none

319. Reverse Proxy
Folder: 14-web-http/319-reverse-proxy
Description: Forward HTTP requests to backends and relay responses.
Summary: You build a reverse proxy that forwards HTTP requests to backends and relays responses. It teaches header rewriting and request forwarding — one of nginx's jobs.
Difficulty: Advanced
Teaches (C): request forwarding, header rewriting, relaying
Topics: HTTP, proxying
Estimated LOC: 800
Libraries: none

320. HTTP Rate Limiter
Folder: 14-web-http/320-rate-limiter
Description: Throttle requests per client using token buckets.
Summary: You build a module that throttles requests per client with token buckets. It teaches the classic rate-limiting algorithm.
Difficulty: Intermediate
Teaches (C): token bucket algorithm, hash table, time
Topics: algorithms, HTTP
Estimated LOC: 400
Libraries: none

321. Static Site Generator
Folder: 14-web-http/321-static-site-generator
Description: Convert Markdown + templates into a static website.
Summary: You build a generator that compiles Markdown + templates into a static website. It teaches Jekyll/Hugo logic via template processing and directory traversal.
Difficulty: Intermediate
Teaches (C): template processing, directory traversal, output generation
Topics: parsing, templating, file I/O
Estimated LOC: 700
Libraries: none

322. URL Shortener Service
Folder: 14-web-http/322-url-shortener
Description: Map short codes to URLs with a REST API and persistence.
Summary: You build a URL shortener that maps short codes to URLs with a REST API and persistence. A real mini service combining base62 encoding and storage.
Difficulty: Intermediate
Teaches (C): base62 encoding, hashing, persistent storage
Topics: HTTP, hashing, storage
Estimated LOC: 600
Libraries: none

323. HTTP Cache / CDN-lite
Folder: 14-web-http/323-http-cache
Description: Cache upstream responses with TTL and revalidation.
Summary: You build a CDN-lite that caches upstream responses with TTL and revalidation. It teaches HTTP caching semantics.
Difficulty: Advanced
Teaches (C): cache key, TTL, conditional requests
Topics: caching, HTTP semantics
Estimated LOC: 700
Libraries: none

324. Cookie & Session Manager
Folder: 14-web-http/324-session-manager
Description: Issue and validate session cookies with signing.
Summary: You build a module that issues and validates signed session cookies. It teaches cookie signing with HMAC and session management.
Difficulty: Intermediate
Teaches (C): HMAC signing, cookie parsing, session table
Topics: HTTP, HMAC
Estimated LOC: 400
Libraries: openssl

325. JSON REST Client SDK Generator
Folder: 14-web-http/325-sdk-generator
Description: Generate typed C client stubs from an API description.
Summary: You build a code generator that produces typed C client functions from an API description. It teaches code generation and templating.
Difficulty: Advanced
Teaches (C): code generation, templating, type mapping
Topics: code generation, parsing
Estimated LOC: 700
Libraries: none

326. Server-Sent Events (SSE) Server
Folder: 14-web-http/326-sse-server
Description: Stream real-time events to browsers over HTTP.
Summary: You build an SSE server that streams real-time events to browsers over HTTP. It teaches HTTP streaming and the event-stream format.
Difficulty: Intermediate
Teaches (C): HTTP streaming, event-stream format, keep-alive
Topics: HTTP streaming
Estimated LOC: 400
Libraries: none

327. Multipart Form Upload Handler
Folder: 14-web-http/327-multipart-upload
Description: Parse multipart/form-data and save uploaded files.
Summary: You build a handler that parses multipart/form-data requests and saves uploaded files. It teaches boundary parsing and handling binary bodies.
Difficulty: Advanced
Teaches (C): boundary parsing, binary body, file writing
Topics: parsing, HTTP
Estimated LOC: 500
Libraries: none

328. Basic + Bearer Auth Middleware
Folder: 14-web-http/328-auth-middleware
Description: Protect routes with HTTP Basic and token auth.
Summary: You build middleware that protects routes with HTTP Basic and Bearer token auth. It teaches base64 decoding and token validation.
Difficulty: Intermediate
Teaches (C): base64 decoding, token validation, headers
Topics: HTTP auth, base64
Estimated LOC: 350
Libraries: openssl

329. Webhook Dispatcher
Folder: 14-web-http/329-webhook-dispatcher
Description: Queue and deliver HTTP webhooks with retries and backoff.
Summary: You build a dispatcher that queues HTTP webhooks and delivers them with retries/backoff. It teaches queues, exponential backoff, and an HTTP client.
Difficulty: Advanced
Teaches (C): queue, exponential backoff, HTTP client
Topics: HTTP client, queues, retries
Estimated LOC: 600
Libraries: none

---

## 15. Multithreading & Concurrency (330–349) · `15-concurrency`

330. Thread Pool
Folder: 15-concurrency/330-thread-pool
Description: A fixed pool of worker threads consuming a task queue.
Summary: You build a pool of a fixed number of worker threads pulling work from a task queue. A core concurrency pattern teaching condition variables and work distribution.
Difficulty: Intermediate
Teaches (C): pthread, condition variables, task queue
Topics: pthreads, queues, condvars
Estimated LOC: 400
Libraries: pthread

331. Parallel Merge Sort
Folder: 15-concurrency/331-parallel-merge-sort
Description: Sort large arrays using worker threads.
Summary: You build a merge sort that sorts large arrays in parallel by splitting across threads. It teaches parallelizing divide-and-conquer work and joining threads.
Difficulty: Intermediate
Teaches (C): work splitting, thread joining, divide-and-conquer
Topics: parallelism, divide and conquer
Estimated LOC: 350
Libraries: pthread

332. Producer-Consumer Queue (bounded)
Folder: 15-concurrency/332-producer-consumer
Description: Thread-safe bounded buffer with condition variables.
Summary: You build a thread-safe bounded buffer with condition variables. It teaches full/empty signaling and classic producer-consumer synchronization.
Difficulty: Intermediate
Teaches (C): mutex/cond, full/empty signaling, synchronization
Topics: synchronization
Estimated LOC: 300
Libraries: pthread

333. Read-Write Lock Library
Folder: 15-concurrency/333-rwlock
Description: Implement fair reader-writer locks from primitives.
Summary: You build a fair reader-writer lock from primitives. It teaches the multi-reader/single-writer scenario and starvation avoidance.
Difficulty: Advanced
Teaches (C): reader/writer counters, fairness, starvation avoidance
Topics: synchronization, fairness
Estimated LOC: 350
Libraries: pthread

334. Lock-Free Queue (CAS)
Folder: 15-concurrency/334-lockfree-queue
Description: Michael-Scott lock-free MPSC/MPMC queue with atomics.
Summary: You build a lock-free queue with atomic compare-and-swap. It teaches advanced concurrency topics like memory ordering and the ABA problem.
Difficulty: Advanced
Teaches (C): compare-and-swap, memory ordering, ABA problem
Topics: atomics, memory ordering
Estimated LOC: 450
Libraries: none

335. Parallel Web Crawler
Folder: 15-concurrency/335-parallel-crawler
Description: Crawl links concurrently with a shared frontier.
Summary: You build a web crawler that visits links concurrently using a shared frontier queue. It teaches shared state and deduplication.
Difficulty: Advanced
Teaches (C): shared queue, deduplication, thread pool
Topics: threads, HTTP, dedup
Estimated LOC: 800
Libraries: pthread

336. Map-Reduce Framework (single node)
Folder: 15-concurrency/336-map-reduce
Description: Run map/reduce jobs across worker threads.
Summary: You build a single-node framework that runs map/reduce jobs across worker threads. It teaches the core of the big-data processing pattern.
Difficulty: Advanced
Teaches (C): map/reduce pattern, parallelism, aggregation
Topics: parallelism, aggregation
Estimated LOC: 600
Libraries: pthread

337. Actor Model Runtime
Folder: 15-concurrency/337-actor-runtime
Description: Message-passing actors with mailboxes and a scheduler.
Summary: You build a runtime that runs message-passing actors with mailboxes and a scheduler. It teaches concurrency based on messaging instead of shared memory.
Difficulty: Advanced
Teaches (C): message passing, mailbox, scheduler
Topics: concurrency models
Estimated LOC: 700
Libraries: pthread

338. Parallel Matrix Multiply
Folder: 15-concurrency/338-parallel-matmul
Description: Multiply large matrices with tiling and threads.
Summary: You build a tool that multiplies large matrices with tiling and threads. It teaches cache-friendly parallel computation.
Difficulty: Intermediate
Teaches (C): cache blocking (tiling), thread splitting
Topics: parallelism, cache blocking
Estimated LOC: 400
Libraries: pthread

339. Barrier & Latch Primitives
Folder: 15-concurrency/339-barrier-latch
Description: Implement reusable barriers and countdown latches.
Summary: You build reusable barrier and countdown-latch primitives. It teaches rendezvousing threads at specific points.
Difficulty: Intermediate
Teaches (C): barrier synchronization, countdown, cond
Topics: synchronization
Estimated LOC: 300
Libraries: pthread

340. Coroutine Library (setjmp/ucontext)
Folder: 15-concurrency/340-coroutines
Description: Cooperative coroutines with yield and resume.
Summary: You build a library providing cooperative coroutines with yield/resume. It teaches stack switching and cooperative multitasking.
Difficulty: Advanced
Teaches (C): ucontext/setjmp, stack switching, yield
Topics: context switching
Estimated LOC: 400
Libraries: none

341. Parallel Prime Sieve
Folder: 15-concurrency/341-parallel-sieve
Description: Segment the sieve across threads for speed.
Summary: You build a tool that generates primes in parallel by segmenting the sieve across threads. It teaches independent work splitting and share-free writes.
Difficulty: Intermediate
Teaches (C): segment splitting, threads, share-free writes
Topics: parallelism, number theory
Estimated LOC: 350
Libraries: pthread

342. Concurrent Hash Map
Folder: 15-concurrency/342-concurrent-hashmap
Description: Thread-safe hash map with fine-grained locking.
Summary: You build a thread-safe hash map with per-bucket locking. It teaches concurrent access via fine-grained locking.
Difficulty: Advanced
Teaches (C): per-bucket locks, concurrent access, hashing
Topics: concurrency, hashing
Estimated LOC: 500
Libraries: pthread

343. Work-Stealing Scheduler
Folder: 15-concurrency/343-work-stealing
Description: Balance tasks across threads with per-thread deques.
Summary: You build a work-stealing scheduler that balances tasks across threads with per-thread deques. It teaches the technique of modern parallel runtimes (Go, Rust).
Difficulty: Advanced
Teaches (C): work stealing, deques, load balancing
Topics: scheduling, deques
Estimated LOC: 600
Libraries: pthread

344. Deadlock Detector (runtime)
Folder: 15-concurrency/344-deadlock-detector
Description: Instrument locks to detect lock-order cycles at runtime.
Summary: You build a tool that instruments locks to detect lock-order cycles (deadlocks) at runtime. It combines graph cycle detection with concurrency.
Difficulty: Advanced
Teaches (C): lock-order graph, cycle detection, instrumentation
Topics: graphs, synchronization
Estimated LOC: 500
Libraries: pthread

345. Parallel Image Filter
Folder: 15-concurrency/345-parallel-image-filter
Description: Apply convolution filters to images across threads.
Summary: You build a tool that applies convolution filters to images in parallel by splitting rows. It teaches how easily image processing parallelizes.
Difficulty: Intermediate
Teaches (C): row splitting, parallel convolution, joining
Topics: parallelism, image processing
Estimated LOC: 400
Libraries: pthread

346. Thread-Safe Logger
Folder: 15-concurrency/346-threadsafe-logger
Description: Non-blocking logging with a background flush thread.
Summary: You build a thread-safe, non-blocking logger that flushes in the background. It teaches the message-queue and background-thread pattern.
Difficulty: Intermediate
Teaches (C): message queue, background flush, locking
Topics: queues, threads
Estimated LOC: 400
Libraries: pthread

347. Futures / Promises Library
Folder: 15-concurrency/347-futures-promises
Description: Async result handles resolved by worker threads.
Summary: You build a library offering async result handles (future/promise) resolved by worker threads. It teaches asynchronous programming abstractions.
Difficulty: Advanced
Teaches (C): future state, synchronous wait, callbacks
Topics: concurrency abstractions
Estimated LOC: 450
Libraries: pthread

348. Parallel Monte Carlo Simulator
Folder: 15-concurrency/348-parallel-monte-carlo
Description: Run independent simulations across cores and merge results.
Summary: You build a tool that runs independent Monte Carlo simulations across cores and merges results. It teaches the importance of a separate RNG state per thread.
Difficulty: Intermediate
Teaches (C): per-thread RNG state, result merging
Topics: parallelism, RNG per-thread
Estimated LOC: 350
Libraries: pthread

349. SIMD-Accelerated Vector Ops
Folder: 15-concurrency/349-simd-vector-ops
Description: Speed up array math with SSE/AVX intrinsics.
Summary: You build a library that speeds up array math with SSE/AVX intrinsics. It teaches single-instruction-multiple-data (SIMD) and memory alignment.
Difficulty: Advanced
Teaches (C): SIMD intrinsics, alignment, vectorization
Topics: SIMD, intrinsics
Estimated LOC: 400
Libraries: none

---

## 16. Memory Management (350–366) · `16-memory-management`

350. Custom malloc/free (free list)
Folder: 16-memory-management/350-custom-malloc
Description: A heap allocator using a free list and sbrk/mmap.
Summary: You build your own malloc/free with a free list on top of sbrk/mmap. It deeply teaches what's behind memory allocation (block splitting/coalescing).
Difficulty: Advanced
Teaches (C): sbrk/mmap, free list, block splitting/coalescing
Topics: allocators, memory
Estimated LOC: 600
Libraries: none

351. Arena / Bump Allocator
Folder: 16-memory-management/351-arena-allocator
Description: Fast region allocator with bulk free.
Summary: You build an arena allocator that allocates very fast by bumping a pointer and frees everything at once. It teaches lifetime-based memory management.
Difficulty: Intermediate
Teaches (C): pointer bumping, bulk free, lifetimes
Topics: allocators, lifetimes
Estimated LOC: 250
Libraries: none

352. Pool / Slab Allocator
Folder: 16-memory-management/352-pool-allocator
Description: Fixed-size object pool to avoid fragmentation.
Summary: You build a pool allocator for fixed-size objects that avoids fragmentation. It teaches allocating/freeing many same-size objects quickly.
Difficulty: Intermediate
Teaches (C): fixed-size blocks, free list, fragmentation avoidance
Topics: allocators, free lists
Estimated LOC: 300
Libraries: none

353. Stack Allocator
Folder: 16-memory-management/353-stack-allocator
Description: LIFO allocator with save/restore markers.
Summary: You build a LIFO stack allocator that can rewind via markers. It teaches fast, predictable allocation for temporary memory.
Difficulty: Intermediate
Teaches (C): LIFO allocation, markers, rewinding
Topics: allocators
Estimated LOC: 250
Libraries: none

354. Reference-Counting Smart Pointers
Folder: 16-memory-management/354-refcount-pointers
Description: Retain/release semantics with automatic free.
Summary: You build reference-counted smart pointers that auto-free via retain/release. It teaches how C++'s shared_ptr works, in C.
Difficulty: Advanced
Teaches (C): reference counting, retain/release, automatic free
Topics: reference counting
Estimated LOC: 350
Libraries: none

355. Mark-and-Sweep Garbage Collector
Folder: 16-memory-management/355-mark-sweep-gc
Description: A tracing GC for a managed object graph.
Summary: You build a mark-and-sweep garbage collector for a managed object graph. It teaches the fundamental algorithm of automatic memory management (GC).
Difficulty: Advanced
Teaches (C): mark-sweep, root scanning, object graph
Topics: garbage collection
Estimated LOC: 600
Libraries: none

356. Generational / Copying GC
Folder: 16-memory-management/356-copying-gc
Description: Copying collector with young/old generations.
Summary: You build a copying garbage collector with young/old generations. It teaches the performance techniques of modern language GCs (Java, Go).
Difficulty: Advanced
Teaches (C): copying collector, generations, forwarding pointer
Topics: garbage collection
Estimated LOC: 800
Libraries: none

357. Memory Leak Detector
Folder: 16-memory-management/357-leak-detector
Description: Wrap malloc/free to report leaks and double-frees.
Summary: You build a tool that wraps malloc/free to report leaks and double-frees. It teaches catching memory errors and instrumentation.
Difficulty: Advanced
Teaches (C): malloc wrapping, allocation table, double-free detection
Topics: instrumentation, hooks
Estimated LOC: 450
Libraries: none

358. Buffer Overflow Guard Allocator
Folder: 16-memory-management/358-guard-allocator
Description: Add guard pages/canaries around allocations.
Summary: You build a guard allocator that adds guard pages/canaries around allocations. It teaches catching overflows instantly with mprotect.
Difficulty: Advanced
Teaches (C): mprotect, guard page, canary value
Topics: mprotect, security
Estimated LOC: 400
Libraries: none

359. Memory Debugger (Valgrind-lite)
Folder: 16-memory-management/359-memory-debugger
Description: Track allocations and detect invalid accesses via interposition.
Summary: You build a mini Valgrind that tracks allocations and detects invalid accesses via shadow memory. It teaches how memory debuggers work.
Difficulty: Advanced
Teaches (C): shadow memory, interposition, invalid access
Topics: instrumentation, shadow memory
Estimated LOC: 700
Libraries: none

360. Object Pool with Recycling
Folder: 16-memory-management/360-object-pool
Description: Reuse expensive objects with acquire/release.
Summary: You build an object pool that reuses expensive objects via acquire/release. It teaches reducing allocation cost and object recycling.
Difficulty: Intermediate
Teaches (C): object recycling, acquire/release, pooling
Topics: pooling, lifetimes
Estimated LOC: 300
Libraries: none

361. Copy-on-Write Buffer
Folder: 16-memory-management/361-cow-buffer
Description: Share buffers cheaply and copy only on mutation.
Summary: You build a COW buffer that shares cheaply and copies only on mutation. It teaches efficient memory sharing via reference counting.
Difficulty: Advanced
Teaches (C): COW, reference counting, copy on write
Topics: COW, reference counting
Estimated LOC: 400
Libraries: none

362. Compacting Allocator
Folder: 16-memory-management/362-compacting-allocator
Description: Reduce fragmentation by relocating live objects.
Summary: You build a compacting allocator that reduces fragmentation by relocating live objects. It teaches handle indirection and memory compaction.
Difficulty: Advanced
Teaches (C): compaction, object relocation, handle indirection
Topics: memory compaction
Estimated LOC: 600
Libraries: none

363. realloc Growth Strategy Benchmark
Folder: 16-memory-management/363-realloc-benchmark
Description: Compare growth factors and their fragmentation impact.
Summary: You build a benchmark that measures the speed and fragmentation impact of different growth factors (1.5x vs 2x). It teaches dynamic-array growth strategies.
Difficulty: Intermediate
Teaches (C): growth factor, timing, measurement
Topics: allocators, benchmarking
Estimated LOC: 350
Libraries: none

364. Aligned Allocation Library
Folder: 16-memory-management/364-aligned-allocation
Description: Provide cache-line and page-aligned allocations.
Summary: You build a library providing cache-line and page-aligned allocations. It teaches alignment math and why it matters for performance.
Difficulty: Intermediate
Teaches (C): alignment math, posix_memalign, cache line
Topics: alignment, memory
Estimated LOC: 250
Libraries: none

365. Memory Fragmentation Visualizer
Folder: 16-memory-management/365-fragmentation-visualizer
Description: Visualize heap layout and fragmentation over time.
Summary: You build a tool that visualizes heap layout and fragmentation over time in the terminal. It teaches allocation tracking and seeing fragmentation.
Difficulty: Advanced
Teaches (C): heap map, visualization, allocation tracking
Topics: allocators, visualization
Estimated LOC: 500
Libraries: ncurses

366. Stack Depth & Overflow Detector
Folder: 16-memory-management/366-stack-overflow-detector
Description: Detect deep recursion and near-stack-overflow conditions.
Summary: You build a tool that detects deep recursion and near-stack-overflow conditions. It teaches stack bounds, guard pages, and catching SIGSEGV.
Difficulty: Advanced
Teaches (C): stack bounds, guard pages, catching SIGSEGV
Topics: stack, signals, guard pages
Estimated LOC: 350
Libraries: none

---

## 17. Graphics (SDL2 / Raylib / OpenGL) (367–392) · `17-graphics`

367. Software Framebuffer Renderer
Folder: 17-graphics/367-framebuffer-renderer
Description: Plot pixels, lines, and shapes into a raw framebuffer.
Summary: You build a software renderer that plots pixels, lines, and shapes into a raw framebuffer. It teaches how pixel-by-pixel drawing works without a GPU.
Difficulty: Intermediate
Teaches (C): pixel buffer, direct memory writing, SDL texture
Topics: rasterization, Bresenham
Estimated LOC: 500
Libraries: sdl2

368. Line & Circle Rasterizer
Folder: 17-graphics/368-line-circle-rasterizer
Description: Draw primitives using Bresenham and midpoint algorithms.
Summary: You build a module that draws lines and circles with the Bresenham/midpoint algorithms. It teaches the classic algorithms for fast drawing with integer arithmetic.
Difficulty: Intermediate
Teaches (C): Bresenham, midpoint algorithm, integer drawing
Topics: rasterization
Estimated LOC: 350
Libraries: sdl2

369. Triangle Rasterizer with Z-Buffer
Folder: 17-graphics/369-triangle-rasterizer
Description: Fill triangles with depth testing and interpolation.
Summary: You build a rasterizer that fills triangles with depth testing and interpolation. It teaches the core work of GPUs (barycentric coordinates, z-buffer) in software.
Difficulty: Advanced
Teaches (C): barycentric coordinates, depth buffer, interpolation
Topics: rasterization, 3D
Estimated LOC: 600
Libraries: sdl2

370. Software 3D Wireframe Renderer
Folder: 17-graphics/370-3d-wireframe
Description: Project and draw 3D models as rotating wireframes.
Summary: You build a renderer that draws 3D models as rotating wireframes via perspective projection. It teaches 3D math and projection from scratch.
Difficulty: Advanced
Teaches (C): perspective projection, matrix transforms, 3D math
Topics: 3D math, projection
Estimated LOC: 600
Libraries: sdl2

371. Software 3D Renderer with Shading
Folder: 17-graphics/371-3d-shading
Description: Flat/Gouraud shading of OBJ models in software.
Summary: You build a renderer that draws OBJ models with flat/Gouraud shading in software. It teaches the lighting model and normal computation.
Difficulty: Advanced
Teaches (C): lighting model, normal computation, shading
Topics: 3D graphics, lighting
Estimated LOC: 900
Libraries: sdl2

372. Ray Tracer (spheres & planes)
Folder: 17-graphics/372-ray-tracer
Description: Render scenes with reflections, shadows, and lighting.
Summary: You build a ray tracer that renders scenes with reflections, shadows, and lighting. It teaches photorealistic rendering via ray-object intersection and vector math.
Difficulty: Advanced
Teaches (C): ray-object intersection, vector math, PPM output
Topics: ray tracing, vectors
Estimated LOC: 900
Libraries: none

373. Path Tracer
Folder: 17-graphics/373-path-tracer
Description: Physically based rendering with Monte Carlo sampling.
Summary: You build a path tracer that does physically based rendering with Monte Carlo sampling. It teaches global illumination and the modern film/game rendering technique.
Difficulty: Advanced
Teaches (C): global illumination, Monte Carlo, sampling
Topics: global illumination, sampling
Estimated LOC: 1200
Libraries: none

374. OBJ Model Loader & Viewer
Folder: 17-graphics/374-obj-viewer
Description: Parse Wavefront OBJ and view it with OpenGL.
Summary: You build a viewer that parses Wavefront OBJ models and displays them with OpenGL. It teaches the OpenGL pipeline and VBOs/VAOs.
Difficulty: Advanced
Teaches (C): OBJ parsing, VBO/VAO, OpenGL pipeline
Topics: parsing, OpenGL
Estimated LOC: 700
Libraries: opengl

375. 2D Particle System
Folder: 17-graphics/375-particle-system
Description: Simulate fire/smoke/sparks with thousands of particles.
Summary: You build a system that simulates fire/smoke/sparks with thousands of particles. It teaches particle lifetime/velocity and the update loop.
Difficulty: Intermediate
Teaches (C): particle array, lifetime/velocity, update loop
Topics: simulation, rendering
Estimated LOC: 500
Libraries: raylib

376. Fractal Explorer (Mandelbrot/Julia)
Folder: 17-graphics/376-fractal-explorer
Description: Interactive zoomable fractal viewer with color maps.
Summary: You build an interactive, zoomable, color-mapped fractal viewer. It teaches complex-number iteration and real-time rendering.
Difficulty: Intermediate
Teaches (C): complex iteration, color map, zooming
Topics: complex math, rendering
Estimated LOC: 500
Libraries: sdl2

377. Fluid Simulation (Stable Fluids)
Folder: 17-graphics/377-fluid-simulation
Description: Real-time 2D fluid with advection and diffusion.
Summary: You build a system simulating real-time 2D fluid with advection and diffusion (Jos Stam's method). It teaches a visual application of numerical solvers.
Difficulty: Advanced
Teaches (C): numerical solver, advection, diffusion
Topics: numerical simulation
Estimated LOC: 800
Libraries: sdl2

378. Cloth / Spring-Mass Simulation
Folder: 17-graphics/378-cloth-simulation
Description: Simulate cloth with constraints and gravity.
Summary: You build a system that simulates cloth with a spring-mass model and constraints. It teaches physics integration and constraint solving.
Difficulty: Advanced
Teaches (C): spring-mass model, constraint solving, integration
Topics: physics, integration
Estimated LOC: 600
Libraries: raylib

379. Boids Flocking Simulation
Folder: 17-graphics/379-boids
Description: Emergent flocking from separation/alignment/cohesion.
Summary: You build a Boids simulation where separation/alignment/cohesion rules produce flocking. It teaches how complex behavior emerges from simple rules.
Difficulty: Intermediate
Teaches (C): vector rules, neighbor finding, flocking behavior
Topics: simulation, vectors
Estimated LOC: 400
Libraries: raylib

380. Procedural Terrain Generator
Folder: 17-graphics/380-terrain-generator
Description: Generate and render terrain from Perlin/Simplex noise.
Summary: You build a tool that generates and renders terrain from Perlin/Simplex noise. It teaches procedural noise and building a mesh from a heightmap.
Difficulty: Advanced
Teaches (C): Perlin noise, heightmap, mesh
Topics: noise, meshes
Estimated LOC: 700
Libraries: raylib

381. Voxel Engine (mini-Minecraft)
Folder: 17-graphics/381-voxel-engine
Description: Render and edit a chunked voxel world.
Summary: You build an engine that renders and edits a chunked voxel world. It teaches chunk management and efficient mesh generation (greedy meshing).
Difficulty: Advanced
Teaches (C): chunk management, mesh generation (greedy), OpenGL
Topics: meshing, chunks, OpenGL
Estimated LOC: 1500
Libraries: opengl

382. 2D Physics Engine
Folder: 17-graphics/382-2d-physics-engine
Description: Rigid-body collisions, impulses, and constraints.
Summary: You build a 2D physics engine with rigid-body collisions, impulses, and constraints. It teaches the core of game physics via collision detection and impulse resolution.
Difficulty: Advanced
Teaches (C): collision detection, impulse resolution, integration
Topics: physics, collision detection
Estimated LOC: 1000
Libraries: sdl2

383. Bezier & Spline Editor
Folder: 17-graphics/383-bezier-editor
Description: Interactively edit and render Bezier/Catmull-Rom curves.
Summary: You build an editor that edits and draws Bezier/Catmull-Rom curves with control points. It teaches curve math and interpolation.
Difficulty: Intermediate
Teaches (C): curve math, control points, interpolation
Topics: curves, interpolation
Estimated LOC: 450
Libraries: raylib

384. Image Viewer with Zoom/Pan
Folder: 17-graphics/384-image-viewer
Description: Load and navigate images with smooth zoom.
Summary: You build a viewer that loads images and navigates them with smooth zoom/pan. It teaches texture loading and transforms.
Difficulty: Intermediate
Teaches (C): texture loading, transforms, input handling
Topics: textures, input
Estimated LOC: 400
Libraries: sdl2

385. Font Renderer (bitmap/TTF)
Folder: 17-graphics/385-font-renderer
Description: Rasterize text from bitmap or TrueType fonts.
Summary: You build a module that rasterizes text from bitmap or TrueType fonts. It teaches the technical side of typography like glyph rasterization and kerning.
Difficulty: Advanced
Teaches (C): glyph rasterization, stb_truetype, kerning
Topics: glyphs, rasterization
Estimated LOC: 700
Libraries: none

386. Simple Paint Program
Folder: 17-graphics/386-paint-program
Description: Draw with brushes, colors, layers, and export to PNG.
Summary: You build a paint program with brushes, colors, layers, and PNG export. A practical graphics app teaching layer blending and file saving.
Difficulty: Intermediate
Teaches (C): brushes, layer blending, PNG export
Topics: input, rendering, files
Estimated LOC: 700
Libraries: sdl2

387. Charting / Plotting Library
Folder: 17-graphics/387-charting-library
Description: Render line, bar, and scatter charts to an image.
Summary: You build a library that renders line/bar/scatter charts to an image. It teaches axis scaling and mapping data to pixels.
Difficulty: Intermediate
Teaches (C): axis scaling, data mapping, rendering
Topics: rendering, scaling
Estimated LOC: 600
Libraries: raylib

388. Marching Squares / Contour Renderer
Folder: 17-graphics/388-marching-squares
Description: Extract and draw contour lines from a scalar field.
Summary: You build a tool that extracts and draws contour lines from a scalar field. It teaches producing contours (isolines) via threshold cases and interpolation.
Difficulty: Advanced
Teaches (C): threshold cases, interpolation, contouring
Topics: computational geometry
Estimated LOC: 450
Libraries: sdl2

389. Software Shader Playground
Folder: 17-graphics/389-shader-playground
Description: Run per-pixel "shaders" (C callbacks) over a framebuffer.
Summary: You build a playground that runs per-pixel C functions ("shaders") over a framebuffer. It teaches shader logic via UV coordinates and function pointers.
Difficulty: Advanced
Teaches (C): per-pixel function, callback, UV coordinates
Topics: rendering, function pointers
Estimated LOC: 500
Libraries: sdl2

390. Sprite Animation System
Folder: 17-graphics/390-sprite-animation
Description: Load sprite sheets and play frame-based animations.
Summary: You build a system that slices sprite sheets and plays frame-based animations. It teaches atlas slicing and frame timing.
Difficulty: Intermediate
Teaches (C): sprite sheet slicing, frame timing, atlas
Topics: textures, timing
Estimated LOC: 400
Libraries: raylib

391. Isometric Tile Renderer
Folder: 17-graphics/391-isometric-renderer
Description: Render and pick tiles in an isometric grid world.
Summary: You build a system that renders an isometric grid world and picks tiles with the mouse. It teaches coordinate transforms and isometric projection.
Difficulty: Advanced
Teaches (C): coordinate transforms, isometric projection, tile picking
Topics: coordinate transforms
Estimated LOC: 600
Libraries: sdl2

392. GPU Compute with OpenGL Compute Shaders
Folder: 17-graphics/392-gpu-compute
Description: Offload a parallel computation (N-body) to the GPU.
Summary: You offload a parallel computation (N-body) to the GPU with an OpenGL compute shader. It teaches GPGPU and general-purpose computation on the GPU.
Difficulty: Advanced
Teaches (C): compute shader, SSBO, GPGPU
Topics: GPGPU, OpenGL
Estimated LOC: 700
Libraries: opengl

---

## 18. ncurses & Terminal UIs (393–408) · `18-ncurses-tui`

393. Terminal Text Editor (nano-lite)
Folder: 18-ncurses-tui/393-text-editor
Description: Editor with cursor movement, edit, and save.
Summary: You build a terminal text editor with cursor movement, editing, and saving. It teaches line-buffer management and ncurses input.
Difficulty: Advanced
Teaches (C): line buffer, cursor management, ncurses input
Topics: ncurses, buffers, input
Estimated LOC: 800
Libraries: ncurses

394. Vim-like Modal Editor
Folder: 18-ncurses-tui/394-modal-editor
Description: Editor with normal/insert modes and basic motions.
Summary: You build a Vim-like editor with normal/insert modes and basic motions. It teaches how modal input and motion commands are designed.
Difficulty: Advanced
Teaches (C): modal input, motion commands, buffer
Topics: modal input, buffers
Estimated LOC: 1200
Libraries: ncurses

395. Terminal File Manager (ranger-lite)
Folder: 18-ncurses-tui/395-file-manager
Description: Navigate directories with a two-pane preview UI.
Summary: You build a file manager that browses directories with a two-pane preview UI. It teaches file listing and TUI layout.
Difficulty: Advanced
Teaches (C): two-pane layout, file listing, preview
Topics: ncurses, filesystem
Estimated LOC: 900
Libraries: ncurses

396. TUI Dashboard Framework
Folder: 18-ncurses-tui/396-dashboard-framework
Description: Composable widgets (boxes, gauges, tables) for TUIs.
Summary: You build a TUI framework offering composable widgets (boxes, gauges, tables). It teaches window management and widget abstraction.
Difficulty: Advanced
Teaches (C): widget abstraction, layout, window management
Topics: layout, widgets
Estimated LOC: 900
Libraries: ncurses

397. Terminal Task Board (Kanban)
Folder: 18-ncurses-tui/397-kanban-board
Description: Drag tasks across columns with keyboard controls.
Summary: You build a Kanban board that moves tasks across columns with the keyboard. It teaches a column model, navigation, and persistence.
Difficulty: Intermediate
Teaches (C): column model, keyboard navigation, persistence
Topics: ncurses, state, persistence
Estimated LOC: 600
Libraries: ncurses

398. Terminal Music Player UI
Folder: 18-ncurses-tui/398-music-player-ui
Description: Browse and control playback with a progress bar.
Summary: You build a music-player UI with track browsing and playback control with a progress bar. It combines an ncurses UI with audio integration.
Difficulty: Advanced
Teaches (C): ncurses UI, audio integration, progress bar
Topics: ncurses, audio integration
Estimated LOC: 700
Libraries: ncurses

399. Terminal Spreadsheet
Folder: 18-ncurses-tui/399-spreadsheet
Description: Grid of cells with formulas and dependency recalculation.
Summary: You build a terminal spreadsheet with formulas that recalculates dependencies. It teaches formula parsing and the dependency graph — a mini Excel.
Difficulty: Advanced
Teaches (C): formula parsing, dependency graph, recalculation
Topics: parsing, dependency graphs
Estimated LOC: 900
Libraries: ncurses

400. Terminal Hex Editor
Folder: 18-ncurses-tui/400-hex-editor
Description: View and edit binary files in a hex/ASCII pane.
Summary: You build an editor that views and edits binary files in a hex/ASCII pane. It teaches binary editing and cursor management.
Difficulty: Advanced
Teaches (C): binary editing, hex/ASCII view, cursor
Topics: ncurses, binary I/O
Estimated LOC: 700
Libraries: ncurses

401. Terminal Git Log Browser
Folder: 18-ncurses-tui/401-git-log-browser
Description: Interactively browse commits and diffs.
Summary: You build a git-log browser to interactively browse commits and diffs. It teaches parsing subprocess output and a scrollable TUI.
Difficulty: Advanced
Teaches (C): parsing subprocess output, scrolling, ncurses
Topics: ncurses, subprocess parsing
Estimated LOC: 700
Libraries: ncurses

402. Terminal Process Manager
Folder: 18-ncurses-tui/402-process-manager
Description: Interactive process list with kill/renice actions.
Summary: You build an interactive process manager with kill/renice actions. It combines a live /proc list with keyboard actions.
Difficulty: Advanced
Teaches (C): /proc, live list, keyboard actions
Topics: ncurses, /proc
Estimated LOC: 700
Libraries: ncurses

403. Terminal Chart Viewer
Folder: 18-ncurses-tui/403-chart-viewer
Description: Render live line/bar charts from piped data.
Summary: You build a tool that renders live line/bar charts from piped data. It teaches reading stdin, scaling, and ncurses drawing.
Difficulty: Intermediate
Teaches (C): reading stdin, scaling, ncurses drawing
Topics: ncurses, plotting
Estimated LOC: 500
Libraries: ncurses

404. TUI Form & Menu Library
Folder: 18-ncurses-tui/404-form-menu-library
Description: Build forms with fields, validation, and menus.
Summary: You build a library that creates forms with fields, validation, and menus. It teaches the ncurses form/menu subsystems.
Difficulty: Intermediate
Teaches (C): ncurses form/menu, field validation
Topics: ncurses forms
Estimated LOC: 500
Libraries: ncurses

405. Terminal Calendar & Agenda
Folder: 18-ncurses-tui/405-calendar-agenda
Description: Month view with events and day agenda pane.
Summary: You build a calendar with a month view and a day-agenda pane. It teaches date math and grid layout.
Difficulty: Intermediate
Teaches (C): date math, grid layout, events
Topics: ncurses, date math
Estimated LOC: 500
Libraries: ncurses

406. Terminal Presentation Tool
Folder: 18-ncurses-tui/406-presentation-tool
Description: Show Markdown slides in the terminal with transitions.
Summary: You build a presentation tool that shows Markdown slides with transitions in the terminal. It teaches Markdown parsing and slide navigation.
Difficulty: Intermediate
Teaches (C): Markdown parsing, slide transition, ncurses
Topics: parsing, ncurses
Estimated LOC: 500
Libraries: ncurses

407. Terminal Typing Speed Test
Folder: 18-ncurses-tui/407-typing-test
Description: Measure WPM/accuracy with live highlighting.
Summary: You build a test that measures typing speed (WPM) and accuracy with live highlighting. A nice project teaching timing and character comparison.
Difficulty: Beginner
Teaches (C): timing, character comparison, color
Topics: ncurses, timing
Estimated LOC: 350
Libraries: ncurses

408. TUI Log Tailer with Filters
Folder: 18-ncurses-tui/408-log-tailer
Description: Follow logs with search, highlight, and level filters.
Summary: You build a tool that follows logs live with search/highlight/level filters. It teaches stream following and filtering in a TUI.
Difficulty: Intermediate
Teaches (C): stream following, filtering, highlighting
Topics: ncurses, streaming
Estimated LOC: 500
Libraries: ncurses

---

## 19. Cryptography (409–431) · `19-cryptography`

409. Classical Cipher Suite
Folder: 19-cryptography/409-classical-ciphers
Description: Caesar, Vigenère, Playfair, and rail-fence with cryptanalysis.
Summary: You build a suite that encodes/decodes Caesar, Vigenère, Playfair, and rail-fence and breaks them with frequency analysis. It teaches classic cryptography and why it's breakable.
Difficulty: Intermediate
Teaches (C): substitution ciphers, frequency analysis, matrix (Playfair)
Topics: substitution ciphers, frequency analysis
Estimated LOC: 500
Libraries: none

410. XOR Cipher & Key Recovery
Folder: 19-cryptography/410-xor-cipher
Description: Encrypt with repeating-key XOR and break it statistically.
Summary: You build a tool that encrypts with repeating-key XOR and breaks it statistically. It teaches cryptanalysis techniques like Hamming distance and key-length estimation.
Difficulty: Intermediate
Teaches (C): XOR, Hamming distance, key-length estimation
Topics: XOR, frequency analysis
Estimated LOC: 350
Libraries: none

411. MD5 Implementation
Folder: 19-cryptography/411-md5
Description: Implement the MD5 hash from the spec.
Summary: You implement the MD5 hash algorithm from the spec. It teaches hash mechanics like bit rotation, block processing, and padding.
Difficulty: Advanced
Teaches (C): bit rotation, block processing, padding
Topics: hashing, bit operations
Estimated LOC: 400
Libraries: none

412. SHA-256 Implementation
Folder: 19-cryptography/412-sha256
Description: Implement SHA-256 and verify against test vectors.
Summary: You implement SHA-256 and verify it against test vectors. It teaches the compression function and bit operations of a modern cryptographic hash — the base of blockchain/git.
Difficulty: Advanced
Teaches (C): compression function, message schedule, uint32 operations
Topics: hashing, bit operations
Estimated LOC: 400
Libraries: none

413. SHA-3 / Keccak Implementation
Folder: 19-cryptography/413-sha3-keccak
Description: Implement the Keccak sponge and SHA-3 variants.
Summary: You implement the Keccak sponge and SHA-3 variants. It teaches modern sponge-based hash design, different from Merkle-Damgård.
Difficulty: Advanced
Teaches (C): sponge structure, permutation, 5x5 state
Topics: hashing, permutations
Estimated LOC: 600
Libraries: none

414. HMAC Library
Folder: 19-cryptography/414-hmac
Description: Compute HMAC over any hash and verify messages.
Summary: You build a library that computes HMAC over any hash and verifies messages. It teaches message authentication codes (MACs).
Difficulty: Intermediate
Teaches (C): ipad/opad, key padding, MAC
Topics: MACs, hashing
Estimated LOC: 250
Libraries: none

415. AES (128/256) Implementation
Folder: 19-cryptography/415-aes
Description: Implement AES block cipher with ECB/CBC/CTR modes.
Summary: You implement the AES block cipher from scratch with ECB/CBC/CTR modes. It teaches Galois-field GF(2^8) arithmetic, the S-box, and cipher modes.
Difficulty: Advanced
Teaches (C): GF(2^8) arithmetic, S-box, round keys, modes
Topics: block ciphers, Galois field
Estimated LOC: 800
Libraries: none

416. ChaCha20 + Poly1305 AEAD
Folder: 19-cryptography/416-chacha20-poly1305
Description: Implement authenticated stream encryption.
Summary: You implement authenticated encryption (AEAD) with the ChaCha20 stream cipher plus Poly1305. It teaches a modern encryption method used in TLS.
Difficulty: Advanced
Teaches (C): ARX operations, stream cipher, authenticated encryption
Topics: stream ciphers, AEAD
Estimated LOC: 600
Libraries: none

417. RSA Key Generation & Encryption
Folder: 19-cryptography/417-rsa
Description: Generate keys and encrypt/sign with big-integer RSA.
Summary: You implement RSA that generates keys and encrypts/signs using big-integer arithmetic. It teaches how number theory turns into real-world cryptography.
Difficulty: Advanced
Teaches (C): big-integer arithmetic, modular exponentiation, prime generation
Topics: number theory, bignum
Estimated LOC: 900
Libraries: gmp

418. Diffie-Hellman Key Exchange
Folder: 19-cryptography/418-diffie-hellman
Description: Establish a shared secret over an insecure channel.
Summary: You implement the Diffie-Hellman exchange that establishes a shared secret over an insecure channel. It teaches the discrete logarithm and the magic of key exchange.
Difficulty: Advanced
Teaches (C): modular exponentiation, discrete logarithm, shared secret
Topics: modular exponentiation
Estimated LOC: 400
Libraries: gmp

419. Elliptic Curve Point Arithmetic
Folder: 19-cryptography/419-ecc-arithmetic
Description: Implement point addition/doubling on curve25519.
Summary: You implement point addition/doubling on curve25519. It teaches the mathematical base of elliptic-curve cryptography (modern key exchange).
Difficulty: Advanced
Teaches (C): point operations on a curve, modular inverse
Topics: ECC, modular math
Estimated LOC: 700
Libraries: none

420. Base64 / Base32 / Base58 Codec
Folder: 19-cryptography/420-base-codecs
Description: Encode and decode common binary-to-text encodings.
Summary: You build a library that encodes/decodes the Base64/Base32/Base58 binary-to-text encodings. It teaches bit grouping and alphabet mapping — used everywhere.
Difficulty: Beginner
Teaches (C): bit grouping, alphabet mapping, padding
Topics: bit manipulation, encoding
Estimated LOC: 350
Libraries: none

421. Password Hashing (PBKDF2/bcrypt-style)
Folder: 19-cryptography/421-password-hashing
Description: Derive keys with salt and configurable iterations.
Summary: You build a password-hashing library that derives keys with a salt and configurable iterations. It teaches why we hash passwords slowly (brute-force resistance).
Difficulty: Advanced
Teaches (C): KDF, salt, iteration cost
Topics: KDFs, hashing
Estimated LOC: 500
Libraries: none

422. Shamir's Secret Sharing
Folder: 19-cryptography/422-shamir-secret-sharing
Description: Split a secret into shares requiring k-of-n to recover.
Summary: You implement Shamir's secret sharing, splitting a secret so k-of-n shares recover it. It teaches polynomial interpolation and finite fields.
Difficulty: Advanced
Teaches (C): polynomial interpolation, finite field, Lagrange
Topics: polynomials, finite fields
Estimated LOC: 500
Libraries: none

423. Digital Signature Tool (sign/verify)
Folder: 19-cryptography/423-digital-signature
Description: Sign files with a private key and verify signatures.
Summary: You build a tool that signs files with a private key and verifies signatures. It teaches how hash+signature provides integrity/authentication.
Difficulty: Advanced
Teaches (C): hash+signature, public/private key, verification
Topics: signatures, hashing
Estimated LOC: 500
Libraries: openssl

424. TOTP / HOTP Authenticator
Folder: 19-cryptography/424-totp-hotp
Description: Generate one-time passwords compatible with 2FA apps.
Summary: You build a tool that generates one-time passwords compatible with Google Authenticator. It teaches HMAC-based OTP and time-window logic.
Difficulty: Intermediate
Teaches (C): HMAC-based OTP, time window, base32
Topics: HMAC, time-based codes
Estimated LOC: 300
Libraries: none

425. Cryptographic RNG (CSPRNG)
Folder: 19-cryptography/425-csprng
Description: Gather entropy and produce secure random bytes.
Summary: You build a CSPRNG that gathers entropy and produces secure random bytes. It teaches why crypto avoids plain rand() and how a DRBG works.
Difficulty: Advanced
Teaches (C): entropy gathering, /dev/urandom, hash-based DRBG
Topics: entropy, hashing
Estimated LOC: 350
Libraries: none

426. Encrypted File Vault
Folder: 19-cryptography/426-encrypted-vault
Description: Password-protected vault with authenticated encryption.
Summary: You build a password-protected file vault with authenticated encryption. It teaches AEAD, KDF, and designing a secure file format.
Difficulty: Advanced
Teaches (C): AEAD, KDF, file format, integrity
Topics: AEAD, KDF, file I/O
Estimated LOC: 600
Libraries: libsodium

427. Merkle Tree Builder & Proofs
Folder: 19-cryptography/427-merkle-tree
Description: Build Merkle trees and generate inclusion proofs.
Summary: You build a tool that constructs Merkle trees and generates inclusion proofs. It teaches how blockchain and Git verify data integrity.
Difficulty: Advanced
Teaches (C): hash tree, proof path, verification
Topics: hashing, trees
Estimated LOC: 450
Libraries: none

428. Steganography Tool (LSB)
Folder: 19-cryptography/428-steganography
Description: Hide and extract messages in image pixels.
Summary: You build a tool that hides and extracts messages in the least-significant bits (LSB) of image pixels. It teaches data hiding and bit manipulation.
Difficulty: Intermediate
Teaches (C): least-significant bit (LSB), pixel manipulation, hiding
Topics: image bytes, bit manipulation
Estimated LOC: 400
Libraries: none

429. One-Time Pad with Key Management
Folder: 19-cryptography/429-one-time-pad
Description: Perfectly-secret encryption with key generation and tracking.
Summary: You build one-time-pad (OTP) encryption with perfect secrecy plus key generation and tracking. It teaches the limits of theoretically unbreakable encryption.
Difficulty: Intermediate
Teaches (C): XOR, key generation, tracking used keys
Topics: XOR, key handling
Estimated LOC: 300
Libraries: none

430. CRC32 / Checksum Library
Folder: 19-cryptography/430-crc-checksum
Description: Implement CRC and Adler checksums with tables.
Summary: You implement table-based CRC and Adler checksums. It teaches polynomial arithmetic and error detection — used in ZIP/PNG.
Difficulty: Intermediate
Teaches (C): polynomial arithmetic, table generation, XOR
Topics: polynomial arithmetic
Estimated LOC: 300
Libraries: none

431. Simple TLS 1.2 Handshake (educational)
Folder: 19-cryptography/431-tls-handshake
Description: Perform a minimal TLS handshake using primitives you built.
Summary: You perform a minimal TLS handshake using the primitives you built yourself. It teaches how different crypto components combine into a real protocol.
Difficulty: Advanced
Teaches (C): crypto composition, handshake state, record layer
Topics: TLS, crypto composition
Estimated LOC: 1500
Libraries: none

---

## 20. Security, Reverse Engineering & Binary Analysis (432–457) · `20-security-reversing`

432. Buffer Overflow Demo & Mitigation Lab
Folder: 20-security-reversing/432-buffer-overflow-lab
Description: Demonstrate and then defend against a stack overflow (own code, educational).
Summary: You build an educational lab that demonstrates a stack overflow in your own code, then defends it with canaries/ASLR. It teaches how memory-safety bugs arise and are prevented.
Difficulty: Advanced
Teaches (C): stack layout, canary, memory-safety defenses
Topics: memory safety, canaries
Estimated LOC: 400
Libraries: none

433. Format String Vulnerability Lab
Folder: 20-security-reversing/433-format-string-lab
Description: Exploit and fix a printf format-string bug (own code, educational).
Summary: You exploit a printf format-string bug in your own code, then fix it. It teaches the importance of safe formatting and this classic vulnerability.
Difficulty: Advanced
Teaches (C): printf internals, safe formatting, defense
Topics: vulnerabilities, mitigation
Estimated LOC: 300
Libraries: none

434. Shellcode Loader & Runner
Folder: 20-security-reversing/434-shellcode-loader
Description: Load and execute position-independent code (research/CTF sandbox).
Summary: You build a tool (for research/CTF) that loads position-independent machine code into memory and runs it. It teaches mmap PROT_EXEC and memory-protection flags.
Difficulty: Advanced
Teaches (C): mmap PROT_EXEC, function pointer call, memory protection
Topics: mmap, exec permissions
Estimated LOC: 300
Libraries: none

435. ELF Symbol & Section Dumper (readelf-lite)
Folder: 20-security-reversing/435-readelf-lite
Description: Parse and display ELF sections, symbols, and relocations.
Summary: You build a mini `readelf` that shows ELF sections, symbols, and relocations. It teaches reading binary internals — the base of reverse engineering.
Difficulty: Advanced
Teaches (C): ELF structs, symbol table, relocations
Topics: ELF, binary layout
Estimated LOC: 600
Libraries: none

436. x86 Disassembler (subset)
Folder: 20-security-reversing/436-x86-disassembler
Description: Decode a subset of x86-64 instructions to assembly.
Summary: You build a disassembler that decodes a subset of x86-64 instructions to assembly. It teaches machine-code encoding techniques (ModR/M, opcodes).
Difficulty: Advanced
Teaches (C): instruction encoding, ModR/M, opcode tables
Topics: instruction encoding
Estimated LOC: 900
Libraries: none

437. Simple Debugger (ptrace)
Folder: 20-security-reversing/437-simple-debugger
Description: Set breakpoints, single-step, and inspect registers.
Summary: You build a debugger that sets breakpoints, single-steps, and inspects registers. It teaches ptrace and the INT3 breakpoint mechanism — the essence of gdb.
Difficulty: Advanced
Teaches (C): ptrace, INT3 breakpoint, register access
Topics: ptrace, breakpoints
Estimated LOC: 700
Libraries: none

438. Function Hooking / Detour Library
Folder: 20-security-reversing/438-function-hooking
Description: Redirect function calls at runtime by patching prologues.
Summary: You build a library that redirects calls at runtime by patching function prologues. It teaches code patching and the trampoline technique.
Difficulty: Advanced
Teaches (C): code patching, mprotect, trampoline
Topics: code patching, mprotect
Estimated LOC: 500
Libraries: none

439. LD_PRELOAD Interposition Toolkit
Folder: 20-security-reversing/439-ldpreload-toolkit
Description: Intercept libc calls to log or modify behavior.
Summary: You build a toolkit that intercepts libc calls via LD_PRELOAD to log/modify them. It teaches dynamic linking and symbol interposition.
Difficulty: Advanced
Teaches (C): dlsym RTLD_NEXT, symbol interposition, wrapping
Topics: dynamic linking, hooks
Estimated LOC: 350
Libraries: none

440. PE (Windows Executable) Parser
Folder: 20-security-reversing/440-pe-parser
Description: Parse PE headers, sections, and imports.
Summary: You parse the headers, sections, and import tables of Windows executables (PE). It teaches the Windows binary format and RVA computation.
Difficulty: Advanced
Teaches (C): PE layout, import table, RVA computation
Topics: PE format, binary layout
Estimated LOC: 600
Libraries: none

441. Control Flow Graph Extractor
Folder: 20-security-reversing/441-cfg-extractor
Description: Build a CFG from a disassembled function.
Summary: You build a tool that extracts a control-flow graph (CFG) from a disassembled function. It teaches static analysis via basic blocks and branch analysis.
Difficulty: Advanced
Teaches (C): basic blocks, branch analysis, graph
Topics: static analysis, graphs
Estimated LOC: 600
Libraries: none

442. Fuzzer (coverage-guided lite)
Folder: 20-security-reversing/442-fuzzer
Description: Mutate inputs and detect crashes in a target program.
Summary: You build a fuzzer that mutates inputs and finds crashes in a target program. It teaches automated bug finding and coverage intuition — the base of modern security testing.
Difficulty: Advanced
Teaches (C): input mutation, crash detection, coverage intuition
Topics: fuzzing, instrumentation
Estimated LOC: 600
Libraries: none

443. String & Entropy Scanner (strings clone)
Folder: 20-security-reversing/443-strings-entropy
Description: Extract printable strings and flag high-entropy regions.
Summary: You build a tool that extracts printable strings from binaries and flags high-entropy (encrypted/packed) regions. It teaches Shannon entropy and binary-scanning practice.
Difficulty: Intermediate
Teaches (C): printable scanning, Shannon entropy, windowing
Topics: binary scanning, entropy
Estimated LOC: 350
Libraries: none

444. Yara-style Signature Scanner
Folder: 20-security-reversing/444-signature-scanner
Description: Match byte/string patterns against files with rules.
Summary: You build a scanner that matches byte/string patterns against files with rule files. It teaches how antivirus/malware-scanning engines work.
Difficulty: Advanced
Teaches (C): rule parsing, multi-pattern matching, scanning
Topics: pattern matching, rules
Estimated LOC: 600
Libraries: none

445. Packer / Unpacker (educational)
Folder: 20-security-reversing/445-packer
Description: Compress+encrypt a binary and unpack it at runtime (own binaries).
Summary: You build a packer that compresses+encrypts your own binaries and unpacks them at runtime. It teaches stub loaders and runtime unpacking.
Difficulty: Advanced
Teaches (C): stub loader, compression, runtime unpacking
Topics: loaders, compression
Estimated LOC: 700
Libraries: zlib

446. ROP Gadget Finder
Folder: 20-security-reversing/446-rop-gadget-finder
Description: Scan a binary for useful return-oriented gadgets (research).
Summary: You build a tool (for research) that scans a binary for useful return-oriented (ROP) gadgets. It teaches disassembly scanning and exploitation research.
Difficulty: Advanced
Teaches (C): return-oriented sequences, disassembly scanning
Topics: disassembly, exploitation research
Estimated LOC: 500
Libraries: none

447. Anti-Debugging Detection Demo
Folder: 20-security-reversing/447-anti-debugging
Description: Detect ptrace/debugger presence and timing checks.
Summary: You build a demo that detects a debugger's presence via ptrace and timing checks. It teaches how software protections work.
Difficulty: Advanced
Teaches (C): ptrace detection, timing-based checks, /proc
Topics: ptrace, timing
Estimated LOC: 300
Libraries: none

448. Simple Antivirus (signature-based)
Folder: 20-security-reversing/448-antivirus
Description: Scan files against a hash/signature database.
Summary: You build a simple antivirus that scans files against a hash/signature database. It teaches basic threat detection via signature matching and directory scanning.
Difficulty: Intermediate
Teaches (C): hash database, signature matching, directory scanning
Topics: hashing, scanning
Estimated LOC: 500
Libraries: openssl

449. Network Intrusion Detector (rules)
Folder: 20-security-reversing/449-intrusion-detector
Description: Match packet patterns and alert on suspicious traffic.
Summary: You build an intrusion detection system (IDS) that matches packet patterns and alerts on suspicious traffic. It teaches packet parsing and a rules engine (Snort logic).
Difficulty: Advanced
Teaches (C): packet parsing, rules engine, alerting
Topics: packet parsing, rules
Estimated LOC: 700
Libraries: libpcap

450. Password Strength Auditor
Folder: 20-security-reversing/450-password-auditor
Description: Score passwords and check against common wordlists.
Summary: You build an auditor that scores passwords and checks them against common wordlists. It teaches entropy computation and password security.
Difficulty: Intermediate
Teaches (C): entropy computation, dictionary check, scoring
Topics: entropy, dictionaries
Estimated LOC: 350
Libraries: none

451. Dictionary/Brute-Force Cracker (own hashes)
Folder: 20-security-reversing/451-hash-cracker
Description: Crack self-generated hashed passwords for education.
Summary: You build a tool (educational) that cracks your own hashed passwords by dictionary/brute-force. It teaches hash comparison and search space.
Difficulty: Intermediate
Teaches (C): hash comparison, search space, dictionary
Topics: hashing, search
Estimated LOC: 400
Libraries: openssl

452. Syscall Auditing Sandbox
Folder: 20-security-reversing/452-syscall-sandbox
Description: Log and restrict syscalls of an untrusted child.
Summary: You build a sandbox that logs and restricts an untrusted child process's syscalls. It teaches secure execution via ptrace/seccomp.
Difficulty: Advanced
Teaches (C): ptrace/seccomp, syscall filtering, auditing
Topics: ptrace, seccomp, security
Estimated LOC: 600
Libraries: seccomp

453. Binary Diffing Tool
Folder: 20-security-reversing/453-binary-diffing
Description: Compare two binaries at the function/byte level.
Summary: You build a tool that compares two binaries at the function/byte level. It teaches patch analysis and similarity matching — used in security research.
Difficulty: Advanced
Teaches (C): byte/function diff, alignment, similarity
Topics: diffing, disassembly
Estimated LOC: 600
Libraries: none

454. Import/Dependency Analyzer (ldd-lite)
Folder: 20-security-reversing/454-ldd-lite
Description: List shared library dependencies of an executable.
Summary: You build a mini `ldd` that lists an executable's shared-library dependencies. It teaches reading the ELF dynamic section (DT_NEEDED).
Difficulty: Intermediate
Teaches (C): ELF dynamic section, DT_NEEDED, parsing
Topics: ELF, dynamic section
Estimated LOC: 400
Libraries: none

455. Heap Exploitation Sandbox
Folder: 20-security-reversing/455-heap-sandbox
Description: Visualize allocator internals to study heap bugs safely.
Summary: You build a sandbox that visualizes allocator internals so you can study heap bugs safely. It teaches chunk metadata and memory safety.
Difficulty: Advanced
Teaches (C): heap structure, chunk metadata, memory safety
Topics: allocators, memory safety
Estimated LOC: 600
Libraries: none

456. Capability & Privilege Dropper
Folder: 20-security-reversing/456-privilege-dropper
Description: Safely drop privileges and Linux capabilities after setup.
Summary: You build a module that safely drops privileges and Linux capabilities after setup. It teaches the setuid/setgid order and the least-privilege principle.
Difficulty: Advanced
Teaches (C): setuid/setgid order, capabilities, safe dropping
Topics: capabilities, security
Estimated LOC: 300
Libraries: none

457. Rootkit Detection Scanner (userspace)
Folder: 20-security-reversing/457-rootkit-detector
Description: Detect hidden processes/files by cross-checking sources.
Summary: You build a scanner that detects hidden processes/files by cross-checking different sources. It teaches anomaly detection and /proc analysis.
Difficulty: Advanced
Teaches (C): source cross-checking, /proc, anomaly detection
Topics: /proc, anomaly detection
Estimated LOC: 500
Libraries: none

---

## 21. Image Processing (458–476) · `21-image-processing`

458. PPM/PGM Image Library
Folder: 21-image-processing/458-ppm-library
Description: Read, write, and manipulate Netpbm images.
Summary: You build a library that reads, writes, and manipulates simple Netpbm (PPM/PGM) images. It teaches the pixel array and the simplest image format — the gateway to image projects.
Difficulty: Beginner
Teaches (C): simple image format, pixel array, file I/O
Topics: image formats, I/O
Estimated LOC: 300
Libraries: none

459. Image Filter Toolkit
Folder: 21-image-processing/459-image-filters
Description: Apply blur, sharpen, edge, and emboss convolutions.
Summary: You build a toolkit that applies blur, sharpen, edge, and emboss via convolution. It teaches kernels and border handling.
Difficulty: Intermediate
Teaches (C): convolution kernel, border handling, channel processing
Topics: convolution, kernels
Estimated LOC: 500
Libraries: none

460. Grayscale, Threshold & Histogram
Folder: 21-image-processing/460-grayscale-histogram
Description: Convert to grayscale and compute/equalize histograms.
Summary: You build a tool that converts to grayscale and computes/equalizes histograms. It teaches pixel math and contrast fixing via histogram equalization.
Difficulty: Beginner
Teaches (C): pixel math, histogram, equalization
Topics: pixel math, statistics
Estimated LOC: 350
Libraries: none

461. Image Resizer (bilinear/bicubic)
Folder: 21-image-processing/461-image-resizer
Description: Scale images with quality interpolation.
Summary: You build a tool that scales images with quality bilinear/bicubic interpolation. It teaches sampling and interpolation differences.
Difficulty: Intermediate
Teaches (C): bilinear/bicubic interpolation, sampling
Topics: interpolation, sampling
Estimated LOC: 400
Libraries: none

462. Canny Edge Detector
Folder: 21-image-processing/462-canny-edge
Description: Full Canny pipeline with NMS and hysteresis.
Summary: You build the full Canny edge-detection pipeline with gradient, non-maximum suppression, and hysteresis. It teaches computer vision's classic edge algorithm.
Difficulty: Advanced
Teaches (C): gradient, non-maximum suppression, hysteresis
Topics: gradients, edge detection
Estimated LOC: 600
Libraries: none

463. Image Rotation & Affine Transform
Folder: 21-image-processing/463-affine-transform
Description: Rotate/skew images with inverse mapping.
Summary: You build a tool that rotates/skews images with inverse mapping. It teaches transform matrices and inverse sampling.
Difficulty: Intermediate
Teaches (C): inverse mapping, transform matrix, sampling
Topics: transforms, sampling
Estimated LOC: 400
Libraries: none

464. Seam Carving (content-aware resize)
Folder: 21-image-processing/464-seam-carving
Description: Remove low-energy seams to resize without distortion.
Summary: You build seam carving that resizes without distortion by removing low-energy seams. It teaches energy maps and dynamic programming on a visual problem.
Difficulty: Advanced
Teaches (C): energy map, dynamic programming, seam finding
Topics: dynamic programming, energy maps
Estimated LOC: 600
Libraries: none

465. Median / Bilateral Denoise
Folder: 21-image-processing/465-denoise
Description: Reduce noise while preserving edges.
Summary: You build median/bilateral filters that reduce noise while preserving edges. It teaches window filtering and edge-preserving smoothing.
Difficulty: Intermediate
Teaches (C): window filtering, median, edge preservation
Topics: filtering, windows
Estimated LOC: 400
Libraries: none

466. Chroma Key (green screen)
Folder: 21-image-processing/466-chroma-key
Description: Composite a subject onto a new background.
Summary: You build a tool that composites a subject onto a new background via green-screen. It teaches color spaces and masking.
Difficulty: Intermediate
Teaches (C): color space, masking, blending
Topics: color spaces, masking
Estimated LOC: 350
Libraries: none

467. Image to ASCII Art
Folder: 21-image-processing/467-image-to-ascii
Description: Convert images into shaded ASCII/ANSI art.
Summary: You build a tool that converts images into shaded ASCII/ANSI art. A fun project teaching brightness sampling and character mapping.
Difficulty: Beginner
Teaches (C): brightness sampling, character mapping
Topics: sampling, mapping
Estimated LOC: 300
Libraries: none

468. Dithering (Floyd-Steinberg)
Folder: 21-image-processing/468-dithering
Description: Reduce color depth with error-diffusion dithering.
Summary: You build a tool that reduces color depth with error-diffusion dithering. It teaches quantization and diffusing error to neighbor pixels.
Difficulty: Intermediate
Teaches (C): error diffusion, quantization, neighbor distribution
Topics: quantization, dithering
Estimated LOC: 350
Libraries: none

469. Connected Component Labeling
Folder: 21-image-processing/469-connected-components
Description: Segment and label distinct regions in a binary image.
Summary: You build a tool that finds and labels distinct regions in a binary image. It teaches region segmentation via union-find and flood fill.
Difficulty: Intermediate
Teaches (C): union-find, flood fill, region labeling
Topics: union-find, flood fill
Estimated LOC: 400
Libraries: none

470. Hough Transform (lines/circles)
Folder: 21-image-processing/470-hough-transform
Description: Detect lines and circles via the Hough transform.
Summary: You build a tool that detects lines and circles in an image via the Hough transform. It teaches the accumulator space and parameter voting.
Difficulty: Advanced
Teaches (C): accumulator space, parameter voting, geometry
Topics: accumulators, geometry
Estimated LOC: 500
Libraries: none

471. Image Morphing / Blending
Folder: 21-image-processing/471-image-morphing
Description: Cross-dissolve and warp between two images.
Summary: You build a morph tool that cross-dissolves and warps between two images. It teaches interpolation and image warping techniques.
Difficulty: Advanced
Teaches (C): warping, interpolation, transition
Topics: interpolation, warping
Estimated LOC: 500
Libraries: none

472. Barcode / QR Decoder
Folder: 21-image-processing/472-qr-decoder
Description: Detect and decode 1D/2D codes from an image.
Summary: You build a decoder that detects and decodes 1D/2D codes from an image. It teaches pattern finding, grid sampling, and decoding.
Difficulty: Advanced
Teaches (C): pattern finding, grid sampling, decoding
Topics: image processing, decoding
Estimated LOC: 900
Libraries: none

473. Panorama Stitcher (basic)
Folder: 21-image-processing/473-panorama-stitcher
Description: Align and blend overlapping photos into a panorama.
Summary: You build a tool that aligns and blends overlapping photos into a panorama. It teaches feature matching and homography estimation.
Difficulty: Advanced
Teaches (C): feature matching, homography, blending
Topics: feature matching, homography
Estimated LOC: 900
Libraries: none

474. Color Palette Extractor (k-means)
Folder: 21-image-processing/474-palette-extractor
Description: Extract dominant colors via k-means clustering.
Summary: You build a tool that extracts an image's dominant colors via k-means clustering. It teaches a visual application of the clustering algorithm.
Difficulty: Intermediate
Teaches (C): k-means, color clustering, centroid update
Topics: clustering
Estimated LOC: 400
Libraries: none

475. Image Format Converter
Folder: 21-image-processing/475-format-converter
Description: Convert between PNG/JPG/BMP/PPM.
Summary: You build a tool that converts between PNG/JPG/BMP/PPM formats. It teaches codec usage and pixel conversion.
Difficulty: Intermediate
Teaches (C): calling codecs, pixel conversion, I/O
Topics: codecs, I/O
Estimated LOC: 350
Libraries: none

476. Real-Time Webcam Filter (V4L2)
Folder: 21-image-processing/476-webcam-filter
Description: Capture webcam frames and apply live filters.
Summary: You build a tool that captures webcam frames via V4L2 and applies live filters. It teaches hardware camera access (mmap frame buffers) and real-time processing.
Difficulty: Advanced
Teaches (C): V4L2, mmap frame buffers, live processing
Topics: V4L2, image processing
Estimated LOC: 700
Libraries: sdl2

---

## 22. Audio & Signal Processing (477–492) · `22-audio-dsp`

477. WAV Tone Generator
Folder: 22-audio-dsp/477-tone-generator
Description: Synthesize sine/square/saw tones to a WAV file.
Summary: You build a tool that synthesizes sine/square/saw waveforms into a WAV file. It teaches sampling and the basics of audio generation.
Difficulty: Beginner
Teaches (C): sampling, waveform, WAV writing
Topics: audio, sampling
Estimated LOC: 300
Libraries: none

478. Audio Playback Engine
Folder: 22-audio-dsp/478-playback-engine
Description: Stream PCM audio to speakers with a callback API.
Summary: You build a playback engine that streams PCM audio to speakers via a callback API. It teaches audio buffer feeding and real-time audio output.
Difficulty: Intermediate
Teaches (C): callback-based audio, buffer feeding
Topics: audio output, buffering
Estimated LOC: 400
Libraries: sdl2

479. Real-Time Spectrum Analyzer
Folder: 22-audio-dsp/479-spectrum-analyzer
Description: Show a live FFT spectrum of microphone input.
Summary: You build an analyzer that shows a live FFT spectrum of microphone input. It combines FFT, windowing, and real-time visualization.
Difficulty: Advanced
Teaches (C): FFT, windowing, live visualization
Topics: FFT, audio input
Estimated LOC: 600
Libraries: ncurses

480. Digital Audio Filters (EQ)
Folder: 22-audio-dsp/480-audio-filters
Description: Implement low/high/band-pass biquad filters.
Summary: You build an equalizer with low/high/band-pass biquad filters. It teaches filter coefficients and IIR filter design.
Difficulty: Advanced
Teaches (C): biquad, filter coefficients, IIR
Topics: DSP, filter design
Estimated LOC: 500
Libraries: none

481. Audio Effects Rack
Folder: 22-audio-dsp/481-effects-rack
Description: Add reverb, delay, distortion, and chorus effects.
Summary: You build an effects rack that adds reverb, delay, distortion, and chorus. It teaches DSP effects via delay lines and feedback.
Difficulty: Advanced
Teaches (C): delay lines, feedback, DSP buffers
Topics: DSP, buffers
Estimated LOC: 700
Libraries: sdl2

482. Metronome & Beat Generator
Folder: 22-audio-dsp/482-metronome
Description: Precisely timed click track with adjustable BPM.
Summary: You build a metronome that produces precisely timed clicks at an adjustable BPM. It teaches precise timing and BPM math.
Difficulty: Beginner
Teaches (C): precise timing, BPM math, audio output
Topics: timing, audio
Estimated LOC: 250
Libraries: sdl2

483. Pitch Detector (autocorrelation)
Folder: 22-audio-dsp/483-pitch-detector
Description: Estimate the fundamental frequency of a note.
Summary: You build a tool that estimates a note's fundamental frequency via autocorrelation. It teaches the pitch-detection technique of audio processing.
Difficulty: Advanced
Teaches (C): autocorrelation, fundamental frequency, DSP
Topics: DSP, autocorrelation
Estimated LOC: 450
Libraries: none

484. Guitar Tuner
Folder: 22-audio-dsp/484-guitar-tuner
Description: Detect pitch and show tuning offset in real time.
Summary: You build a guitar tuner that detects pitch and shows tuning offset in real time. It combines audio input, pitch detection, and cent computation.
Difficulty: Advanced
Teaches (C): audio input, pitch detection, cent computation
Topics: DSP, audio input
Estimated LOC: 500
Libraries: sdl2

485. Simple Synthesizer (subtractive)
Folder: 22-audio-dsp/485-synthesizer
Description: Play notes from the keyboard with oscillators and ADSR.
Summary: You build a synthesizer that plays notes from the keyboard with oscillators and ADSR envelopes. It teaches audio synthesis and envelope design.
Difficulty: Advanced
Teaches (C): oscillator, ADSR envelope, synthesis
Topics: synthesis, envelopes
Estimated LOC: 700
Libraries: sdl2

486. MIDI File Parser & Player
Folder: 22-audio-dsp/486-midi-player
Description: Parse MIDI files and synthesize the notes.
Summary: You build a player that parses MIDI files and synthesizes the notes. It teaches the MIDI event format and delta time.
Difficulty: Advanced
Teaches (C): MIDI event parsing, delta time, synthesis
Topics: MIDI format, synthesis
Estimated LOC: 700
Libraries: sdl2

487. DTMF Encoder/Decoder
Folder: 22-audio-dsp/487-dtmf
Description: Generate and detect phone touch-tone signals.
Summary: You build a tool that generates phone touch tones (DTMF) and detects them with the Goertzel algorithm. It teaches dual-tone encoding and frequency detection.
Difficulty: Intermediate
Teaches (C): Goertzel algorithm, dual-tone, detection
Topics: Goertzel algorithm, DSP
Estimated LOC: 400
Libraries: none

488. Audio Waveform Visualizer
Folder: 22-audio-dsp/488-waveform-visualizer
Description: Draw scrolling waveforms of live or file audio.
Summary: You build a visualizer that draws scrolling waveforms of live or file audio. It teaches sample drawing and scaling.
Difficulty: Intermediate
Teaches (C): sample drawing, scrolling, scaling
Topics: rendering, audio
Estimated LOC: 450
Libraries: sdl2

489. Sample Rate Converter (resampler)
Folder: 22-audio-dsp/489-resampler
Description: Resample audio with windowed-sinc interpolation.
Summary: You build a converter that resamples audio with windowed-sinc interpolation. It teaches sample-rate conversion and DSP interpolation.
Difficulty: Advanced
Teaches (C): windowed-sinc, interpolation, rate conversion
Topics: DSP, interpolation
Estimated LOC: 500
Libraries: none

490. Voice Activity Detector
Folder: 22-audio-dsp/490-vad
Description: Detect speech vs silence in an audio stream.
Summary: You build a tool that separates speech from silence in an audio stream. It teaches energy and zero-crossing analysis.
Difficulty: Intermediate
Teaches (C): energy/zero-crossing analysis, thresholding
Topics: energy/zero-crossing analysis
Estimated LOC: 350
Libraries: none

491. Simple Audio Compressor/Limiter
Folder: 22-audio-dsp/491-compressor-limiter
Description: Apply dynamic range compression to audio.
Summary: You build a compressor/limiter that applies dynamic range compression to audio. It teaches envelope following and gain reduction.
Difficulty: Advanced
Teaches (C): envelope following, gain reduction, dynamic range
Topics: DSP, envelope following
Estimated LOC: 450
Libraries: none

492. Morse Code Audio Encoder/Decoder
Folder: 22-audio-dsp/492-morse-code
Description: Convert text to Morse beeps and decode them back.
Summary: You build a tool that turns text into Morse beeps and decodes them back. It teaches timing-based encoding and tone detection.
Difficulty: Intermediate
Teaches (C): timing encoding, tone detection, tables
Topics: timing, DSP, encoding
Estimated LOC: 400
Libraries: sdl2

---

## 23. Compression (493–505) · `23-compression`

493. Run-Length Encoding
Folder: 23-compression/493-rle
Description: Compress and decompress data with RLE.
Summary: You build RLE that compresses/decompresses repeated bytes with a count. A nice starter teaching the simplest compression idea and stream coding.
Difficulty: Beginner
Teaches (C): run counting, stream coding, decoding
Topics: encoding, streams
Estimated LOC: 200
Libraries: none

494. Huffman File Compressor
Folder: 23-compression/494-huffman-compressor
Description: Full Huffman codec with a serialized code table.
Summary: You build a full Huffman file compressor that also serializes the code table. It teaches the frequency tree and bit-level I/O in a real compressor.
Difficulty: Advanced
Teaches (C): frequency tree, bit I/O, table serialization
Topics: greedy, trees, bit I/O
Estimated LOC: 600
Libraries: none

495. LZ77 Compressor
Folder: 23-compression/495-lz77
Description: Sliding-window dictionary compression.
Summary: You build LZ77 that compresses with a sliding-window dictionary. It teaches distance/length matches and dictionary-based compression — half of gzip.
Difficulty: Advanced
Teaches (C): sliding window, match finding, distance/length
Topics: LZ77, windows
Estimated LOC: 600
Libraries: none

496. LZ78 / LZW Compressor
Folder: 23-compression/496-lzw
Description: Dictionary-building compression like GIF/compress.
Summary: You build LZW (GIF's method) that compresses by building a dictionary. It teaches dynamic dictionaries and variable code widths.
Difficulty: Advanced
Teaches (C): dictionary building, code width, hash
Topics: LZW, dictionaries
Estimated LOC: 500
Libraries: none

497. DEFLATE Implementation
Folder: 23-compression/497-deflate
Description: Combine LZ77 and Huffman like gzip's DEFLATE.
Summary: You build gzip's DEFLATE by combining LZ77 and Huffman. It teaches how two techniques merge into the industry standard.
Difficulty: Advanced
Teaches (C): LZ77+Huffman, bit stream, block types
Topics: LZ77, Huffman, bit streams
Estimated LOC: 1000
Libraries: none

498. Arithmetic Coder
Folder: 23-compression/498-arithmetic-coder
Description: Range/arithmetic coding for near-entropy compression.
Summary: You build an arithmetic/range coder for near-entropy compression. It teaches probability models and range narrowing — stronger than Huffman.
Difficulty: Advanced
Teaches (C): range narrowing, probability model, entropy coding
Topics: entropy coding, probability
Estimated LOC: 600
Libraries: none

499. Burrows-Wheeler Transform + MTF
Folder: 23-compression/499-bwt-mtf
Description: Implement BWT, MTF, and RLE like the bzip2 pipeline.
Summary: You chain BWT, move-to-front, and RLE like the bzip2 pipeline. It teaches how data is transformed into a more "compressible" form.
Difficulty: Advanced
Teaches (C): BWT, move-to-front, suffix sorting
Topics: transforms, suffix arrays
Estimated LOC: 700
Libraries: none

500. gzip File Reader/Writer
Folder: 23-compression/500-gzip
Description: Read and write .gz files (header + DEFLATE).
Summary: You build a tool that reads/writes .gz files (header + DEFLATE + CRC32). It teaches a real file format and integrating your own DEFLATE.
Difficulty: Advanced
Teaches (C): gzip header, CRC32, DEFLATE integration
Topics: gzip format, CRC32
Estimated LOC: 800
Libraries: none

501. ZIP Archive Reader/Writer
Folder: 23-compression/501-zip
Description: Create and extract ZIP archives with stored/deflated entries.
Summary: You build a tool that creates and extracts ZIP archives. It teaches archive formats via the central directory, local headers, and CRC.
Difficulty: Advanced
Teaches (C): ZIP central directory, local header, CRC
Topics: ZIP format, CRC, compression
Estimated LOC: 900
Libraries: zlib

502. Delta Encoding Tool
Folder: 23-compression/502-delta-encoding
Description: Compute and apply binary diffs between file versions.
Summary: You build a tool that computes binary diffs between file versions and applies patches. It teaches block matching and delta compression — the base of update systems.
Difficulty: Intermediate
Teaches (C): diff computation, patch application, block matching
Topics: diffing, patching
Estimated LOC: 500
Libraries: none

503. Image-Specific Compressor
Folder: 23-compression/503-image-compressor
Description: Compress images with prediction + entropy coding (PNG-like).
Summary: You build a tool that compresses images with prediction filters + entropy coding (PNG-like). It teaches why image-specific compression works better.
Difficulty: Advanced
Teaches (C): prediction filters, entropy coding, channels
Topics: filters, entropy coding
Estimated LOC: 700
Libraries: none

504. Dictionary Compression Benchmark
Folder: 23-compression/504-compression-benchmark
Description: Compare RLE/Huffman/LZ ratios and speeds on datasets.
Summary: You build a benchmark comparing RLE/Huffman/LZ compression ratio and speed on datasets. It teaches which algorithm wins when.
Difficulty: Intermediate
Teaches (C): compression ratio, timing, comparison
Topics: benchmarking, compression
Estimated LOC: 400
Libraries: none

505. Streaming Compressor (chunked)
Folder: 23-compression/505-streaming-compressor
Description: Compress unbounded streams with framing and flushing.
Summary: You build a tool that compresses unbounded streams with framing and flushing. It teaches state holding and stream compression.
Difficulty: Advanced
Teaches (C): stream framing, flush, state holding
Topics: streaming, framing
Estimated LOC: 600
Libraries: zlib

---

## 24. Database Systems (506–524) · `24-databases`

506. Key-Value Store (in-memory)
Folder: 24-databases/506-kv-store
Description: A hash-backed KV store with get/set/delete.
Summary: You build a hash-backed key-value store with get/set/delete. It teaches the simplest form of a database and clean API design.
Difficulty: Intermediate
Teaches (C): hash table, API design, memory management
Topics: hashing, APIs
Estimated LOC: 400
Libraries: none

507. Persistent KV Store (log-structured)
Folder: 24-databases/507-persistent-kv
Description: Append-only log KV store with compaction (Bitcask-style).
Summary: You build a persistent KV store (Bitcask-style) with an append-only log and compaction. It teaches log-structured storage and durability.
Difficulty: Advanced
Teaches (C): append-only log, index, compaction
Topics: WAL, indexing, compaction
Estimated LOC: 700
Libraries: none

508. LSM-Tree Storage Engine
Folder: 24-databases/508-lsm-tree
Description: MemTable + SSTables with merges like LevelDB.
Summary: You build a LevelDB-style storage engine with a MemTable + SSTables and merges. It teaches the write-optimized structure of modern NoSQL databases.
Difficulty: Advanced
Teaches (C): memtable, SSTable, merging
Topics: LSM trees, compaction
Estimated LOC: 1200
Libraries: none

509. B-Tree Disk Index
Folder: 24-databases/509-btree-index
Description: On-disk B+tree supporting inserts and range scans.
Summary: You build an on-disk B+tree supporting inserts and range scans. It teaches the base of database indexes and page management.
Difficulty: Advanced
Teaches (C): disk pages, B+tree, range scans
Topics: paging, B-trees
Estimated LOC: 1000
Libraries: none

510. Write-Ahead Log & Recovery
Folder: 24-databases/510-wal-recovery
Description: Durable WAL with crash recovery and checkpoints.
Summary: You build a durable WAL with crash recovery and checkpoints. It teaches how databases avoid losing data (durability) via fsync.
Difficulty: Advanced
Teaches (C): fsync, WAL, crash recovery
Topics: durability, recovery
Estimated LOC: 600
Libraries: none

511. SQL Query Parser
Folder: 24-databases/511-sql-parser
Description: Parse a subset of SQL into an AST.
Summary: You build a parser that turns a subset of SQL into an AST. It teaches lexing and parsing on a real query language.
Difficulty: Advanced
Teaches (C): lexing, parsing, AST
Topics: lexing, parsing
Estimated LOC: 800
Libraries: none

512. Mini SQL Database Engine
Folder: 24-databases/512-sql-engine
Description: Parse, plan, and execute SELECT/INSERT with a storage engine.
Summary: You build a mini SQL database that parses, plans, and executes SELECT/INSERT over a storage engine. It teaches all layers of a database end to end.
Difficulty: Advanced
Teaches (C): query execution, storage, parse+plan
Topics: databases, execution
Estimated LOC: 2000
Libraries: none

513. Query Optimizer (cost-based)
Folder: 24-databases/513-query-optimizer
Description: Reorder joins and choose indexes by estimated cost.
Summary: You build a query optimizer that reorders joins and picks indexes by cost. It teaches how databases can speed up queries.
Difficulty: Advanced
Teaches (C): cost estimation, join ordering, statistics
Topics: optimization, statistics
Estimated LOC: 800
Libraries: none

514. Buffer Pool / Page Cache Manager
Folder: 24-databases/514-buffer-pool
Description: Cache disk pages with LRU/clock eviction and dirty flushing.
Summary: You build a manager that caches disk pages with LRU/clock eviction and flushes dirty pages. It teaches the memory-disk bridge of databases.
Difficulty: Advanced
Teaches (C): page cache, LRU/clock, dirty-page flush
Topics: caching, paging
Estimated LOC: 600
Libraries: none

515. Transaction Manager (MVCC)
Folder: 24-databases/515-mvcc
Description: Provide snapshot isolation with multi-version records.
Summary: You build a transaction manager that provides snapshot isolation via multi-version records. It teaches the concurrent transaction model (MVCC) of modern databases.
Difficulty: Advanced
Teaches (C): multi-version records, snapshot isolation, visibility
Topics: MVCC, isolation
Estimated LOC: 900
Libraries: none

516. Time-Series Database
Folder: 24-databases/516-timeseries-db
Description: Ingest and query timestamped metrics with downsampling.
Summary: You build a time-series database that ingests/queries timestamped metrics and downsamples. It teaches metric storage and aggregation.
Difficulty: Advanced
Teaches (C): time-ordered storage, downsampling, aggregation
Topics: storage, aggregation
Estimated LOC: 900
Libraries: none

517. Document Store (JSON)
Folder: 24-databases/517-document-store
Description: Store, index, and query JSON documents by field.
Summary: You build a document store that stores, field-indexes, and queries JSON documents. It teaches the base of MongoDB-style document databases.
Difficulty: Advanced
Teaches (C): JSON storage, field indexing, querying
Topics: JSON, indexing
Estimated LOC: 900
Libraries: none

518. Graph Database (basic)
Folder: 24-databases/518-graph-db
Description: Store nodes/edges and run traversal queries.
Summary: You build a graph database that stores nodes/edges and runs traversal queries. It teaches how relationship-heavy data is modeled.
Difficulty: Advanced
Teaches (C): node/edge storage, traversal queries
Topics: graphs, storage
Estimated LOC: 900
Libraries: none

519. Inverted Index Search Engine
Folder: 24-databases/519-search-engine
Description: Index documents and rank results with TF-IDF.
Summary: You build a search engine that indexes documents and ranks results with TF-IDF. It teaches the inverted index and ranking underneath Google.
Difficulty: Advanced
Teaches (C): inverted index, TF-IDF, ranking
Topics: indexing, ranking
Estimated LOC: 800
Libraries: none

520. Columnar Storage Engine
Folder: 24-databases/520-columnar-store
Description: Store data by column with compression and vectorized scans.
Summary: You build an engine that stores data column-by-column with compression and vectorized scans. It teaches why analytical databases (ClickHouse-style) are fast.
Difficulty: Advanced
Teaches (C): column storage, compression, vectorized scan
Topics: column stores, compression
Estimated LOC: 800
Libraries: none

521. Redis-lite Server
Folder: 24-databases/521-redis-lite
Description: Serve GET/SET/LPUSH over the RESP protocol via sockets.
Summary: You build a Redis-lite server that serves GET/SET/LPUSH over the RESP protocol. A comprehensive project combining networking, data structures, and protocol design.
Difficulty: Advanced
Teaches (C): RESP protocol, socket server, data structures
Topics: networking, data structures
Estimated LOC: 1000
Libraries: none

522. Bloom-Filter-Backed Cache
Folder: 24-databases/522-bloom-cache
Description: Avoid disk lookups for absent keys with a Bloom filter.
Summary: You build a cache that uses a Bloom filter to avoid disk lookups for absent keys. It teaches performance optimization with probabilistic structures.
Difficulty: Intermediate
Teaches (C): Bloom filter, cache, probabilistic check
Topics: probabilistic structures
Estimated LOC: 500
Libraries: none

523. Replication & Log Shipping
Folder: 24-databases/523-replication
Description: Replicate a KV store to a follower over the network.
Summary: You build a system that replicates a KV store to a follower over the network. It teaches database replication and log shipping.
Difficulty: Advanced
Teaches (C): log shipping, follower synchronization, sockets
Topics: replication, networking
Estimated LOC: 800
Libraries: none

524. Database CLI & REPL
Folder: 24-databases/524-db-repl
Description: Interactive client to run queries against your engine.
Summary: You build an interactive client (REPL) that sends queries to your database engine. It teaches line editing and a query-submission interface.
Difficulty: Intermediate
Teaches (C): REPL, line editing, query submission
Topics: REPL, parsing
Estimated LOC: 400
Libraries: readline

---

## 25. Compilers, Interpreters & Virtual Machines (525–553) · `25-compilers-vms`

525. Reverse Polish (RPN) Calculator VM
Folder: 25-compilers-vms/525-rpn-vm
Description: Evaluate postfix expressions on a small stack machine.
Summary: You build a VM that evaluates postfix expressions on a small stack machine. It teaches the simplest form of virtual machines and stack-based computation.
Difficulty: Beginner
Teaches (C): stack machine, postfix evaluation
Topics: stacks, evaluation
Estimated LOC: 250
Libraries: none

526. Tokenizer / Lexer Library
Folder: 25-compilers-vms/526-lexer-library
Description: Reusable lexer producing tokens with positions.
Summary: You build a reusable lexer that produces tokens with positions. It teaches the first stage (lexing) of every compiler/interpreter.
Difficulty: Intermediate
Teaches (C): lexing, token types, position tracking
Topics: lexing, state machines
Estimated LOC: 400
Libraries: none

527. Recursive Descent Expression Parser
Folder: 25-compilers-vms/527-recursive-descent
Description: Parse arithmetic into an AST with precedence.
Summary: You build a recursive-descent parser that parses arithmetic into an AST with precedence. It teaches the most intuitive way to go from grammar to code.
Difficulty: Intermediate
Teaches (C): recursive descent, AST, precedence
Topics: parsing, ASTs
Estimated LOC: 400
Libraries: none

528. Pratt Parser
Folder: 25-compilers-vms/528-pratt-parser
Description: Parse expressions with a Pratt (precedence-climbing) parser.
Summary: You build a parser that parses expressions with the Pratt (precedence-climbing) method. It teaches handling operator precedence elegantly — common in modern languages.
Difficulty: Intermediate
Teaches (C): binding power, prefix/infix handlers
Topics: parsing
Estimated LOC: 400
Libraries: none

529. Brainfuck Interpreter & Optimizer
Folder: 25-compilers-vms/529-brainfuck-interpreter
Description: Run Brainfuck with loop-collapsing optimizations.
Summary: You build a Brainfuck interpreter with loop optimizations. A fun intro teaching the tape-machine model and basic optimizations.
Difficulty: Beginner
Teaches (C): tape machine, loop matching, optimization
Topics: interpreters, tape machines
Estimated LOC: 300
Libraries: none

530. Brainfuck-to-C Compiler
Folder: 25-compilers-vms/530-brainfuck-to-c
Description: Transpile Brainfuck into compilable C.
Summary: You build a transpiler that turns Brainfuck into compilable C code. It concretely teaches what code generation (transpilation) is.
Difficulty: Intermediate
Teaches (C): code generation, transpilation
Topics: code generation
Estimated LOC: 300
Libraries: none

531. Lisp / Scheme Interpreter
Folder: 25-compilers-vms/531-lisp-interpreter
Description: Parse S-expressions and evaluate with closures.
Summary: You build a Lisp interpreter that parses S-expressions and evaluates with closures. It teaches environments and the core of functional languages.
Difficulty: Advanced
Teaches (C): S-expression parsing, environment, closures
Topics: interpreters, environments
Estimated LOC: 1000
Libraries: none

532. Forth Interpreter
Folder: 25-compilers-vms/532-forth-interpreter
Description: A threaded, stack-based Forth with a dictionary.
Summary: You build a threaded, stack-based Forth interpreter with a dictionary. It teaches how a self-extensible minimalist language works.
Difficulty: Advanced
Teaches (C): stack machine, dictionary, threaded code
Topics: stack VMs, dictionaries
Estimated LOC: 800
Libraries: none

533. Tree-Walking Scripting Language
Folder: 25-compilers-vms/533-tree-walking-lang
Description: Full language with variables, functions, and control flow.
Summary: You interpret a full scripting language with variables, functions, and control flow by walking the AST. A comprehensive project teaching scope and language semantics.
Difficulty: Advanced
Teaches (C): AST walking, scope, functions
Topics: interpreters, scoping
Estimated LOC: 1500
Libraries: none

534. Bytecode Compiler & VM
Folder: 25-compilers-vms/534-bytecode-vm
Description: Compile a language to bytecode and run it on a VM.
Summary: You compile a language to bytecode and run it on a stack-based VM. It teaches how languages like Python/Lua work (compile → execute).
Difficulty: Advanced
Teaches (C): bytecode generation, stack VM, opcode dispatch
Topics: bytecode, stack VMs
Estimated LOC: 2000
Libraries: none

535. Register-Based Virtual Machine
Folder: 25-compilers-vms/535-register-vm
Description: A register VM with an instruction set and assembler.
Summary: You build a register-based VM with its own instruction set and assembler. It teaches register architecture (like Lua's VM) versus a stack VM.
Difficulty: Advanced
Teaches (C): register-based ISA, instruction encoding
Topics: VM design, ISA
Estimated LOC: 1200
Libraries: none

536. Stack-Based Bytecode Assembler
Folder: 25-compilers-vms/536-bytecode-assembler
Description: Assemble textual mnemonics into VM bytecode.
Summary: You build an assembler that turns textual mnemonics into VM bytecode. It teaches label resolution and instruction encoding.
Difficulty: Intermediate
Teaches (C): mnemonic parsing, encoding, label resolution
Topics: assembling, encoding
Estimated LOC: 500
Libraries: none

537. Garbage-Collected Language Runtime
Folder: 25-compilers-vms/537-gc-runtime
Description: Add tracing GC to your interpreter's objects.
Summary: You build a runtime that adds a tracing GC to your interpreter's objects. It teaches how language runtimes manage memory automatically.
Difficulty: Advanced
Teaches (C): tracing GC, object header, root set
Topics: GC, runtimes
Estimated LOC: 800
Libraries: none

538. Static Type Checker
Folder: 25-compilers-vms/538-type-checker
Description: Infer/check types for a small language before running.
Summary: You build a checker that infers/checks types for a small language before running. It teaches type systems and the unification algorithm.
Difficulty: Advanced
Teaches (C): type inference, unification, AST walking
Topics: type systems, inference
Estimated LOC: 900
Libraries: none

539. C Subset Compiler to Assembly
Folder: 25-compilers-vms/539-c-compiler
Description: Compile a C subset to x86-64 assembly.
Summary: You build a compiler that compiles a C subset to x86-64 assembly. A capstone teaching code generation, calling conventions, and stack frames.
Difficulty: Advanced
Teaches (C): code generation, calling conventions, stack frame
Topics: codegen, calling conventions
Estimated LOC: 3000
Libraries: none

540. JSON Query Language (JQ-lite)
Folder: 25-compilers-vms/540-jq-lite
Description: Evaluate a path/filter language over JSON.
Summary: You build a mini `jq` that evaluates a path/filter language over JSON. It teaches parsing and executing a small DSL.
Difficulty: Advanced
Teaches (C): path parsing, filter evaluation, JSON
Topics: parsing, evaluation
Estimated LOC: 800
Libraries: none

541. Regular Expression Compiler to NFA/DFA
Folder: 25-compilers-vms/541-regex-compiler
Description: Compile regexes to automata and match with them.
Summary: You build an engine that compiles regexes to automata (NFA/DFA) and matches with them. It teaches Thompson's construction and subset construction — the "right" way to do regex.
Difficulty: Advanced
Teaches (C): Thompson NFA, subset construction, DFA
Topics: automata, compilation
Estimated LOC: 700
Libraries: none

542. Calculator Language with JIT
Folder: 25-compilers-vms/542-jit-calculator
Description: Emit machine code for expressions and execute it.
Summary: You build a JIT calculator that emits machine code for expressions and runs it. It teaches generating code at runtime via mmap PROT_EXEC.
Difficulty: Advanced
Teaches (C): machine code generation, mmap PROT_EXEC, JIT
Topics: JIT, machine code
Estimated LOC: 700
Libraries: none

543. Peephole Optimizer
Folder: 25-compilers-vms/543-peephole-optimizer
Description: Apply local optimizations to a bytecode/IR stream.
Summary: You build a module that applies local (peephole) optimizations to a bytecode/IR stream. It teaches the simplest yet effective form of compiler optimization.
Difficulty: Advanced
Teaches (C): pattern-based optimization, IR stream
Topics: optimization
Estimated LOC: 500
Libraries: none

544. Constant Folding & Dead Code Elimination
Folder: 25-compilers-vms/544-constant-folding
Description: Simplify an AST/IR before code generation.
Summary: You build a module that simplifies an AST/IR before codegen (constant folding, dead-code elimination). It teaches fundamental compiler optimizations.
Difficulty: Advanced
Teaches (C): constant folding, dead-code elimination, IR
Topics: optimization, IR
Estimated LOC: 500
Libraries: none

545. SSA IR Builder
Folder: 25-compilers-vms/545-ssa-ir
Description: Convert a control-flow graph into SSA form.
Summary: You build a module that converts a control-flow graph into SSA form. It teaches the base of modern compiler (LLVM) IR and dominance analysis.
Difficulty: Advanced
Teaches (C): SSA, dominance, phi nodes
Topics: compiler IR, dominance
Estimated LOC: 900
Libraries: none

546. Register Allocator (graph coloring)
Folder: 25-compilers-vms/546-register-allocator
Description: Allocate registers by coloring an interference graph.
Summary: You build an allocator that assigns registers by coloring an interference graph. It teaches how compilers share limited registers.
Difficulty: Advanced
Teaches (C): graph coloring, interference graph, spill
Topics: graph coloring, compilers
Estimated LOC: 700
Libraries: none

547. Parser Generator (mini-yacc)
Folder: 25-compilers-vms/547-parser-generator
Description: Generate a parser from a grammar specification.
Summary: You build a mini `yacc` that generates a parser from a grammar. It teaches parser generation via LR/LL tables and code generation.
Difficulty: Advanced
Teaches (C): LR/LL tables, grammar, code generation
Topics: LR/LL parsing, codegen
Estimated LOC: 1200
Libraries: none

548. Lexer Generator (mini-lex)
Folder: 25-compilers-vms/548-lexer-generator
Description: Generate a scanner from regex rules.
Summary: You build a mini `lex` that generates a scanner from regex rules. It teaches automatic lexer generation via regex→DFA conversion.
Difficulty: Advanced
Teaches (C): regex->DFA, scanner generation
Topics: automata, codegen
Estimated LOC: 900
Libraries: none

549. Template/Macro Preprocessor (cpp-lite)
Folder: 25-compilers-vms/549-preprocessor
Description: Implement include, define, and conditionals.
Summary: You build a mini C preprocessor implementing `#include`, `#define`, and conditionals. It teaches macro expansion and token rescanning.
Difficulty: Advanced
Teaches (C): macro expansion, conditional compilation, include
Topics: preprocessing, macros
Estimated LOC: 800
Libraries: none

550. Query Language for CSV (SQL-on-files)
Folder: 25-compilers-vms/550-csv-sql
Description: Run SELECT/WHERE/GROUP BY over CSV files.
Summary: You build a query engine that runs SELECT/WHERE/GROUP BY over CSV files. It combines parsing and execution over real data.
Difficulty: Advanced
Teaches (C): parsing, execution, grouping
Topics: parsing, execution
Estimated LOC: 900
Libraries: none

551. WebAssembly Interpreter (subset)
Folder: 25-compilers-vms/551-wasm-interpreter
Description: Parse and execute a subset of WASM bytecode.
Summary: You build an interpreter that parses and runs a subset of WASM bytecode. It teaches the modern portable bytecode format and a stack VM.
Difficulty: Advanced
Teaches (C): WASM format, stack VM, LEB128
Topics: bytecode, stack VMs
Estimated LOC: 1500
Libraries: none

552. Markup Language Compiler (config DSL)
Folder: 25-compilers-vms/552-config-dsl
Description: Compile a custom DSL into a runtime config structure.
Summary: You build a tool that compiles a custom DSL into a runtime config structure. It teaches designing and parsing your own small language.
Difficulty: Advanced
Teaches (C): DSL design, parsing, struct generation
Topics: DSLs, parsing
Estimated LOC: 700
Libraries: none

553. Interactive Language REPL with Errors
Folder: 25-compilers-vms/553-repl-errors
Description: A REPL with helpful error messages and line editing.
Summary: You build a language REPL with helpful error messages and line editing. It teaches user experience via good error reporting and position tracking.
Difficulty: Advanced
Teaches (C): error reporting, position tracking, line editing
Topics: interpreters, UX
Estimated LOC: 700
Libraries: readline

---

## 26. Emulators (554–566) · `26-emulators`

554. CHIP-8 Emulator
Folder: 26-emulators/554-chip8
Description: Emulate the CHIP-8 virtual machine and run ROMs.
Summary: You build an emulator for the CHIP-8 virtual machine that runs ROMs. The ideal first emulator project teaching opcode decoding and the basics of emulation.
Difficulty: Intermediate
Teaches (C): opcode decoding, registers/memory, emulation
Topics: opcode decoding, emulation
Estimated LOC: 700
Libraries: sdl2

555. Intel 8080 CPU Emulator
Folder: 26-emulators/555-intel-8080
Description: Emulate the 8080 and run Space Invaders.
Summary: You build an emulator for the Intel 8080 that runs the original Space Invaders. It teaches a real CPU's instruction set and flags.
Difficulty: Advanced
Teaches (C): CPU state, flags, instruction set
Topics: CPU emulation
Estimated LOC: 1500
Libraries: sdl2

556. MOS 6502 CPU Emulator
Folder: 26-emulators/556-mos-6502
Description: Cycle-accurate 6502 emulator with a test suite.
Summary: You build a cycle-accurate 6502 emulator with a test suite. It teaches addressing modes and cycle accuracy — the CPU of the NES/Apple II.
Difficulty: Advanced
Teaches (C): addressing modes, cycle accuracy, testing
Topics: CPU emulation, cycles
Estimated LOC: 1800
Libraries: none

557. NES Emulator (subset)
Folder: 26-emulators/557-nes
Description: Emulate 6502 + PPU to run simple NES games.
Summary: You build an emulator that runs simple NES games by emulating the 6502 + PPU. It teaches timing the CPU and graphics unit together.
Difficulty: Advanced
Teaches (C): PPU, mapper, timing
Topics: emulation, graphics
Estimated LOC: 4000
Libraries: sdl2

558. Game Boy Emulator (subset)
Folder: 26-emulators/558-game-boy
Description: Emulate the LR35902 CPU and render the LCD.
Summary: You build a Game Boy emulator that emulates the LR35902 CPU and renders the LCD. A big project teaching CPU+PPU timing and MBC.
Difficulty: Advanced
Teaches (C): CPU+PPU, MBC, timing
Topics: emulation, timing
Estimated LOC: 5000
Libraries: sdl2

559. Z80 CPU Emulator
Folder: 26-emulators/559-z80
Description: Emulate the Z80 for retro-computer targets.
Summary: You build a module that emulates the Z80 CPU for retro-computer targets. It teaches the Z80's wide instruction set and register pairs.
Difficulty: Advanced
Teaches (C): Z80 instruction set, register pairs
Topics: CPU emulation
Estimated LOC: 2000
Libraries: none

560. Simple RISC-V (RV32I) Emulator
Folder: 26-emulators/560-riscv-rv32i
Description: Execute RV32I instructions and run compiled ELF.
Summary: You build an emulator that executes RV32I instructions and runs compiled ELF binaries. It teaches a modern open ISA (RISC-V) and ELF loading.
Difficulty: Advanced
Teaches (C): RV32I ISA, ELF loading, decoding
Topics: ISA emulation, ELF
Estimated LOC: 1500
Libraries: none

561. Fantasy Console (PICO-8-like)
Folder: 26-emulators/561-fantasy-console
Description: A tiny virtual console with a scripting API and display.
Summary: You build a tiny virtual console (PICO-8-like) with a scripting API and display. It combines a VM, graphics, and scripting into one virtual hardware.
Difficulty: Advanced
Teaches (C): VM+graphics+script combination, virtual hardware
Topics: VM, graphics, scripting
Estimated LOC: 2500
Libraries: sdl2

562. Assembler for Your Emulated CPU
Folder: 26-emulators/562-custom-assembler
Description: Assemble source into ROMs for your emulator.
Summary: You build an assembler that turns source into ROMs for your emulator. It teaches label resolution and instruction encoding — completing your emulator project.
Difficulty: Intermediate
Teaches (C): assembler, label resolution, encoding
Topics: assembling
Estimated LOC: 600
Libraries: none

563. Terminal (VT100) Emulator
Folder: 26-emulators/563-vt100-emulator
Description: Interpret ANSI/VT100 escape sequences into a screen buffer.
Summary: You build a terminal emulator that interprets ANSI/VT100 escape sequences into a screen buffer. It teaches how terminals work (pty, escapes).
Difficulty: Advanced
Teaches (C): escape sequence parsing, screen buffer, pty
Topics: terminal protocols, pty
Estimated LOC: 1200
Libraries: sdl2

564. Simple GPU / Blitter Simulator
Folder: 26-emulators/564-blitter-simulator
Description: Model a 2D blitter with sprites and layers.
Summary: You build a simulator that models a 2D blitter with sprites and layers. It teaches how old consoles' graphics hardware worked.
Difficulty: Advanced
Teaches (C): blit operations, layers, hardware modeling
Topics: hardware modeling
Estimated LOC: 700
Libraries: sdl2

565. Retro Sound Chip Emulator (AY/SID-like)
Folder: 26-emulators/565-sound-chip
Description: Emulate a programmable sound generator and play tunes.
Summary: You build a module that emulates a programmable sound chip (AY/SID-like) and plays tunes. It teaches register-based sound synthesis.
Difficulty: Advanced
Teaches (C): sound synthesis, register emulation, channels
Topics: audio synthesis, emulation
Estimated LOC: 800
Libraries: sdl2

566. Debugger for Your Emulator
Folder: 26-emulators/566-emulator-debugger
Description: Step, breakpoint, and inspect memory/registers of an emulated CPU.
Summary: You build a debugger that steps, breakpoints, and inspects memory/registers of the emulated CPU. It combines emulator development with debugging tools.
Difficulty: Advanced
Teaches (C): step/breakpoint, memory viewing, emulator integration
Topics: debugging, emulation
Estimated LOC: 700
Libraries: ncurses

---

## 27. Embedded, IoT & Robotics (567–590) · `27-embedded-iot`

567. GPIO Blink & Button (Raspberry Pi)
Folder: 27-embedded-iot/567-gpio-blink
Description: Blink an LED and read a button via sysfs/gpiod.
Summary: You build a program that blinks an LED and reads a button. It teaches the "hello world" of embedded I/O and GPIO control.
Difficulty: Beginner
Teaches (C): GPIO read/write, embedded I/O basics
Topics: GPIO, embedded I/O
Estimated LOC: 200
Libraries: libgpiod

568. PWM LED Dimmer / Servo Driver
Folder: 27-embedded-iot/568-pwm-servo
Description: Control LED brightness and servo angle with PWM.
Summary: You build a program that controls LED brightness and servo angle with PWM. It teaches pulse-width modulation (PWM) and duty cycle.
Difficulty: Intermediate
Teaches (C): PWM duty cycle, timing, angle mapping
Topics: PWM, timing
Estimated LOC: 250
Libraries: pigpio

569. I2C Sensor Reader
Folder: 27-embedded-iot/569-i2c-sensor
Description: Read temperature/humidity from an I2C sensor.
Summary: You build a program that reads temperature/humidity from an I2C sensor. It teaches the I2C protocol and register reading (ioctl).
Difficulty: Intermediate
Teaches (C): I2C protocol, register reading, ioctl
Topics: I2C, protocols
Estimated LOC: 300
Libraries: none

570. SPI Device Driver (userspace)
Folder: 27-embedded-iot/570-spi-driver
Description: Communicate with an SPI display or ADC.
Summary: You build a userspace driver that talks to an SPI display or ADC. It teaches SPI transfers and timing.
Difficulty: Intermediate
Teaches (C): SPI transfer, spidev ioctl, timing
Topics: SPI, protocols
Estimated LOC: 350
Libraries: none

571. UART Serial Communication
Folder: 27-embedded-iot/571-uart-serial
Description: Send/receive framed data over a serial port.
Summary: You build a program that sends/receives framed data over a serial port. It teaches termios, baud rate, and framing.
Difficulty: Intermediate
Teaches (C): termios, baud, framing
Topics: serial, termios
Estimated LOC: 350
Libraries: none

572. Bare-Metal Blinky (STM32/AVR)
Folder: 27-embedded-iot/572-baremetal-blinky
Description: Toggle a pin with no OS by writing registers directly.
Summary: You toggle a pin with no OS by writing directly to registers. It teaches volatile and hardware register access at the lowest level.
Difficulty: Advanced
Teaches (C): direct register access, volatile, freestanding
Topics: registers, freestanding
Estimated LOC: 200
Libraries: none

573. Bare-Metal UART Driver
Folder: 27-embedded-iot/573-baremetal-uart
Description: Implement UART TX/RX by poking peripheral registers.
Summary: You build a driver that does UART TX/RX by poking peripheral registers. It teaches driver writing via MMIO and status flags.
Difficulty: Advanced
Teaches (C): MMIO, status flags, driver writing
Topics: MMIO, drivers
Estimated LOC: 350
Libraries: none

574. RTOS Task Scheduler (bare-metal)
Folder: 27-embedded-iot/574-rtos-scheduler
Description: Cooperative/preemptive scheduler for a microcontroller.
Summary: You build a cooperative/preemptive task scheduler for a microcontroller. It teaches the core of a real-time OS via SysTick and context switching.
Difficulty: Advanced
Teaches (C): context switching, SysTick, task management
Topics: context switching, timers
Estimated LOC: 600
Libraries: none

575. Ring Buffer for ISR Data
Folder: 27-embedded-iot/575-isr-ring-buffer
Description: Interrupt-safe buffer for streaming sensor data.
Summary: You build a ring buffer usable safely from inside an interrupt. It teaches volatile and the ISR-safe producer/consumer pattern — a must in embedded systems.
Difficulty: Intermediate
Teaches (C): volatile, ISR-safe buffer, producer/consumer
Topics: ISRs, buffers
Estimated LOC: 250
Libraries: none

576. Debounce & Input State Machine
Folder: 27-embedded-iot/576-debounce-fsm
Description: Debounce buttons and detect long/short presses.
Summary: You build a state machine that debounces buttons and detects short/long presses. It teaches timing-based FSM design.
Difficulty: Intermediate
Teaches (C): state machine, timing, debouncing
Topics: state machines, timing
Estimated LOC: 250
Libraries: none

577. PID Motor Controller
Folder: 27-embedded-iot/577-pid-controller
Description: Control motor speed/position with a tuned PID loop.
Summary: You build a program that controls motor speed/position with a tuned PID loop. It teaches the practical application of control theory and feedback.
Difficulty: Advanced
Teaches (C): PID computation, feedback, tuning
Topics: control theory, PID
Estimated LOC: 400
Libraries: none

578. Line-Following Robot Logic
Folder: 27-embedded-iot/578-line-follower
Description: Steer a robot using IR sensor input and PID.
Summary: You build logic that steers a robot using IR sensor input and PID. It combines sensor reading and the control loop in robotics.
Difficulty: Advanced
Teaches (C): sensor reading, PID steering, motor control
Topics: robotics, control
Estimated LOC: 450
Libraries: pigpio

579. Ultrasonic Distance Radar
Folder: 27-embedded-iot/579-ultrasonic-radar
Description: Map distances with an ultrasonic sensor on a servo.
Summary: You build a radar that maps distances with an ultrasonic sensor mounted on a servo. It teaches echo timing and servo sweeping — sensor/actuator coordination.
Difficulty: Intermediate
Teaches (C): echo timing, servo sweep, distance computation
Topics: sensors, timing
Estimated LOC: 400
Libraries: pigpio

580. IMU Sensor Fusion (complementary filter)
Folder: 27-embedded-iot/580-imu-fusion
Description: Fuse accelerometer/gyro data into stable orientation.
Summary: You build a program that fuses accelerometer/gyro data with a complementary filter into stable orientation. It teaches sensor fusion and angle computation — the base of drones.
Difficulty: Advanced
Teaches (C): complementary filter, sensor fusion, angle
Topics: sensor fusion, math
Estimated LOC: 450
Libraries: none

581. MQTT Client (from scratch)
Folder: 27-embedded-iot/581-mqtt-client
Description: Publish/subscribe to an MQTT broker over TCP.
Summary: You build an MQTT client from scratch that publish/subscribes to a broker over TCP. It teaches IoT's most common messaging protocol.
Difficulty: Advanced
Teaches (C): MQTT packets, publish/subscribe, TCP
Topics: MQTT protocol, networking
Estimated LOC: 700
Libraries: none

582. CoAP Client/Server
Folder: 27-embedded-iot/582-coap
Description: Implement constrained-device messaging over UDP.
Summary: You implement CoAP messaging over UDP for constrained devices. It teaches the REST-like protocol of low-power IoT devices.
Difficulty: Advanced
Teaches (C): CoAP messages, UDP, option encoding
Topics: CoAP, UDP
Estimated LOC: 700
Libraries: none

583. Home Automation Hub
Folder: 27-embedded-iot/583-home-automation-hub
Description: Aggregate sensors and expose control via a REST API.
Summary: You build a home-automation hub that aggregates sensors and exposes control via a REST API. It combines IoT devices, HTTP, and event handling.
Difficulty: Advanced
Teaches (C): device aggregation, HTTP API, events
Topics: IoT, HTTP, devices
Estimated LOC: 1000
Libraries: none

584. OTA Firmware Updater
Folder: 27-embedded-iot/584-ota-updater
Description: Download and flash firmware with rollback safety.
Summary: You build an updater that downloads and flashes firmware with rollback safety. It teaches integrity verification and safe updates.
Difficulty: Advanced
Teaches (C): flash writing, integrity verification, rollback
Topics: flashing, integrity
Estimated LOC: 700
Libraries: openssl

585. Modbus RTU/TCP Master
Folder: 27-embedded-iot/585-modbus-master
Description: Poll industrial devices over Modbus.
Summary: You build a master that polls industrial devices over Modbus. It teaches an industrial automation protocol and CRC.
Difficulty: Advanced
Teaches (C): Modbus frames, CRC, register query
Topics: Modbus, protocols
Estimated LOC: 600
Libraries: none

586. Data Logger to SD/Flash
Folder: 27-embedded-iot/586-data-logger
Description: Log timestamped sensor data with wear-friendly writes.
Summary: You build a logger that records timestamped sensor data with wear-friendly writes. It teaches embedded storage and buffered writing.
Difficulty: Intermediate
Teaches (C): timestamped logging, buffered writing, storage
Topics: storage, timing
Estimated LOC: 400
Libraries: none

587. Low-Power Sleep Scheduler
Folder: 27-embedded-iot/587-lowpower-scheduler
Description: Duty-cycle a device between sleep and sampling.
Summary: You build a scheduler that duty-cycles a device between sleep and sampling. It teaches power management and wake timers — critical for battery devices.
Difficulty: Advanced
Teaches (C): sleep modes, wake timer, power management
Topics: power management, timers
Estimated LOC: 350
Libraries: none

588. Robot Kinematics Solver
Folder: 27-embedded-iot/588-kinematics-solver
Description: Compute forward/inverse kinematics for a robot arm.
Summary: You build a solver that computes forward/inverse kinematics for a robot arm. It teaches robotic motion planning via matrices and trigonometry.
Difficulty: Advanced
Teaches (C): forward/inverse kinematics, matrices, trigonometry
Topics: robotics, linear algebra
Estimated LOC: 600
Libraries: math

589. CAN Bus Message Decoder
Folder: 27-embedded-iot/589-can-decoder
Description: Read and decode CAN frames on a vehicle bus.
Summary: You build a tool that reads and decodes CAN frames on a vehicle bus. It teaches automotive communication via SocketCAN and signal extraction.
Difficulty: Advanced
Teaches (C): SocketCAN, frame decoding, signal extraction
Topics: CAN, protocols
Estimated LOC: 500
Libraries: none

590. Bootloader with Firmware Verification
Folder: 27-embedded-iot/590-verified-bootloader
Description: A small bootloader that verifies and jumps to signed firmware.
Summary: You build a small bootloader that verifies signed firmware and jumps to it. It teaches signature verification and the secure-boot flow.
Difficulty: Advanced
Teaches (C): signature verification, jumping, boot flow
Topics: bootloaders, crypto
Estimated LOC: 600
Libraries: none

---

## 28. Artificial Intelligence & Machine Learning (591–611) · `28-ai-ml`

591. Perceptron & Logistic Regression
Folder: 28-ai-ml/591-perceptron-logistic
Description: Train a linear classifier with gradient descent.
Summary: You build a linear classifier (perceptron/logistic regression) trained with gradient descent. It teaches the most basic training loop of machine learning.
Difficulty: Intermediate
Teaches (C): gradient descent, weight update, loss
Topics: ML basics, gradients
Estimated LOC: 350
Libraries: math

592. K-Nearest Neighbors Classifier
Folder: 28-ai-ml/592-knn
Description: Classify points by nearest labeled neighbors.
Summary: You build a KNN that classifies points by their nearest labeled neighbors. A simple start teaching distance metrics and lazy learning.
Difficulty: Beginner
Teaches (C): distance metrics, voting, sorting
Topics: distance metrics
Estimated LOC: 300
Libraries: math

593. K-Means Clustering
Folder: 28-ai-ml/593-kmeans
Description: Cluster data with Lloyd's algorithm and visualization.
Summary: You build a tool that clusters data with Lloyd's algorithm and visualizes it. It teaches unsupervised learning and centroid updates.
Difficulty: Intermediate
Teaches (C): cluster assignment, centroid update, convergence
Topics: clustering
Estimated LOC: 400
Libraries: math

594. Decision Tree Learner
Folder: 28-ai-ml/594-decision-tree
Description: Build classification trees using information gain.
Summary: You build a learner that grows classification trees using information gain. It teaches interpretable ML via entropy and recursive splitting.
Difficulty: Intermediate
Teaches (C): entropy/information gain, recursive splitting, trees
Topics: trees, entropy
Estimated LOC: 500
Libraries: math

595. Naive Bayes Text Classifier
Folder: 28-ai-ml/595-naive-bayes
Description: Classify documents (e.g. spam) with Naive Bayes.
Summary: You build a tool that classifies documents (e.g. spam) with Naive Bayes. It teaches text classification via probability and log-sum.
Difficulty: Intermediate
Teaches (C): probability, log-sum, word counting
Topics: probability, NLP
Estimated LOC: 450
Libraries: none

596. Feedforward Neural Network
Folder: 28-ai-ml/596-feedforward-nn
Description: Train an MLP with backpropagation on MNIST.
Summary: You train a multi-layer network (MLP) on MNIST with backpropagation. It teaches the forward/backprop math of neural networks from scratch.
Difficulty: Advanced
Teaches (C): forward/backprop, matrix multiply, activation
Topics: neural networks, backprop
Estimated LOC: 700
Libraries: math

597. Autograd / Tensor Engine (micro)
Folder: 28-ai-ml/597-autograd-engine
Description: Reverse-mode automatic differentiation over a tensor graph.
Summary: You build a reverse-mode automatic differentiation (autograd) engine over a compute graph. It teaches the mechanism under PyTorch at small scale.
Difficulty: Advanced
Teaches (C): compute graph, reverse-mode diff, pointer nodes
Topics: autodiff, graphs
Estimated LOC: 800
Libraries: math

598. Convolutional Neural Network
Folder: 28-ai-ml/598-cnn
Description: Implement conv/pool layers and train an image classifier.
Summary: You write conv/pool layers and train an image classifier. It teaches the core layers of modern image recognition.
Difficulty: Advanced
Teaches (C): convolution, pooling, layer chaining
Topics: CNNs, convolution
Estimated LOC: 1200
Libraries: math

599. Recurrent Network / LSTM
Folder: 28-ai-ml/599-rnn-lstm
Description: Train an RNN/LSTM for character-level text generation.
Summary: You train an RNN/LSTM for character-level text generation. It teaches sequence models and backpropagation through time.
Difficulty: Advanced
Teaches (C): sequence model, gates, backprop through time
Topics: sequence models
Estimated LOC: 1000
Libraries: math

600. Linear SVM (SGD)
Folder: 28-ai-ml/600-svm
Description: Train a support vector machine with hinge loss.
Summary: You train a support vector machine with hinge loss and SGD. It teaches margin-based classification and regularization.
Difficulty: Advanced
Teaches (C): hinge loss, SGD, regularization
Topics: optimization, ML
Estimated LOC: 500
Libraries: math

601. Q-Learning Agent
Folder: 28-ai-ml/601-q-learning
Description: Learn to solve gridworld/CartPole via tabular Q-learning.
Summary: You build an agent that solves gridworld/CartPole via tabular Q-learning. It teaches the base of reinforcement learning (reward, explore/exploit).
Difficulty: Intermediate
Teaches (C): Q-table, reward, explore/exploit
Topics: reinforcement learning
Estimated LOC: 450
Libraries: none

602. Minimax + Alpha-Beta Game AI
Folder: 28-ai-ml/602-minimax-alphabeta
Description: A reusable adversarial search engine for board games.
Summary: You build a reusable adversarial search engine (minimax + alpha-beta) for board games. It teaches game trees and pruning as a library.
Difficulty: Advanced
Teaches (C): game tree, pruning, evaluation function
Topics: game trees, pruning
Estimated LOC: 500
Libraries: none

603. Monte Carlo Tree Search
Folder: 28-ai-ml/603-mcts
Description: Implement MCTS for games like Connect Four/Go-lite.
Summary: You implement MCTS for games like Connect Four/mini-Go. It teaches AlphaGo's core search method (UCT, rollout).
Difficulty: Advanced
Teaches (C): UCT, rollout, tree expansion
Topics: search, simulation
Estimated LOC: 600
Libraries: math

604. Genetic Programming Evolver
Folder: 28-ai-ml/604-genetic-programming
Description: Evolve programs/expressions to fit target functions.
Summary: You build a system that evolves programs/expressions to fit target functions. It teaches automatic program generation via tree mutation and crossover.
Difficulty: Advanced
Teaches (C): tree mutation, crossover, fitness
Topics: evolutionary computation
Estimated LOC: 700
Libraries: none

605. N-Gram Language Model
Folder: 28-ai-ml/605-ngram-model
Description: Train and sample from an n-gram model for text.
Summary: You build a tool that trains an n-gram model for text and samples from it. It teaches the classic (pre-LLM) method of language modeling.
Difficulty: Intermediate
Teaches (C): n-gram counting, probability, sampling
Topics: NLP, probability
Estimated LOC: 400
Libraries: none

606. Recommendation Engine (collaborative filtering)
Folder: 28-ai-ml/606-recommender
Description: Recommend items using matrix factorization.
Summary: You build a system that recommends items via matrix factorization. It teaches the latent-factor model of Netflix-style recommenders.
Difficulty: Advanced
Teaches (C): matrix factorization, latent factors, SGD
Topics: linear algebra, ML
Estimated LOC: 600
Libraries: math

607. Principal Component Analysis
Folder: 28-ai-ml/607-pca
Description: Reduce dimensionality via eigen-decomposition.
Summary: You build a PCA tool that reduces dimensionality via eigen-decomposition. It teaches compressing data with covariance and eigenvectors.
Difficulty: Advanced
Teaches (C): covariance, eigenvalue/eigenvector, dimensionality reduction
Topics: linear algebra
Estimated LOC: 500
Libraries: math

608. Simple Neural Net Inference Engine
Folder: 28-ai-ml/608-nn-inference
Description: Load trained weights and run inference (no training).
Summary: You build an engine that loads trained weights and only runs inference. It teaches model deployment and producing predictions via matrix multiplication.
Difficulty: Intermediate
Teaches (C): weight loading, matrix multiply, inference
Topics: inference, matrices
Estimated LOC: 400
Libraries: math

609. Handwritten Digit Recognizer (end-to-end)
Folder: 28-ai-ml/609-digit-recognizer
Description: Train and demo a digit classifier with a drawing UI.
Summary: You build an end-to-end ML app that recognizes digits from a drawing UI. It combines training, inference, and a GUI in one project.
Difficulty: Advanced
Teaches (C): ML+GUI integration, drawing input, inference
Topics: ML, GUI integration
Estimated LOC: 1000
Libraries: sdl2

610. Anomaly Detector (statistical)
Folder: 28-ai-ml/610-anomaly-detector
Description: Flag outliers in streams via z-score/EWMA.
Summary: You build a detector that flags outliers in streams via z-score/EWMA. It teaches statistical stream analysis — the base of monitoring systems.
Difficulty: Intermediate
Teaches (C): z-score, EWMA, stream statistics
Topics: statistics, streaming
Estimated LOC: 350
Libraries: math

611. Tiny Tensor Library (BLAS-lite)
Folder: 28-ai-ml/611-tensor-library
Description: N-dim arrays with broadcasting and matmul for ML.
Summary: You build a tiny tensor library with N-dim arrays, broadcasting, and matmul. It teaches the shape/stride mechanics under NumPy/PyTorch tensors.
Difficulty: Advanced
Teaches (C): shape/stride, broadcasting, matmul
Topics: tensors, numerical computing
Estimated LOC: 900
Libraries: math

---

## 29. Parsers & Serialization (612–627) · `29-parsers-serialization`

612. Binary Serialization Library
Folder: 29-parsers-serialization/612-binary-serialization
Description: Serialize/deserialize structs to a compact binary format.
Summary: You build a library that serializes/deserializes structs to a compact binary format. It teaches portable data storage via endianness and fixed-width fields.
Difficulty: Intermediate
Teaches (C): endianness, fixed-width fields, packed layout
Topics: serialization, endianness
Estimated LOC: 400
Libraries: none

613. Protocol Buffers Decoder (subset)
Folder: 29-parsers-serialization/613-protobuf-decoder
Description: Decode protobuf wire format into fields.
Summary: You build a decoder that decodes the protobuf wire format into fields. It teaches varint encoding and wire types — Google's data-exchange format.
Difficulty: Advanced
Teaches (C): varint, wire types, field tags
Topics: varints, wire formats
Estimated LOC: 500
Libraries: none

614. MessagePack Codec
Folder: 29-parsers-serialization/614-messagepack
Description: Encode/decode the MessagePack binary format.
Summary: You build a library that encodes/decodes the MessagePack binary format. It teaches a compact, type-prefixed serialization — "binary JSON".
Difficulty: Intermediate
Teaches (C): type prefixes, compact encoding, binary I/O
Topics: serialization
Estimated LOC: 500
Libraries: none

615. YAML Parser (subset)
Folder: 29-parsers-serialization/615-yaml-parser
Description: Parse a practical subset of YAML into a value tree.
Summary: You build a parser that parses a practical subset of YAML into a value tree. It teaches the challenges of indentation-based parsing.
Difficulty: Advanced
Teaches (C): indentation-based parsing, value tree
Topics: parsing, indentation
Estimated LOC: 800
Libraries: none

616. TOML Parser
Folder: 29-parsers-serialization/616-toml-parser
Description: Parse TOML config files into typed values.
Summary: You build a parser that parses TOML config files into typed values. It teaches a modern config format and table structures.
Difficulty: Advanced
Teaches (C): tables, typed values, parsing
Topics: parsing
Estimated LOC: 700
Libraries: none

617. XML Parser & DOM
Folder: 29-parsers-serialization/617-xml-dom
Description: Parse XML into a navigable DOM tree.
Summary: You build a library that parses XML into a navigable DOM tree. It teaches tag/attribute parsing and tree structures.
Difficulty: Advanced
Teaches (C): tag parsing, DOM tree, attributes
Topics: parsing, trees
Estimated LOC: 800
Libraries: none

618. CSV to JSON to YAML Converter
Folder: 29-parsers-serialization/618-format-converter
Description: Convert data between common formats.
Summary: You build a tool that converts data between CSV/JSON/YAML. It teaches parsing+serialization over a common data model.
Difficulty: Intermediate
Teaches (C): common data model, parsing+serialization
Topics: parsing, serialization
Estimated LOC: 600
Libraries: none

619. Bencode (BitTorrent) Codec
Folder: 29-parsers-serialization/619-bencode
Description: Encode/decode bencoded data.
Summary: You build a library that encodes/decodes BitTorrent's bencode format. It teaches length-prefixed strings and nested structures.
Difficulty: Intermediate
Teaches (C): length-prefixed strings, nested structures
Topics: serialization
Estimated LOC: 350
Libraries: none

620. ASN.1 / DER Decoder (subset)
Folder: 29-parsers-serialization/620-asn1-der
Description: Parse DER-encoded structures (e.g. certificates).
Summary: You build a decoder that parses DER-encoded structures (e.g. X.509 certificates). It teaches TLV (type-length-value) parsing — everywhere in cryptography.
Difficulty: Advanced
Teaches (C): TLV parsing, length encoding, nesting
Topics: TLV parsing
Estimated LOC: 700
Libraries: none

621. S-Expression Parser
Folder: 29-parsers-serialization/621-sexpr-parser
Description: Parse and print Lisp-style S-expressions.
Summary: You build a parser that parses and prints Lisp-style S-expressions. It teaches recursive parsing and tree structures cleanly.
Difficulty: Intermediate
Teaches (C): recursive parsing, tree, printing
Topics: parsing, trees
Estimated LOC: 400
Libraries: none

622. Schema Validator
Folder: 29-parsers-serialization/622-schema-validator
Description: Validate JSON documents against a schema.
Summary: You build a tool that validates JSON documents against a schema. It teaches recursive validation and constraint checking (JSON Schema logic).
Difficulty: Advanced
Teaches (C): recursive validation, constraint checking, error path
Topics: validation, recursion
Estimated LOC: 700
Libraries: none

623. Config Reload & Hot-Swap Library
Folder: 29-parsers-serialization/623-config-hotswap
Description: Watch and safely reload config without restart.
Summary: You build a library that watches and safely reloads config without a restart. It teaches inotify and atomic swapping.
Difficulty: Intermediate
Teaches (C): inotify, atomic swap, parsing
Topics: parsing, inotify
Estimated LOC: 400
Libraries: none

624. URL & Query String Parser
Folder: 29-parsers-serialization/624-url-parser
Description: Parse and build URLs with percent-encoding.
Summary: You build a library that parses and builds URLs with percent-encoding. It teaches component splitting and encoding/decoding.
Difficulty: Beginner
Teaches (C): percent encoding, component splitting, parsing
Topics: parsing, encoding
Estimated LOC: 300
Libraries: none

625. HTTP Header & MIME Parser
Folder: 29-parsers-serialization/625-header-mime-parser
Description: Robustly parse headers, tokens, and MIME types.
Summary: You build a module that robustly parses HTTP headers, tokens, and MIME types. It teaches real-world subtleties like header folding.
Difficulty: Intermediate
Teaches (C): header folding, token parsing, robustness
Topics: parsing, HTTP
Estimated LOC: 400
Libraries: none

626. Log Format Parser (Apache/nginx)
Folder: 29-parsers-serialization/626-log-parser
Description: Parse access logs into structured records for analysis.
Summary: You build a tool that parses Apache/nginx access logs into structured records. It teaches log analysis and field parsing.
Difficulty: Intermediate
Teaches (C): regex/field parsing, record structure
Topics: parsing, regex
Estimated LOC: 400
Libraries: none

627. Binary Grammar / Kaitai-style Reader
Folder: 29-parsers-serialization/627-binary-grammar
Description: Describe a binary format declaratively and parse it.
Summary: You build a tool (Kaitai-style) that describes a binary format declaratively and parses it. It teaches data-driven binary parsing and a mini DSL.
Difficulty: Advanced
Teaches (C): declarative schema, binary parsing, DSL
Topics: DSLs, binary parsing
Estimated LOC: 800
Libraries: none

---

## 30. Developer Tools (628–648) · `30-devtools`

628. Argument Parser Library (getopt++)
Folder: 30-devtools/628-arg-parser-lib
Description: Declarative CLI parsing with subcommands and help text.
Summary: You build a library for declarative CLI parsing with subcommands and auto help text. It teaches the argument design of real tools (git-style).
Difficulty: Intermediate
Teaches (C): option model, subcommands, auto help
Topics: CLI design, parsing
Estimated LOC: 500
Libraries: none

629. Logging Framework (levels/sinks)
Folder: 30-devtools/629-logging-framework
Description: Structured logging with levels, sinks, and formatting.
Summary: You build a structured logging framework with levels, sinks, and formatting. It teaches an essential piece of production-software infrastructure.
Difficulty: Intermediate
Teaches (C): log levels, output sinks, formatting
Topics: logging, design
Estimated LOC: 450
Libraries: none

630. Config Management Library
Folder: 30-devtools/630-config-management
Description: Layer defaults, files, env, and flags into one config.
Summary: You build a library that layers defaults/file/env/flags into one config. It teaches config-precedence resolution.
Difficulty: Intermediate
Teaches (C): precedence layers, merging, parsing
Topics: config, precedence
Estimated LOC: 450
Libraries: none

631. Hot-Reload File Watcher for Dev
Folder: 30-devtools/631-hot-reload-watcher
Description: Rebuild/restart a target when source files change.
Summary: You build a watcher that rebuilds/restarts a target when source files change. It teaches developer productivity via inotify and subprocess management.
Difficulty: Intermediate
Teaches (C): inotify, subprocess management, debounce
Topics: inotify, subprocess
Estimated LOC: 400
Libraries: none

632. Code Line Counter (cloc-lite)
Folder: 30-devtools/632-cloc-lite
Description: Count code/comment/blank lines by language.
Summary: You build a mini `cloc` that counts code/comment/blank lines by language. It teaches a comment-state machine and language detection.
Difficulty: Intermediate
Teaches (C): comment state machine, language detection, counting
Topics: parsing, stats
Estimated LOC: 450
Libraries: none

633. Dependency Graph Visualizer
Folder: 30-devtools/633-dependency-graph
Description: Parse #include graphs and export to DOT/Graphviz.
Summary: You build a tool that parses the `#include` graph and exports to DOT/Graphviz. It teaches dependency analysis and graph export.
Difficulty: Intermediate
Teaches (C): include parsing, graph, DOT output
Topics: parsing, graphs
Estimated LOC: 450
Libraries: none

634. Code Formatter (C)
Folder: 30-devtools/634-code-formatter
Description: Reformat C source with configurable style rules.
Summary: You build a formatter that reformats C source with configurable style rules. It teaches lexing and indentation rules (clang-format logic).
Difficulty: Advanced
Teaches (C): lexing, indentation rules, rewriting
Topics: lexing, formatting
Estimated LOC: 800
Libraries: none

635. Static Analyzer / Linter (C)
Folder: 30-devtools/635-static-linter
Description: Flag common bugs (unused vars, null derefs) via AST checks.
Summary: You build a linter that flags common bugs (unused vars, null derefs) via AST checks. It teaches static analysis and data-flow intuition.
Difficulty: Advanced
Teaches (C): AST walking, data-flow intuition, rule checking
Topics: static analysis, parsing
Estimated LOC: 1000
Libraries: none

636. Documentation Generator (Doxygen-lite)
Folder: 30-devtools/636-doc-generator
Description: Extract doc comments and emit HTML/Markdown docs.
Summary: You build a mini Doxygen that extracts doc comments and emits HTML/Markdown docs. It teaches comment parsing and signature extraction.
Difficulty: Intermediate
Teaches (C): comment parsing, signature extraction, output
Topics: parsing, output
Estimated LOC: 600
Libraries: none

637. Benchmark Harness Library
Folder: 30-devtools/637-benchmark-harness
Description: Time functions, warm up, and report stable statistics.
Summary: You build a benchmark framework that times functions with warm-up and reports stable statistics. It teaches the subtleties of correct performance measurement.
Difficulty: Intermediate
Teaches (C): high-resolution time, warm-up, statistics
Topics: benchmarking, statistics
Estimated LOC: 400
Libraries: none

638. Crash Reporter (backtrace on signal)
Folder: 30-devtools/638-crash-reporter
Description: Catch faults and print a symbolized stack trace.
Summary: You build a module that catches faults and prints a symbolized stack trace. It teaches catching SIGSEGV and backtrace — production debugging.
Difficulty: Advanced
Teaches (C): catching SIGSEGV, backtrace, symbolization
Topics: signals, backtrace
Estimated LOC: 400
Libraries: none

639. Assertion & Contract Library
Folder: 30-devtools/639-assertion-library
Description: Rich assertions with messages and optional contracts.
Summary: You build a library offering rich assertions with messages and optional contracts (pre/post conditions). It teaches macro tricks and defensive programming.
Difficulty: Intermediate
Teaches (C): macro tricks, __FILE__/__LINE__, pre/post conditions
Topics: macros, debugging
Estimated LOC: 300
Libraries: none

640. Diff & Patch Toolkit
Folder: 30-devtools/640-diff-patch
Description: Generate unified diffs and apply patches to files.
Summary: You build a toolkit that generates unified diffs and applies patches. It teaches LCS and the patch format — the logic of the `patch` command.
Difficulty: Advanced
Teaches (C): LCS, unified diff format, patch application
Topics: diffing, patching
Estimated LOC: 700
Libraries: none

641. Code Search Tool (ack/ag-lite)
Folder: 30-devtools/641-code-search
Description: Fast recursive code search respecting ignore files.
Summary: You build a tool for fast recursive code search that respects ignore files. It combines directory traversal and regex.
Difficulty: Intermediate
Teaches (C): directory traversal, regex, ignore rules
Topics: search, traversal
Estimated LOC: 500
Libraries: none

642. Environment Diff Tool
Folder: 30-devtools/642-env-diff
Description: Compare environment/config between two setups.
Summary: You build a tool that shows the environment/config difference between two setups. It teaches key-value parsing and diffing.
Difficulty: Beginner
Teaches (C): key-value parsing, diff, output
Topics: parsing, diffing
Estimated LOC: 300
Libraries: none

643. TODO/FIXME Scanner
Folder: 30-devtools/643-todo-scanner
Description: Aggregate code annotations into a report/board.
Summary: You build a tool that aggregates TODO/FIXME notes in code into a report/board. It teaches file scanning and pattern finding.
Difficulty: Beginner
Teaches (C): file scanning, pattern finding, reporting
Topics: scanning, reporting
Estimated LOC: 300
Libraries: none

644. Macro Expansion Explorer
Folder: 30-devtools/644-macro-explorer
Description: Show how C macros expand step by step.
Summary: You build a tool that shows how C macros expand step by step. It teaches the complexity of macro expansion and token rescanning.
Difficulty: Advanced
Teaches (C): macro expansion steps, token rescanning
Topics: preprocessing
Estimated LOC: 600
Libraries: none

645. Command Palette / Fuzzy Finder (fzf-lite)
Folder: 30-devtools/645-fuzzy-finder
Description: Interactive fuzzy filter over piped input.
Summary: You build a mini `fzf` that fuzzy-filters piped input interactively. It teaches fuzzy-match scoring and ncurses.
Difficulty: Intermediate
Teaches (C): fuzzy match score, ncurses, stdin
Topics: fuzzy matching, ncurses
Estimated LOC: 500
Libraries: ncurses

646. Code Metrics / Complexity Analyzer
Folder: 30-devtools/646-complexity-analyzer
Description: Compute cyclomatic complexity per function.
Summary: You build a tool that computes cyclomatic complexity per function. It teaches branch counting and code-quality metrics.
Difficulty: Advanced
Teaches (C): branch counting, function parsing, metrics
Topics: static analysis
Estimated LOC: 600
Libraries: none

647. Snippet Manager CLI
Folder: 30-devtools/647-snippet-manager
Description: Store, tag, search, and paste code snippets.
Summary: You build a CLI that stores, tags, searches, and copies code snippets to the clipboard. It teaches tagged storage and search.
Difficulty: Intermediate
Teaches (C): tagged storage, search, clipboard integration
Topics: storage, search
Estimated LOC: 450
Libraries: none

648. Interactive Regex Tester
Folder: 30-devtools/648-regex-tester
Description: Live-test regexes against sample text with highlighting.
Summary: You build a tool that live-tests regexes against sample text and highlights matches. It teaches regex compilation and live matching.
Difficulty: Intermediate
Teaches (C): regex compilation, live matching, highlighting
Topics: regex, ncurses
Estimated LOC: 450
Libraries: ncurses

---

## 31. Git-like Tools, Build Systems, Testing, Profilers & Debuggers (649–660) · `31-git-build-test-debug`

649. Content-Addressable Store (Git objects)
Folder: 31-git-build-test-debug/649-content-store
Description: Store blobs/trees/commits by SHA-1 like Git's object DB.
Summary: You build an object store that keeps blob/tree/commit objects by SHA-1 like Git. It teaches content-addressable storage and zlib compression — the heart of git.
Difficulty: Advanced
Teaches (C): SHA-1 addressing, zlib compression, object model
Topics: hashing, storage
Estimated LOC: 600
Libraries: openssl, zlib

650. Mini Version Control System (git-lite)
Folder: 31-git-build-test-debug/650-mini-vcs
Description: init, add, commit, log, checkout with a real object model.
Summary: You build a mini Git with a real object model doing init/add/commit/log/checkout. It teaches end to end how a version-control system really works.
Difficulty: Advanced
Teaches (C): index, commit graph, tree snapshot
Topics: VCS internals, hashing
Estimated LOC: 1500
Libraries: openssl, zlib

651. Diff-Based Branching & Merge
Folder: 31-git-build-test-debug/651-branch-merge
Description: Add branches and three-way merges to your mini-VCS.
Summary: You add branches and three-way merges to your mini-VCS. It teaches Git's branching/merging logic (ref management).
Difficulty: Advanced
Teaches (C): three-way merge, ref management, diff
Topics: merging, diff algorithms
Estimated LOC: 900
Libraries: none

652. Build System (make-lite)
Folder: 31-git-build-test-debug/652-make-lite
Description: Parse rules, resolve dependencies, and rebuild stale targets.
Summary: You build a mini `make` that parses rules, resolves dependencies, and rebuilds stale targets. It teaches DAGs and timestamp checking.
Difficulty: Advanced
Teaches (C): DAG, timestamp checking, fork/exec
Topics: DAGs, timestamps, exec
Estimated LOC: 800
Libraries: none

653. Incremental Build Cache
Folder: 31-git-build-test-debug/653-build-cache
Description: Cache build outputs keyed by input hashes (ccache-style).
Summary: You build a system (ccache-style) that caches build outputs keyed by input hashes. It teaches speeding up builds via hash-based caching.
Difficulty: Advanced
Teaches (C): input hash key, cache store, hit/miss
Topics: hashing, caching
Estimated LOC: 600
Libraries: openssl

654. Task Runner / Job Orchestrator
Folder: 31-git-build-test-debug/654-task-runner
Description: Run task graphs in parallel respecting dependencies.
Summary: You build a runner that executes task graphs in parallel while respecting dependencies. It teaches DAG scheduling and parallel execution.
Difficulty: Advanced
Teaches (C): DAG scheduling, parallel execution, dependencies
Topics: DAGs, concurrency
Estimated LOC: 700
Libraries: pthread

655. Unit Test Framework
Folder: 31-git-build-test-debug/655-unit-test-framework
Description: Test registration, assertions, fixtures, and TAP output.
Summary: You build a test framework with test registration, assertions, fixtures, and TAP output. It teaches building test infrastructure with macros.
Difficulty: Intermediate
Teaches (C): macro registration, assert, TAP format
Topics: macros, reporting
Estimated LOC: 500
Libraries: none

656. Mocking / Stubbing Library
Folder: 31-git-build-test-debug/656-mocking-library
Description: Replace functions with mocks and verify call expectations.
Summary: You build a library that replaces functions with mocks and verifies call expectations. It teaches the linker `--wrap` trick and test isolation.
Difficulty: Advanced
Teaches (C): linker --wrap, function pointers, call verification
Topics: linker tricks, function pointers
Estimated LOC: 500
Libraries: none

657. Code Coverage Tool
Folder: 31-git-build-test-debug/657-coverage-tool
Description: Instrument source to report line/branch coverage.
Summary: You build a tool that instruments source to report line/branch coverage. It teaches measuring how much of the code the tests run.
Difficulty: Advanced
Teaches (C): instrumentation, line/branch counting, reporting
Topics: instrumentation, parsing
Estimated LOC: 800
Libraries: none

658. Sampling Profiler
Folder: 31-git-build-test-debug/658-sampling-profiler
Description: Periodically sample the stack to build a flame profile.
Summary: You build a profiler that periodically samples the stack to build a flame profile. It teaches timer signals and backtrace sampling.
Difficulty: Advanced
Teaches (C): timer signal, backtrace sampling, aggregation
Topics: signals, backtrace, stats
Estimated LOC: 600
Libraries: none

659. Instrumenting Profiler
Folder: 31-git-build-test-debug/659-instrumenting-profiler
Description: Time function entry/exit via -finstrument-functions hooks.
Summary: You build a profiler that times function entry/exit via `-finstrument-functions` hooks. It teaches compiler instrumentation and timing.
Difficulty: Advanced
Teaches (C): __cyg_profile hooks, entry/exit timing
Topics: instrumentation, timing
Estimated LOC: 500
Libraries: none

660. Full-Featured Debugger (ptrace + DWARF)
Folder: 31-git-build-test-debug/660-full-debugger-dwarf
Description: Source-level breakpoints and variable inspection using DWARF.
Summary: You build a debugger with source-level breakpoints and variable inspection using DWARF debug info. A capstone combining ptrace and DWARF — your own gdb.
Difficulty: Advanced
Teaches (C): ptrace, DWARF parsing, source-level debugging
Topics: ptrace, DWARF, debugging
Estimated LOC: 2000
Libraries: libdwarf

---

## How to Use (Learning Path)

- **Start:** categories 01–09 (fundamentals → games/data structures). Begin with `libs: none` projects — no setup hassle.
- **Intermediate:** 10–19 (OS, Linux, networking, concurrency, memory, graphics, crypto) — real systems skills.
- **Advanced:** 20–31 (reverse engineering, databases, compilers, emulators, ML, dev tools) — the peak of your portfolio.

Treat each project as its own repo in **its own folder**: `README.md` (filtering tags at the top), `Makefile`, `src/`, `tests/`.

**Connected learning chains** (one project feeds the next):
- 049 BigInt → 417 RSA
- 097 CSV Parser → 550 CSV-SQL
- 411 MD5 / 412 SHA-256 → 649 Content Store → 650 mini-git → 651 branch/merge
- 495 LZ77 + 494 Huffman → 497 DEFLATE → 500 gzip → 501 ZIP
- 526 Lexer → 527 Parser → 534 Bytecode VM → 539 C Compiler

**Total: 31 categories, 660 unique projects — each with its contents and purpose written out, all to teach C.**
