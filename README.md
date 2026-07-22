## 1. C Fundamentals (001–026)

013. Bitwise Operations Playground
Description: Interactive tool that demonstrates AND/OR/XOR/shift on user integers.
Difficulty: Beginner
Topics: bitwise, binary display, masks
Estimated LOC: 160
Libraries: stdio.h

014. GPA & CGPA Tracker
Description: Track semester courses and compute weighted GPA over time.
Difficulty: Beginner
Topics: structs, arrays, file save
Estimated LOC: 220
Libraries: stdio.h

015. Simple Menu-Driven Bank Ledger
Description: In-memory deposit/withdraw/balance with a text menu.
Difficulty: Beginner
Topics: state, functions, validation
Estimated LOC: 200
Libraries: stdio.h

016. Matrix Basics Library
Description: Add, multiply, transpose, and print 2D matrices of any size.
Difficulty: Beginner
Topics: 2D arrays, dynamic allocation, loops
Estimated LOC: 250
Libraries: stdlib.h

017. String Utility Library
Description: Reimplement strlen, strcpy, strcat, strcmp, strtok from scratch.
Difficulty: Beginner
Topics: pointers, arrays, null-termination
Estimated LOC: 240
Libraries: none

018. Command-Line Stopwatch & Timer
Description: Start/stop stopwatch and countdown timer with lap support.
Difficulty: Beginner
Topics: time.h, signals, loops
Estimated LOC: 160
Libraries: time.h, signal.h

019. Simple ASCII Table Explorer
Description: Print ASCII codes and let users look up characters and ranges.
Difficulty: Beginner
Topics: char arithmetic, loops, formatting
Estimated LOC: 90
Libraries: ctype.h

020. Quadratic & Polynomial Root Finder
Description: Solve quadratics and evaluate polynomials at given points.
Difficulty: Beginner
Topics: math, floating point, discriminant
Estimated LOC: 140
Libraries: math.h

021. Dice & Card Randomizer
Description: Simulate dice rolls and shuffle/deal a standard card deck.
Difficulty: Beginner
Topics: random, arrays, Fisher-Yates
Estimated LOC: 160
Libraries: stdlib.h, time.h

022. Simple Voting Tally System
Description: Register candidates, cast votes, and print ranked results.
Difficulty: Beginner
Topics: structs, arrays, sorting
Estimated LOC: 200
Libraries: stdio.h

023. Palindrome & Anagram Checker
Description: Detect palindromes and test if two strings are anagrams.
Difficulty: Beginner
Topics: strings, counting, normalization
Estimated LOC: 130
Libraries: ctype.h

024. Currency Formatter
Description: Format raw amounts into localized currency strings with grouping.
Difficulty: Beginner
Topics: strings, integer math, formatting
Estimated LOC: 140
Libraries: stdio.h

025. Simple State Machine Demo
Description: Model a turnstile/traffic light as an explicit finite state machine.
Difficulty: Beginner
Topics: enums, switch, state transitions
Estimated LOC: 150
Libraries: stdio.h

026. Command Argument Parser Mini-lib
Description: Parse flags, options, and positional args like a tiny getopt.
Difficulty: Beginner
Topics: argv, strings, structs
Estimated LOC: 220
Libraries: string.h

---

## 2. Console Applications (027–048)

027. To-Do List Manager
Description: Add, complete, delete, and persist tasks to a file.
Difficulty: Beginner
Topics: file I/O, structs, CRUD
Estimated LOC: 300
Libraries: stdio.h

028. Contact Book / Address Manager
Description: Store contacts with search, edit, and CSV export.
Difficulty: Beginner
Topics: structs, file I/O, search
Estimated LOC: 350
Libraries: stdio.h

029. Expense Tracker
Description: Log expenses by category and generate monthly summaries.
Difficulty: Intermediate
Topics: structs, file persistence, aggregation
Estimated LOC: 400
Libraries: stdio.h, time.h

030. Inventory Management System
Description: Track products, stock levels, and low-stock alerts.
Difficulty: Intermediate
Topics: CRUD, binary files, reporting
Estimated LOC: 450
Libraries: stdio.h

031. Library Management System
Description: Manage books, members, and borrow/return with due dates.
Difficulty: Intermediate
Topics: structs, file I/O, date logic
Estimated LOC: 500
Libraries: time.h

032. Quiz Application with Question Bank
Description: Load questions from a file, run timed quizzes, and score results.
Difficulty: Intermediate
Topics: file parsing, timing, scoring
Estimated LOC: 400
Libraries: time.h

033. Personal Diary with Encryption
Description: Journal entries encrypted with a passphrase at rest.
Difficulty: Intermediate
Topics: file I/O, XOR/AES, key handling
Estimated LOC: 350
Libraries: stdlib.h

034. Command-Line Calendar
Description: Print monthly/yearly calendars and highlight events.
Difficulty: Intermediate
Topics: date math, formatting, Zeller's congruence
Estimated LOC: 300
Libraries: time.h

035. Habit Tracker with Streaks
Description: Track daily habits and compute current/longest streaks.
Difficulty: Intermediate
Topics: date logic, persistence, stats
Estimated LOC: 350
Libraries: time.h

036. Restaurant Billing System
Description: Build orders from a menu and print an itemized bill with tax.
Difficulty: Beginner
Topics: structs, arithmetic, formatting
Estimated LOC: 300
Libraries: stdio.h

037. Flashcard Spaced-Repetition Tool
Description: Review flashcards using an SM-2 spaced-repetition schedule.
Difficulty: Intermediate
Topics: algorithms, persistence, date math
Estimated LOC: 400
Libraries: time.h

038. Command-Line Password Manager
Description: Store service credentials encrypted behind a master password.
Difficulty: Advanced
Topics: crypto, file I/O, KDF
Estimated LOC: 500
Libraries: OpenSSL (libcrypto)

039. Movie / Media Catalog
Description: Catalog media with ratings, tags, and multi-field search.
Difficulty: Intermediate
Topics: structs, search, sorting
Estimated LOC: 400
Libraries: stdio.h

040. Command-Line Pomodoro Timer
Description: Run focus/break cycles with notifications and session logs.
Difficulty: Beginner
Topics: timers, signals, logging
Estimated LOC: 250
Libraries: time.h, signal.h

041. Employee Payroll System
Description: Compute salaries, deductions, and generate payslips.
Difficulty: Intermediate
Topics: structs, arithmetic, reporting
Estimated LOC: 450
Libraries: stdio.h

042. Ticket Booking System
Description: Reserve seats on a grid, prevent double-booking, and persist.
Difficulty: Intermediate
Topics: 2D arrays, state, file I/O
Estimated LOC: 450
Libraries: stdio.h

043. Command-Line Unit Test Runner Demo
Description: Register test functions and run them with pass/fail reporting.
Difficulty: Intermediate
Topics: function pointers, macros, reporting
Estimated LOC: 300
Libraries: stdio.h

044. Recipe Manager with Scaling
Description: Store recipes and scale ingredient quantities by servings.
Difficulty: Beginner
Topics: structs, arithmetic, file I/O
Estimated LOC: 350
Libraries: stdio.h

045. Command-Line Budget Envelope System
Description: Allocate income into envelopes and track spending against them.
Difficulty: Intermediate
Topics: structs, persistence, aggregation
Estimated LOC: 400
Libraries: stdio.h

046. Notes App with Full-Text Search
Description: Store notes and search them with a simple inverted index.
Difficulty: Advanced
Topics: indexing, hashing, file I/O
Estimated LOC: 550
Libraries: stdlib.h

047. Command-Line Chess Move Validator
Description: Validate chess moves and detect check on a board state.
Difficulty: Advanced
Topics: 2D arrays, rules engine, logic
Estimated LOC: 600
Libraries: stdio.h

048. Multi-User Auth Console
Description: Register/login users with salted hashed passwords in a file.
Difficulty: Intermediate
Topics: hashing, file I/O, salts
Estimated LOC: 400
Libraries: OpenSSL (libcrypto)

---

## 3. Mathematics & Numerical Methods (049–075)

049. Arbitrary-Precision Integer (BigInt)
Description: Add, subtract, multiply, and compare integers of unbounded size.
Difficulty: Advanced
Topics: arrays, carry propagation, algorithms
Estimated LOC: 600
Libraries: stdlib.h

050. Rational Number Library
Description: Exact fraction arithmetic with automatic reduction via GCD.
Difficulty: Intermediate
Topics: GCD, structs, normalization
Estimated LOC: 300
Libraries: stdlib.h

051. Complex Number Library
Description: Complex arithmetic including polar form and roots.
Difficulty: Intermediate
Topics: structs, trig, math
Estimated LOC: 300
Libraries: math.h, complex.h

052. Matrix Algebra Library
Description: Determinant, inverse, LU decomposition, and solving linear systems.
Difficulty: Advanced
Topics: linear algebra, numerical stability
Estimated LOC: 700
Libraries: math.h

053. Numerical Integration Toolkit
Description: Integrate functions via trapezoid, Simpson, and Gaussian quadrature.
Difficulty: Intermediate
Topics: numerical methods, function pointers
Estimated LOC: 350
Libraries: math.h

054. Root-Finding Solver
Description: Find roots via bisection, Newton-Raphson, and secant methods.
Difficulty: Intermediate
Topics: numerical methods, convergence
Estimated LOC: 350
Libraries: math.h

055. ODE Solver (Runge-Kutta)
Description: Solve ordinary differential equations with Euler and RK4.
Difficulty: Advanced
Topics: numerical methods, step control
Estimated LOC: 400
Libraries: math.h

056. Fast Fourier Transform
Description: Implement radix-2 Cooley-Tukey FFT and inverse FFT.
Difficulty: Advanced
Topics: DSP, recursion, complex numbers
Estimated LOC: 400
Libraries: complex.h, math.h

057. Statistics Toolkit
Description: Mean, variance, median, percentiles, correlation, and regression.
Difficulty: Intermediate
Topics: statistics, sorting, arrays
Estimated LOC: 450
Libraries: math.h

058. Linear Regression Fitter
Description: Fit lines and polynomials by least squares to a dataset.
Difficulty: Intermediate
Topics: linear algebra, statistics
Estimated LOC: 350
Libraries: math.h

059. Prime Factorization & Pollard Rho
Description: Factor large integers using trial division and Pollard's rho.
Difficulty: Advanced
Topics: number theory, algorithms
Estimated LOC: 350
Libraries: stdlib.h

060. Modular Arithmetic Library
Description: Modular exponentiation, inverse, and Chinese Remainder Theorem.
Difficulty: Intermediate
Topics: number theory, algorithms
Estimated LOC: 300
Libraries: stdlib.h

061. Continued Fraction Calculator
Description: Convert reals to continued fractions and back to rationals.
Difficulty: Intermediate
Topics: number theory, floating point
Estimated LOC: 250
Libraries: math.h

062. Monte Carlo Pi & Integrator
Description: Estimate pi and integrals via Monte Carlo sampling.
Difficulty: Beginner
Topics: random, statistics, convergence
Estimated LOC: 200
Libraries: stdlib.h, math.h

063. Expression Evaluator (Shunting Yard)
Description: Parse and evaluate infix math expressions with precedence.
Difficulty: Intermediate
Topics: stacks, parsing, algorithms
Estimated LOC: 400
Libraries: stdlib.h

064. Symbolic Differentiation Engine
Description: Differentiate symbolic expressions represented as trees.
Difficulty: Advanced
Topics: trees, recursion, parsing
Estimated LOC: 600
Libraries: stdlib.h

065. Fixed-Point Arithmetic Library
Description: Q-format fixed-point math for platforms without an FPU.
Difficulty: Intermediate
Topics: bit manipulation, scaling
Estimated LOC: 350
Libraries: stdint.h

066. Vector & Quaternion Math Library
Description: 3D vector, matrix, and quaternion ops for graphics/games.
Difficulty: Intermediate
Topics: linear algebra, 3D math
Estimated LOC: 500
Libraries: math.h

067. Pseudo-Random Number Generators
Description: Implement LCG, xorshift, and Mersenne Twister with quality tests.
Difficulty: Intermediate
Topics: PRNG, bit ops, statistics
Estimated LOC: 400
Libraries: stdint.h

068. Numerical Base-N Calculator
Description: Perform arithmetic in arbitrary bases with fractional support.
Difficulty: Intermediate
Topics: base conversion, strings
Estimated LOC: 350
Libraries: stdlib.h

069. Combinatorics Toolkit
Description: Compute permutations, combinations, and generate them lazily.
Difficulty: Intermediate
Topics: recursion, big numbers, generators
Estimated LOC: 350
Libraries: stdlib.h

070. Geometric Primitives Library
Description: Point/line/polygon intersection, convex hull, and area.
Difficulty: Advanced
Topics: computational geometry
Estimated LOC: 550
Libraries: math.h

071. Calculator with Variables & Functions
Description: A REPL calculator supporting assignment and user functions.
Difficulty: Advanced
Topics: parsing, symbol tables, eval
Estimated LOC: 700
Libraries: stdlib.h

072. Interval Arithmetic Library
Description: Track rounding error bounds by computing on intervals.
Difficulty: Advanced
Topics: floating point, numerical analysis
Estimated LOC: 400
Libraries: math.h, fenv.h

073. Bignum Rational + Decimal Library
Description: Arbitrary-precision decimal arithmetic with configurable precision.
Difficulty: Advanced
Topics: big integers, scaling, rounding
Estimated LOC: 800
Libraries: stdlib.h

074. Newton Fractal / Mandelbrot Data Generator
Description: Compute escape-time fractal data and export to PPM.
Difficulty: Intermediate
Topics: complex math, iteration, image output
Estimated LOC: 300
Libraries: complex.h

075. Numerical Linear System Benchmark
Description: Compare Gaussian elimination, Jacobi, and Gauss-Seidel solvers.
Difficulty: Advanced
Topics: numerical methods, benchmarking
Estimated LOC: 500
Libraries: math.h, time.h

---

## 4. Utilities (076–096)

076. `wc` Clone (word/line/byte count)
Description: Count lines, words, characters, and bytes like coreutils wc.
Difficulty: Beginner
Topics: file I/O, streams, flags
Estimated LOC: 200
Libraries: stdio.h

077. `cat` / `tac` Clone
Description: Concatenate files to stdout, forward and reversed, with line numbers.
Difficulty: Beginner
Topics: file I/O, buffering
Estimated LOC: 200
Libraries: stdio.h

078. `head` / `tail` with Follow Mode
Description: Print first/last N lines and follow a growing file like `tail -f`.
Difficulty: Intermediate
Topics: file I/O, inotify/polling
Estimated LOC: 300
Libraries: sys/inotify.h

079. `grep` Clone with Regex
Description: Search files for lines matching a pattern with context flags.
Difficulty: Intermediate
Topics: regex, file I/O, flags
Estimated LOC: 400
Libraries: regex.h

080. `find` Clone
Description: Recursively find files by name, type, size, and modification time.
Difficulty: Intermediate
Topics: directory traversal, filtering
Estimated LOC: 400
Libraries: dirent.h, sys/stat.h

081. `ls` Clone with Colors
Description: List directory contents with long format, sorting, and colors.
Difficulty: Intermediate
Topics: stat, permissions, formatting
Estimated LOC: 450
Libraries: dirent.h, sys/stat.h

082. `du` Disk Usage Analyzer
Description: Compute directory sizes recursively with a human-readable tree.
Difficulty: Intermediate
Topics: recursion, stat, formatting
Estimated LOC: 350
Libraries: dirent.h

083. `diff` Tool (LCS-based)
Description: Show line differences between two files using longest common subsequence.
Difficulty: Advanced
Topics: dynamic programming, file I/O
Estimated LOC: 450
Libraries: stdlib.h

084. `sort` Clone
Description: Sort lines with numeric, reverse, unique, and key options.
Difficulty: Intermediate
Topics: sorting, comparators, flags
Estimated LOC: 350
Libraries: stdlib.h

085. `uniq` Clone
Description: Filter or count adjacent duplicate lines with flag options.
Difficulty: Beginner
Topics: streams, string compare
Estimated LOC: 200
Libraries: stdio.h

086. `xxd` / Hex Dump Utility
Description: Dump files as hex + ASCII and reverse a hex dump to binary.
Difficulty: Intermediate
Topics: binary I/O, formatting
Estimated LOC: 300
Libraries: stdio.h

087. File Splitter & Joiner (`split`)
Description: Split large files into chunks and reassemble them exactly.
Difficulty: Beginner
Topics: binary I/O, buffering
Estimated LOC: 250
Libraries: stdio.h

088. Duplicate File Finder
Description: Find duplicate files by size then content hash.
Difficulty: Intermediate
Topics: hashing, hash tables, traversal
Estimated LOC: 400
Libraries: OpenSSL (libcrypto)

089. Batch File Renamer
Description: Rename files in bulk with patterns, counters, and dry-run mode.
Difficulty: Intermediate
Topics: strings, directory ops
Estimated LOC: 350
Libraries: dirent.h

090. `tree` Directory Visualizer
Description: Print a directory hierarchy as an ASCII/Unicode tree.
Difficulty: Intermediate
Topics: recursion, formatting
Estimated LOC: 300
Libraries: dirent.h

091. `env` / Environment Inspector
Description: Print, filter, and run commands with modified environment variables.
Difficulty: Beginner
Topics: environ, exec, strings
Estimated LOC: 200
Libraries: unistd.h

092. Clipboard Manager (X11/Wayland-agnostic file-backed)
Description: Store and recall multiple clipboard entries from the CLI.
Difficulty: Intermediate
Topics: file I/O, IPC, history
Estimated LOC: 350
Libraries: stdio.h

093. `watch` Command Clone
Description: Re-run a command on an interval and display refreshing output.
Difficulty: Intermediate
Topics: fork/exec, terminal control, timing
Estimated LOC: 300
Libraries: unistd.h

094. QR Code / Barcode Data Encoder
Description: Encode text into a QR matrix and render it as terminal blocks.
Difficulty: Advanced
Topics: Reed-Solomon, bit packing
Estimated LOC: 800
Libraries: none

095. `cron`-style Task Scheduler
Description: Parse crontab syntax and run scheduled commands.
Difficulty: Advanced
Topics: parsing, time, fork/exec
Estimated LOC: 500
Libraries: unistd.h, time.h

096. Progress Bar & Spinner Library
Description: Reusable animated progress bars and spinners for CLI tools.
Difficulty: Beginner
Topics: terminal control, timing
Estimated LOC: 250
Libraries: unistd.h

---

## 5. File Processing (097–116)

097. CSV Parser & Query Tool
Description: Parse RFC-4180 CSV and run simple column filters and projections.
Difficulty: Intermediate
Topics: parsing, quoting, state machine
Estimated LOC: 450
Libraries: stdio.h

098. INI Configuration Parser
Description: Read and write INI files with sections, comments, and types.
Difficulty: Beginner
Topics: parsing, hash maps
Estimated LOC: 300
Libraries: stdio.h

099. JSON Parser & Serializer
Description: Parse JSON into a value tree and serialize it back.
Difficulty: Advanced
Topics: recursive descent, memory, unicode
Estimated LOC: 700
Libraries: stdlib.h

100. Binary File Format Reader (BMP)
Description: Parse and manipulate BMP headers and pixel data.
Difficulty: Intermediate
Topics: binary layout, structs, endianness
Estimated LOC: 350
Libraries: stdint.h

101. WAV Audio File Reader/Writer
Description: Read, generate, and modify PCM WAV files.
Difficulty: Intermediate
Topics: RIFF format, binary I/O
Estimated LOC: 400
Libraries: stdint.h

102. Tarball Creator & Extractor
Description: Build and unpack POSIX tar archives without external libs.
Difficulty: Advanced
Topics: archive format, checksums
Estimated LOC: 600
Libraries: sys/stat.h

103. File Metadata Extractor
Description: Report size, timestamps, permissions, and MIME guess for files.
Difficulty: Beginner
Topics: stat, magic bytes
Estimated LOC: 300
Libraries: sys/stat.h

104. Log File Rotator
Description: Rotate, compress, and prune log files by size or age.
Difficulty: Intermediate
Topics: file ops, compression, scheduling
Estimated LOC: 400
Libraries: zlib

105. EXIF Metadata Reader
Description: Extract camera metadata from JPEG EXIF segments.
Difficulty: Advanced
Topics: TIFF/EXIF layout, endianness
Estimated LOC: 550
Libraries: stdint.h

106. Memory-Mapped File Text Search
Description: Search huge files fast using mmap instead of read loops.
Difficulty: Intermediate
Topics: mmap, string search
Estimated LOC: 300
Libraries: sys/mman.h

107. File Integrity Monitor
Description: Track file hashes and alert on unexpected changes.
Difficulty: Intermediate
Topics: hashing, persistence, traversal
Estimated LOC: 400
Libraries: OpenSSL (libcrypto)

108. Fixed-Width Record Parser
Description: Parse and reformat fixed-width column data files.
Difficulty: Beginner
Topics: parsing, formatting
Estimated LOC: 250
Libraries: stdio.h

109. PDF Text Extractor (basic)
Description: Extract uncompressed text streams from simple PDF files.
Difficulty: Advanced
Topics: PDF structure, tokenizing
Estimated LOC: 700
Libraries: zlib

110. ELF Header Parser
Description: Parse ELF headers, sections, and symbol tables.
Difficulty: Advanced
Topics: ELF format, binary layout
Estimated LOC: 500
Libraries: elf.h

111. Sqlite-Style Page File Reader
Description: Read the on-disk pages of a SQLite database file.
Difficulty: Advanced
Topics: file format, B-trees, endianness
Estimated LOC: 600
Libraries: stdint.h

112. Config File Diff & Merge
Description: Compare two config files and produce a merged result.
Difficulty: Intermediate
Topics: parsing, diffing
Estimated LOC: 400
Libraries: stdio.h

113. Recursive File Encryptor
Description: Encrypt/decrypt entire directory trees with a password.
Difficulty: Advanced
Topics: crypto, traversal, streaming
Estimated LOC: 500
Libraries: OpenSSL (libcrypto)

114. File Type Identifier (`file` clone)
Description: Identify file types by magic-number signatures.
Difficulty: Intermediate
Topics: magic bytes, tables
Estimated LOC: 400
Libraries: stdio.h

115. Line-Ending Normalizer
Description: Convert between CRLF/LF/CR and detect mixed endings.
Difficulty: Beginner
Topics: byte scanning, I/O
Estimated LOC: 200
Libraries: stdio.h

116. Streaming File Deduplicator
Description: Deduplicate a byte stream into content-addressed blocks.
Difficulty: Advanced
Topics: rolling hash, chunking
Estimated LOC: 500
Libraries: stdlib.h

---

## 6. Text Processing (117–137)

117. `sed`-style Stream Editor (subset)
Description: Apply substitution, delete, and print commands to a stream.
Difficulty: Advanced
Topics: parsing, regex, streams
Estimated LOC: 600
Libraries: regex.h

118. `awk`-style Field Processor (subset)
Description: Run per-line field programs with patterns and actions.
Difficulty: Advanced
Topics: parsing, expression eval
Estimated LOC: 800
Libraries: stdlib.h

119. Markdown to HTML Converter
Description: Convert core Markdown syntax to valid HTML.
Difficulty: Intermediate
Topics: parsing, state machine, output
Estimated LOC: 600
Libraries: stdio.h

120. Word Frequency Counter
Description: Tokenize text and rank words by frequency.
Difficulty: Beginner
Topics: hashing, sorting, tokenizing
Estimated LOC: 300
Libraries: stdlib.h

121. Spell Checker with Suggestions
Description: Flag misspellings and suggest edits by edit distance.
Difficulty: Advanced
Topics: dictionaries, dynamic programming
Estimated LOC: 550
Libraries: stdlib.h

122. Regex Engine (NFA/backtracking)
Description: Implement a small regex engine supporting `. * + ? | ()`.
Difficulty: Advanced
Topics: automata, recursion, parsing
Estimated LOC: 700
Libraries: stdlib.h

123. Text Justifier & Wrapper
Description: Reflow paragraphs to a width with greedy or optimal wrapping.
Difficulty: Intermediate
Topics: dynamic programming, strings
Estimated LOC: 400
Libraries: stdio.h

124. Template Engine
Description: Render templates with variable substitution, loops, and conditionals.
Difficulty: Advanced
Topics: parsing, symbol tables
Estimated LOC: 650
Libraries: stdlib.h

125. Syntax Highlighter (terminal)
Description: Tokenize source code and colorize keywords in the terminal.
Difficulty: Intermediate
Topics: lexing, ANSI colors
Estimated LOC: 450
Libraries: stdio.h

126. Levenshtein / Fuzzy String Matcher
Description: Rank candidate strings by fuzzy similarity to a query.
Difficulty: Intermediate
Topics: dynamic programming, scoring
Estimated LOC: 300
Libraries: stdlib.h

127. Text Adventure Story Parser
Description: Parse a branching-story file format into a playable graph.
Difficulty: Intermediate
Topics: parsing, graphs, state
Estimated LOC: 450
Libraries: stdlib.h

128. ROT13 / Caesar / Vigenère Toolkit
Description: Encode/decode classic substitution ciphers with cracking hints.
Difficulty: Beginner
Topics: strings, modular arithmetic
Estimated LOC: 300
Libraries: ctype.h

129. UTF-8 Encoder/Decoder & Validator
Description: Decode, validate, and re-encode UTF-8 byte streams.
Difficulty: Intermediate
Topics: unicode, bit manipulation
Estimated LOC: 350
Libraries: stdint.h

130. Text Statistics & Readability Scorer
Description: Compute Flesch-Kincaid and other readability metrics.
Difficulty: Intermediate
Topics: tokenizing, statistics
Estimated LOC: 350
Libraries: stdio.h

131. Autocomplete Engine (Trie-based)
Description: Suggest completions from a prefix using a trie.
Difficulty: Intermediate
Topics: tries, recursion
Estimated LOC: 400
Libraries: stdlib.h

132. Diff-based Merge Conflict Resolver
Description: Perform three-way merges and mark conflicts.
Difficulty: Advanced
Topics: diff algorithms, merging
Estimated LOC: 600
Libraries: stdlib.h

133. CSV/TSV to Markdown Table Converter
Description: Convert delimited data into aligned Markdown tables.
Difficulty: Beginner
Topics: parsing, formatting
Estimated LOC: 250
Libraries: stdio.h

134. Text Compression Visualizer
Description: Show how Huffman/RLE compresses a given text sample.
Difficulty: Intermediate
Topics: compression, trees, visualization
Estimated LOC: 450
Libraries: stdlib.h

135. Named-Entity Tokenizer
Description: Tokenize text into words, numbers, emails, and URLs by rules.
Difficulty: Intermediate
Topics: lexing, state machines
Estimated LOC: 400
Libraries: ctype.h

136. Boyer-Moore / KMP Search Tool
Description: Fast substring search implementing Boyer-Moore and KMP.
Difficulty: Advanced
Topics: string algorithms
Estimated LOC: 350
Libraries: stdlib.h

137. Text Table Formatter (pretty-print)
Description: Auto-size columns and render bordered ASCII tables.
Difficulty: Intermediate
Topics: formatting, measurement
Estimated LOC: 350
Libraries: stdio.h

---

## 7. Data Structures (138–164)

138. Dynamic Array (Vector)
Description: Generic growable array with amortized O(1) append.
Difficulty: Beginner
Topics: realloc, generics via void*, macros
Estimated LOC: 250
Libraries: stdlib.h

139. Singly & Doubly Linked Lists
Description: Full linked-list library with insert, delete, reverse, and sort.
Difficulty: Beginner
Topics: pointers, memory
Estimated LOC: 350
Libraries: stdlib.h

140. Stack & Queue Library
Description: Array- and list-backed stacks, queues, and deques.
Difficulty: Beginner
Topics: abstract data types
Estimated LOC: 300
Libraries: stdlib.h

141. Hash Table (open addressing + chaining)
Description: Generic hash map with two collision strategies and resizing.
Difficulty: Intermediate
Topics: hashing, load factor, memory
Estimated LOC: 450
Libraries: stdlib.h

142. Binary Search Tree
Description: BST with insert, delete, traversal, and balance checks.
Difficulty: Intermediate
Topics: trees, recursion
Estimated LOC: 400
Libraries: stdlib.h

143. AVL Tree
Description: Self-balancing BST with rotation-based rebalancing.
Difficulty: Advanced
Topics: balanced trees, rotations
Estimated LOC: 500
Libraries: stdlib.h

144. Red-Black Tree
Description: Red-black tree with full insert/delete rebalancing.
Difficulty: Advanced
Topics: balanced trees, invariants
Estimated LOC: 700
Libraries: stdlib.h

145. B-Tree / B+Tree
Description: Disk-friendly B-tree supporting range scans.
Difficulty: Advanced
Topics: multiway trees, paging
Estimated LOC: 800
Libraries: stdlib.h

146. Binary Heap & Priority Queue
Description: Min/max heap with heapify and a priority queue API.
Difficulty: Intermediate
Topics: heaps, arrays
Estimated LOC: 300
Libraries: stdlib.h

147. Fibonacci / Pairing Heap
Description: Advanced heap with fast decrease-key for Dijkstra.
Difficulty: Advanced
Topics: amortized analysis, heaps
Estimated LOC: 550
Libraries: stdlib.h

148. Trie & Radix Tree
Description: Prefix tree and compressed radix tree for string keys.
Difficulty: Intermediate
Topics: tries, string keys
Estimated LOC: 450
Libraries: stdlib.h

149. Graph Library (adjacency list/matrix)
Description: Represent graphs and run BFS/DFS with both representations.
Difficulty: Intermediate
Topics: graphs, traversal
Estimated LOC: 450
Libraries: stdlib.h

150. Disjoint Set (Union-Find)
Description: Union-find with path compression and union by rank.
Difficulty: Intermediate
Topics: amortized analysis
Estimated LOC: 200
Libraries: stdlib.h

151. Skip List
Description: Probabilistic ordered set with O(log n) search.
Difficulty: Advanced
Topics: randomization, linked structures
Estimated LOC: 450
Libraries: stdlib.h

152. Bloom Filter
Description: Space-efficient probabilistic membership test.
Difficulty: Intermediate
Topics: hashing, bit arrays
Estimated LOC: 300
Libraries: stdlib.h

153. LRU Cache
Description: Fixed-size cache with O(1) get/put via hashmap + list.
Difficulty: Intermediate
Topics: hashing, linked lists
Estimated LOC: 350
Libraries: stdlib.h

154. Circular Ring Buffer
Description: Lock-free-friendly ring buffer for producer/consumer data.
Difficulty: Intermediate
Topics: buffers, modular indexing
Estimated LOC: 250
Libraries: stdlib.h

155. Segment Tree
Description: Range query/update structure for sums, mins, and maxes.
Difficulty: Advanced
Topics: divide and conquer, lazy propagation
Estimated LOC: 450
Libraries: stdlib.h

156. Fenwick Tree (BIT)
Description: Binary indexed tree for prefix sums with updates.
Difficulty: Intermediate
Topics: bit manipulation, prefix sums
Estimated LOC: 200
Libraries: stdlib.h

157. Suffix Array & LCP
Description: Build suffix arrays for fast substring queries.
Difficulty: Advanced
Topics: string algorithms, sorting
Estimated LOC: 500
Libraries: stdlib.h

158. Suffix Tree (Ukkonen)
Description: Linear-time suffix tree construction for pattern matching.
Difficulty: Advanced
Topics: string algorithms, trees
Estimated LOC: 700
Libraries: stdlib.h

159. Quadtree / Octree
Description: Spatial partition tree for 2D/3D point queries.
Difficulty: Advanced
Topics: spatial indexing, recursion
Estimated LOC: 550
Libraries: stdlib.h

160. K-D Tree
Description: Multidimensional tree for nearest-neighbor search.
Difficulty: Advanced
Topics: spatial data, recursion
Estimated LOC: 500
Libraries: stdlib.h

161. Generic Iterator Framework
Description: Uniform iteration interface over multiple container types.
Difficulty: Intermediate
Topics: function pointers, abstraction
Estimated LOC: 350
Libraries: stdlib.h

162. Persistent (Immutable) Data Structures
Description: Structural-sharing immutable list and map.
Difficulty: Advanced
Topics: persistence, reference counting
Estimated LOC: 600
Libraries: stdlib.h

163. Rope (heavy text buffer)
Description: Rope structure for efficient large-string editing.
Difficulty: Advanced
Topics: balanced trees, strings
Estimated LOC: 600
Libraries: stdlib.h

164. Interval Tree
Description: Store intervals and query all that overlap a point/range.
Difficulty: Advanced
Topics: augmented trees
Estimated LOC: 450
Libraries: stdlib.h

---

## 8. Algorithms (165–197)

165. Sorting Algorithms Visual Suite
Description: Implement and benchmark 10+ sorting algorithms with stats.
Difficulty: Intermediate
Topics: sorting, benchmarking
Estimated LOC: 600
Libraries: time.h

166. Search Algorithms Toolkit
Description: Linear, binary, interpolation, and exponential search.
Difficulty: Beginner
Topics: searching, complexity
Estimated LOC: 300
Libraries: stdlib.h

167. Dijkstra Shortest Path
Description: Compute shortest paths with a priority-queue Dijkstra.
Difficulty: Intermediate
Topics: graphs, heaps
Estimated LOC: 350
Libraries: stdlib.h

168. A* Pathfinding
Description: Grid pathfinding with heuristics and obstacle maps.
Difficulty: Intermediate
Topics: graphs, heuristics
Estimated LOC: 400
Libraries: stdlib.h

169. Bellman-Ford & Negative Cycles
Description: Shortest paths allowing negative edges with cycle detection.
Difficulty: Intermediate
Topics: graphs, relaxation
Estimated LOC: 300
Libraries: stdlib.h

170. Floyd-Warshall All-Pairs
Description: Compute all-pairs shortest paths via dynamic programming.
Difficulty: Intermediate
Topics: dynamic programming, graphs
Estimated LOC: 250
Libraries: stdlib.h

171. Minimum Spanning Tree (Kruskal & Prim)
Description: Build MSTs with union-find and priority queues.
Difficulty: Intermediate
Topics: graphs, greedy
Estimated LOC: 400
Libraries: stdlib.h

172. Topological Sort & Cycle Detection
Description: Order a DAG and detect cycles in dependencies.
Difficulty: Intermediate
Topics: graphs, DFS
Estimated LOC: 300
Libraries: stdlib.h

173. Strongly Connected Components (Tarjan)
Description: Find SCCs in a directed graph in linear time.
Difficulty: Advanced
Topics: graphs, DFS
Estimated LOC: 350
Libraries: stdlib.h

174. Max Flow (Edmonds-Karp / Dinic)
Description: Compute maximum flow and minimum cut in networks.
Difficulty: Advanced
Topics: graphs, flow
Estimated LOC: 500
Libraries: stdlib.h

175. Dynamic Programming Problem Set Solver
Description: Solve knapsack, LIS, edit distance, and coin change generically.
Difficulty: Intermediate
Topics: dynamic programming
Estimated LOC: 500
Libraries: stdlib.h

176. Backtracking Solver Framework
Description: Generic backtracking engine for N-Queens, Sudoku, and mazes.
Difficulty: Intermediate
Topics: recursion, pruning
Estimated LOC: 500
Libraries: stdlib.h

177. String Matching Suite
Description: KMP, Rabin-Karp, Boyer-Moore, and Aho-Corasick in one lib.
Difficulty: Advanced
Topics: string algorithms
Estimated LOC: 700
Libraries: stdlib.h

178. Convex Hull Algorithms
Description: Compute hulls via Graham scan and Andrew's monotone chain.
Difficulty: Advanced
Topics: computational geometry
Estimated LOC: 400
Libraries: math.h

179. Line-Segment Intersection Sweep
Description: Find all intersections with a Bentley-Ottmann sweep line.
Difficulty: Advanced
Topics: computational geometry, events
Estimated LOC: 550
Libraries: stdlib.h

180. Huffman Coding
Description: Build Huffman trees to compress and decompress data.
Difficulty: Intermediate
Topics: greedy, trees, bit I/O
Estimated LOC: 450
Libraries: stdlib.h

181. Simplex Linear Programming Solver
Description: Solve LP problems with the simplex method.
Difficulty: Advanced
Topics: optimization, linear algebra
Estimated LOC: 600
Libraries: math.h

182. Genetic Algorithm Framework
Description: Evolve solutions with selection, crossover, and mutation.
Difficulty: Advanced
Topics: metaheuristics, randomness
Estimated LOC: 500
Libraries: stdlib.h

183. Simulated Annealing Optimizer
Description: Optimize hard problems (TSP) with annealing schedules.
Difficulty: Advanced
Topics: metaheuristics, probability
Estimated LOC: 450
Libraries: math.h

184. Traveling Salesman Approximations
Description: Solve TSP with nearest-neighbor, 2-opt, and Christofides-style heuristics.
Difficulty: Advanced
Topics: optimization, graphs
Estimated LOC: 550
Libraries: math.h

185. Reservoir Sampling & Streaming Stats
Description: Sample and summarize data from unbounded streams.
Difficulty: Intermediate
Topics: probability, streaming
Estimated LOC: 300
Libraries: stdlib.h

186. HyperLogLog Cardinality Estimator
Description: Estimate distinct counts in huge streams with tiny memory.
Difficulty: Advanced
Topics: hashing, probabilistic counting
Estimated LOC: 400
Libraries: stdlib.h

187. Rabin-Karp Plagiarism Detector
Description: Detect copied passages between documents via rolling hashes.
Difficulty: Intermediate
Topics: hashing, string algorithms
Estimated LOC: 400
Libraries: stdlib.h

188. Union of Rectangles / Sweep Area
Description: Compute total covered area of overlapping rectangles.
Difficulty: Advanced
Topics: sweep line, segment trees
Estimated LOC: 500
Libraries: stdlib.h

189. Matrix Chain & DP Optimizer
Description: Find optimal parenthesization for matrix multiplication.
Difficulty: Intermediate
Topics: dynamic programming
Estimated LOC: 250
Libraries: stdlib.h

190. Fast Exponentiation & Matrix Power
Description: Compute large powers and linear recurrences fast.
Difficulty: Intermediate
Topics: divide and conquer
Estimated LOC: 250
Libraries: stdlib.h

191. Miller-Rabin Primality Test
Description: Probabilistic primality testing for large integers.
Difficulty: Advanced
Topics: number theory, modular math
Estimated LOC: 300
Libraries: stdint.h

192. Karatsuba & FFT Multiplication
Description: Multiply large numbers faster than schoolbook methods.
Difficulty: Advanced
Topics: divide and conquer, FFT
Estimated LOC: 500
Libraries: complex.h

193. Job Scheduling Algorithms
Description: Compare FCFS, SJF, and interval scheduling optimality.
Difficulty: Intermediate
Topics: greedy, scheduling
Estimated LOC: 350
Libraries: stdlib.h

194. Approximate Nearest Neighbor (LSH)
Description: Find similar high-dimensional vectors with locality-sensitive hashing.
Difficulty: Advanced
Topics: hashing, vectors
Estimated LOC: 500
Libraries: math.h

195. Boyer-Moore Majority & Streaming Heavy Hitters
Description: Find frequent elements in a stream in one pass.
Difficulty: Intermediate
Topics: streaming, counting
Estimated LOC: 250
Libraries: stdlib.h

196. Maze Generation Algorithms
Description: Generate mazes via DFS, Prim, and recursive division.
Difficulty: Intermediate
Topics: graphs, randomness
Estimated LOC: 400
Libraries: stdlib.h

197. Algorithm Complexity Profiler
Description: Empirically fit runtime curves to infer Big-O of a function.
Difficulty: Advanced
Topics: benchmarking, curve fitting
Estimated LOC: 400
Libraries: time.h, math.h

---

## 9. Games (198–224)

198. Tic-Tac-Toe with Minimax AI
Description: Unbeatable tic-tac-toe using the minimax algorithm.
Difficulty: Beginner
Topics: game trees, recursion
Estimated LOC: 300
Libraries: stdio.h

199. Hangman
Description: Word-guessing game with categories and ASCII gallows.
Difficulty: Beginner
Topics: strings, state
Estimated LOC: 250
Libraries: stdio.h

200. Connect Four with AI
Description: Two-player Connect Four with an alpha-beta AI opponent.
Difficulty: Intermediate
Topics: game trees, alpha-beta
Estimated LOC: 450
Libraries: stdio.h

201. Snake (terminal)
Description: Classic snake with growing tail and collision detection.
Difficulty: Intermediate
Topics: game loop, input, ncurses
Estimated LOC: 350
Libraries: ncurses

202. Tetris (terminal)
Description: Falling-block puzzle with rotation, line clears, and scoring.
Difficulty: Advanced
Topics: game loop, collision, rotation
Estimated LOC: 600
Libraries: ncurses

203. 2048
Description: Sliding-tile number-merging game with animations.
Difficulty: Intermediate
Topics: grids, input, merging
Estimated LOC: 400
Libraries: ncurses

204. Minesweeper
Description: Grid minesweeper with flood-fill reveal and flagging.
Difficulty: Intermediate
Topics: recursion, grids
Estimated LOC: 450
Libraries: ncurses

205. Sudoku Generator & Solver
Description: Generate valid puzzles and solve them by backtracking.
Difficulty: Intermediate
Topics: backtracking, constraints
Estimated LOC: 500
Libraries: stdio.h

206. Text-Based RPG Engine
Description: Data-driven RPG with rooms, items, combat, and saves.
Difficulty: Advanced
Topics: state machines, parsing, persistence
Estimated LOC: 900
Libraries: stdlib.h

207. Blackjack
Description: Card game with dealer AI, betting, and basic strategy hints.
Difficulty: Intermediate
Topics: cards, probability, state
Estimated LOC: 450
Libraries: stdlib.h

208. Checkers with AI
Description: Full checkers with forced captures and minimax AI.
Difficulty: Advanced
Topics: board games, game trees
Estimated LOC: 700
Libraries: stdio.h

209. Chess Engine (basic)
Description: Legal-move chess with a simple evaluation and search.
Difficulty: Advanced
Topics: board representation, search
Estimated LOC: 1500
Libraries: stdio.h

210. Pong (SDL2)
Description: Two-paddle Pong with physics and score.
Difficulty: Intermediate
Topics: game loop, collision, rendering
Estimated LOC: 400
Libraries: SDL2

211. Breakout / Arkanoid (SDL2)
Description: Brick-breaking game with power-ups and levels.
Difficulty: Intermediate
Topics: physics, collision, levels
Estimated LOC: 600
Libraries: SDL2

212. Space Invaders (Raylib)
Description: Wave-based shooter with enemies, bullets, and score.
Difficulty: Intermediate
Topics: game loop, entities
Estimated LOC: 600
Libraries: Raylib

213. Flappy Bird Clone (Raylib)
Description: One-button flappy game with procedural pipes.
Difficulty: Beginner
Topics: physics, collision
Estimated LOC: 350
Libraries: Raylib

214. Platformer with Tile Maps (SDL2)
Description: Side-scroller with tile collision, gravity, and camera.
Difficulty: Advanced
Topics: physics, tilemaps, camera
Estimated LOC: 1000
Libraries: SDL2

215. Roguelike Dungeon Crawler
Description: Procedural dungeons, turn-based combat, and permadeath.
Difficulty: Advanced
Topics: procedural generation, FOV
Estimated LOC: 1200
Libraries: ncurses

216. Conway's Game of Life
Description: Cellular automaton with patterns, wrap, and speed control.
Difficulty: Beginner
Topics: grids, simulation
Estimated LOC: 300
Libraries: ncurses

217. Wordle Clone
Description: Daily word puzzle with color feedback and stats.
Difficulty: Beginner
Topics: strings, feedback logic
Estimated LOC: 300
Libraries: stdio.h

218. Simon Says Memory Game
Description: Sequence-memory game with increasing difficulty and sound.
Difficulty: Beginner
Topics: sequences, timing
Estimated LOC: 300
Libraries: ncurses

219. Reversi / Othello with AI
Description: Othello with legal-move highlighting and heuristic AI.
Difficulty: Advanced
Topics: board games, evaluation
Estimated LOC: 600
Libraries: stdio.h

220. Asteroids (Raylib)
Description: Vector-style shooter with wrapping physics and splitting rocks.
Difficulty: Intermediate
Topics: vector math, physics
Estimated LOC: 700
Libraries: Raylib

221. Tower Defense (SDL2)
Description: Place towers to stop waves along a path with economy.
Difficulty: Advanced
Topics: pathfinding, entities, balancing
Estimated LOC: 1200
Libraries: SDL2

222. Card Game Framework (rules engine)
Description: Configurable engine to implement multiple card games.
Difficulty: Advanced
Topics: rules engines, abstraction
Estimated LOC: 900
Libraries: stdlib.h

223. Physics Sandbox (Verlet)
Description: Simulate ropes, cloth, and collisions with Verlet integration.
Difficulty: Advanced
Topics: physics, integration
Estimated LOC: 700
Libraries: Raylib

224. Multiplayer Terminal Snake (networked)
Description: Two-player snake over TCP with a shared game state.
Difficulty: Advanced
Topics: networking, game state sync
Estimated LOC: 800
Libraries: ncurses, sockets

---

## 10. Operating Systems (225–245)

225. Bootloader (x86 real mode)
Description: Write a 512-byte MBR bootloader that prints to screen.
Difficulty: Advanced
Topics: assembly, BIOS, boot
Estimated LOC: 300
Libraries: NASM + C

226. Minimal Kernel ("Hello Kernel")
Description: Boot into a C kernel that writes to VGA text memory.
Difficulty: Advanced
Topics: freestanding C, linker scripts
Estimated LOC: 500
Libraries: none (freestanding)

227. Physical Memory Manager (frame allocator)
Description: Manage physical frames with a bitmap allocator in a kernel.
Difficulty: Advanced
Topics: memory management, bitmaps
Estimated LOC: 500
Libraries: none (freestanding)

228. Virtual Memory & Paging
Description: Set up page tables and enable paging in a hobby kernel.
Difficulty: Advanced
Topics: paging, MMU
Estimated LOC: 700
Libraries: none (freestanding)

229. Interrupt Descriptor Table & Handlers
Description: Install IDT entries and handle keyboard/timer interrupts.
Difficulty: Advanced
Topics: interrupts, ISRs
Estimated LOC: 600
Libraries: none (freestanding)

230. Cooperative Multitasking Scheduler
Description: Switch between kernel tasks using saved contexts.
Difficulty: Advanced
Topics: context switching, scheduling
Estimated LOC: 600
Libraries: none (freestanding)

231. Preemptive Round-Robin Scheduler
Description: Timer-driven preemptive scheduling of processes.
Difficulty: Advanced
Topics: scheduling, timers
Estimated LOC: 700
Libraries: none (freestanding)

232. Simple In-Memory Filesystem
Description: Implement a RAM filesystem with files, dirs, and a VFS layer.
Difficulty: Advanced
Topics: filesystems, data structures
Estimated LOC: 800
Libraries: none (freestanding)

233. FAT12/16 Filesystem Reader
Description: Read files from a FAT-formatted disk image.
Difficulty: Advanced
Topics: filesystems, on-disk layout
Estimated LOC: 700
Libraries: stdio.h

234. Userspace Threading Library (ucontext)
Description: Implement green threads with your own scheduler.
Difficulty: Advanced
Topics: context switching, coroutines
Estimated LOC: 500
Libraries: ucontext.h

235. Slab / Buddy Kernel Allocator
Description: Implement buddy and slab allocators for kernel memory.
Difficulty: Advanced
Topics: allocators, fragmentation
Estimated LOC: 700
Libraries: none (freestanding)

236. System Call Interface Demo
Description: Add a syscall gate and expose a few kernel services to userspace.
Difficulty: Advanced
Topics: syscalls, privilege levels
Estimated LOC: 600
Libraries: none (freestanding)

237. ELF Program Loader
Description: Load and execute a static ELF binary in a hobby OS.
Difficulty: Advanced
Topics: ELF, loaders, memory
Estimated LOC: 700
Libraries: elf.h

238. Process Simulator with Scheduling Policies
Description: Simulate FCFS/SJF/RR/priority scheduling and report metrics.
Difficulty: Intermediate
Topics: scheduling, simulation
Estimated LOC: 500
Libraries: stdlib.h

239. Deadlock Detection Simulator
Description: Model resource allocation and detect deadlock cycles.
Difficulty: Intermediate
Topics: graphs, banker's algorithm
Estimated LOC: 450
Libraries: stdlib.h

240. Page Replacement Simulator
Description: Compare FIFO, LRU, Optimal, and Clock page replacement.
Difficulty: Intermediate
Topics: memory management, simulation
Estimated LOC: 450
Libraries: stdlib.h

241. Disk Scheduling Simulator
Description: Simulate FCFS, SSTF, SCAN, and C-SCAN disk head movement.
Difficulty: Intermediate
Topics: scheduling, simulation
Estimated LOC: 400
Libraries: stdlib.h

242. Semaphore & Mutex Primitives (from scratch)
Description: Build synchronization primitives on atomics/futex.
Difficulty: Advanced
Topics: concurrency, atomics
Estimated LOC: 400
Libraries: pthread, atomics

243. Producer-Consumer & Dining Philosophers
Description: Classic concurrency problems with visible state.
Difficulty: Intermediate
Topics: synchronization, threads
Estimated LOC: 400
Libraries: pthread

244. Shell with Job Control
Description: A kernel-adjacent userspace shell supporting fg/bg jobs.
Difficulty: Advanced
Topics: process groups, signals
Estimated LOC: 800
Libraries: unistd.h, signal.h

245. Boot-to-REPL Mini OS
Description: Boot into a tiny interactive command shell in your kernel.
Difficulty: Advanced
Topics: kernel, keyboard, parsing
Estimated LOC: 1000
Libraries: none (freestanding)

---

## 11. Linux & System Programming (246–270)

246. `ps` Process Lister
Description: List running processes by parsing `/proc`.
Difficulty: Intermediate
Topics: /proc, parsing
Estimated LOC: 350
Libraries: dirent.h

247. `top`-style System Monitor
Description: Live CPU, memory, and process view refreshing in the terminal.
Difficulty: Advanced
Topics: /proc, ncurses, stats
Estimated LOC: 700
Libraries: ncurses

248. `strace`-lite Syscall Tracer
Description: Trace a child process's syscalls using ptrace.
Difficulty: Advanced
Topics: ptrace, syscalls
Estimated LOC: 600
Libraries: sys/ptrace.h

249. `kill` / Signal Sender
Description: Send signals to processes and demonstrate handlers.
Difficulty: Beginner
Topics: signals, pid
Estimated LOC: 200
Libraries: signal.h

250. Daemonizer
Description: Turn a program into a well-behaved background daemon.
Difficulty: Intermediate
Topics: fork, setsid, file descriptors
Estimated LOC: 300
Libraries: unistd.h

251. Inter-Process Pipe Chat
Description: Two processes chatting over named pipes (FIFOs).
Difficulty: Intermediate
Topics: FIFOs, IPC
Estimated LOC: 300
Libraries: sys/stat.h

252. Shared Memory + Semaphore IPC
Description: Share a data structure between processes via SysV/POSIX shm.
Difficulty: Advanced
Topics: shared memory, sync
Estimated LOC: 400
Libraries: sys/shm.h, semaphore.h

253. Message Queue IPC Demo
Description: Pass structured messages between processes via message queues.
Difficulty: Intermediate
Topics: IPC, message queues
Estimated LOC: 350
Libraries: mqueue.h

254. File Watcher (inotify)
Description: React to filesystem create/modify/delete events.
Difficulty: Intermediate
Topics: inotify, events
Estimated LOC: 350
Libraries: sys/inotify.h

255. Memory Usage Profiler for a PID
Description: Report RSS, heap, and mappings for a process from /proc.
Difficulty: Intermediate
Topics: /proc/maps, parsing
Estimated LOC: 400
Libraries: stdio.h

256. `nice`/Priority Manager
Description: Adjust process scheduling priorities and affinity.
Difficulty: Intermediate
Topics: scheduling, syscalls
Estimated LOC: 250
Libraries: sched.h

257. epoll-based Event Loop Library
Description: Reusable event loop for readable/writable fd callbacks.
Difficulty: Advanced
Topics: epoll, event-driven design
Estimated LOC: 500
Libraries: sys/epoll.h

258. Zombie Reaper & Process Supervisor
Description: Supervise child processes and restart them on crash.
Difficulty: Intermediate
Topics: fork, wait, signals
Estimated LOC: 400
Libraries: sys/wait.h

259. `mount`/Filesystem Info Tool
Description: Report mounted filesystems and usage from /proc/mounts + statvfs.
Difficulty: Intermediate
Topics: statvfs, parsing
Estimated LOC: 300
Libraries: sys/statvfs.h

260. Container-lite (namespaces + cgroups)
Description: Isolate a process with namespaces and resource limits.
Difficulty: Advanced
Topics: namespaces, cgroups, clone
Estimated LOC: 700
Libraries: sched.h

261. `chroot` Jail Runner
Description: Run a command inside a chroot with a minimal filesystem.
Difficulty: Advanced
Topics: chroot, capabilities
Estimated LOC: 400
Libraries: unistd.h

262. File Locking Demo (flock/fcntl)
Description: Coordinate file access across processes with locks.
Difficulty: Intermediate
Topics: file locking, concurrency
Estimated LOC: 300
Libraries: fcntl.h

263. Terminal Multiplexer (mini-tmux)
Description: Run multiple shells via ptys with split panes.
Difficulty: Advanced
Topics: pty, terminal, multiplexing
Estimated LOC: 900
Libraries: pty.h, ncurses

264. `uptime`/Load Average Reader
Description: Report uptime, load averages, and logged-in users.
Difficulty: Beginner
Topics: /proc, sysinfo
Estimated LOC: 200
Libraries: sys/sysinfo.h

265. Signal-Safe Logging Library
Description: Async-signal-safe logger usable inside signal handlers.
Difficulty: Advanced
Topics: signals, reentrancy
Estimated LOC: 350
Libraries: unistd.h

266. `lsof`-lite (open files by process)
Description: List open file descriptors per process from /proc/*/fd.
Difficulty: Intermediate
Topics: /proc, symlinks
Estimated LOC: 350
Libraries: dirent.h

267. Battery / Sensor Monitor
Description: Read battery, temperature, and fan data from sysfs.
Difficulty: Beginner
Topics: sysfs, parsing
Estimated LOC: 250
Libraries: stdio.h

268. seccomp Syscall Sandbox
Description: Restrict a program to an allowlist of syscalls.
Difficulty: Advanced
Topics: seccomp-bpf, security
Estimated LOC: 400
Libraries: seccomp

269. `dd`-style Block Copier
Description: Copy blocks with configurable size, count, and conversions.
Difficulty: Intermediate
Topics: raw I/O, buffering
Estimated LOC: 300
Libraries: unistd.h

270. System Resource Limit (ulimit) Tool
Description: Query and set resource limits via getrlimit/setrlimit.
Difficulty: Intermediate
Topics: rlimits, syscalls
Estimated LOC: 250
Libraries: sys/resource.h

---

## 12. Shell Programming (271–283)

271. Minimal Shell (fork/exec)
Description: Read, parse, and execute single commands with arguments.
Difficulty: Intermediate
Topics: fork, exec, wait
Estimated LOC: 300
Libraries: unistd.h

272. Shell with Pipes & Redirection
Description: Support `|`, `>`, `<`, and `>>` between commands.
Difficulty: Advanced
Topics: pipes, dup2, parsing
Estimated LOC: 600
Libraries: unistd.h

273. Shell with Built-ins & History
Description: Add cd, export, history, and up-arrow recall.
Difficulty: Advanced
Topics: builtins, line editing
Estimated LOC: 700
Libraries: readline

274. Shell Command Autocompletion
Description: Tab-complete commands and file paths in your shell.
Difficulty: Advanced
Topics: readline, completion
Estimated LOC: 400
Libraries: readline

275. Shell Scripting Interpreter
Description: Interpret a scripting subset with variables, if, and loops.
Difficulty: Advanced
Topics: parsing, control flow
Estimated LOC: 900
Libraries: stdlib.h

276. Alias & Environment Manager
Description: Support aliases and per-session environment configuration.
Difficulty: Intermediate
Topics: hash maps, parsing
Estimated LOC: 400
Libraries: stdlib.h

277. Prompt Customization Engine
Description: Render a configurable prompt with git status and time.
Difficulty: Intermediate
Topics: strings, subprocess
Estimated LOC: 350
Libraries: unistd.h

278. Command Timing Wrapper (`time` clone)
Description: Measure real/user/sys time for any command.
Difficulty: Intermediate
Topics: fork, rusage, timing
Estimated LOC: 250
Libraries: sys/resource.h

279. Background Job Manager
Description: Run commands in the background and manage them with jobs/fg/bg.
Difficulty: Advanced
Topics: process groups, signals
Estimated LOC: 500
Libraries: signal.h

280. Glob Pattern Expander
Description: Expand `*`, `?`, and `[...]` patterns like a shell.
Difficulty: Intermediate
Topics: pattern matching, dirent
Estimated LOC: 350
Libraries: dirent.h

281. Here-Doc & Variable Expansion Engine
Description: Implement here-documents and `$VAR`/`${VAR}` expansion.
Difficulty: Advanced
Topics: parsing, substitution
Estimated LOC: 400
Libraries: stdlib.h

282. Shell Pipeline Profiler
Description: Report per-stage timing and byte throughput in a pipeline.
Difficulty: Advanced
Topics: pipes, timing, stats
Estimated LOC: 450
Libraries: unistd.h

283. Dotfile Manager
Description: Symlink and version dotfiles across machines from a config.
Difficulty: Intermediate
Topics: symlinks, file ops
Estimated LOC: 400
Libraries: unistd.h

---

## 13. Networking (TCP/UDP/IP) (284–309)

284. TCP Echo Server & Client
Description: A blocking TCP server that echoes back what clients send.
Difficulty: Beginner
Topics: sockets, TCP
Estimated LOC: 250
Libraries: sys/socket.h

285. UDP Echo & Ping Tool
Description: Send/receive UDP datagrams and measure round-trip time.
Difficulty: Beginner
Topics: sockets, UDP
Estimated LOC: 250
Libraries: sys/socket.h

286. Concurrent Chat Server (fork/thread)
Description: Multi-client chat room broadcasting messages to all peers.
Difficulty: Intermediate
Topics: sockets, concurrency
Estimated LOC: 500
Libraries: pthread

287. Chat Server with select()/poll()
Description: Single-threaded multiplexed chat server.
Difficulty: Intermediate
Topics: I/O multiplexing
Estimated LOC: 450
Libraries: sys/select.h

288. High-Concurrency epoll Server
Description: Handle thousands of connections with an epoll event loop.
Difficulty: Advanced
Topics: epoll, non-blocking I/O
Estimated LOC: 600
Libraries: sys/epoll.h

289. File Transfer Protocol (custom)
Description: Reliable file transfer with chunking and checksums over TCP.
Difficulty: Intermediate
Topics: sockets, framing
Estimated LOC: 500
Libraries: sys/socket.h

290. Port Scanner
Description: Scan a host for open TCP ports with connect/SYN modes.
Difficulty: Intermediate
Topics: sockets, timeouts
Estimated LOC: 350
Libraries: sys/socket.h

291. `ping` (ICMP)
Description: Send ICMP echo requests and report latency and loss.
Difficulty: Advanced
Topics: raw sockets, ICMP, checksums
Estimated LOC: 400
Libraries: netinet/ip_icmp.h

292. `traceroute`
Description: Map the route to a host using TTL-limited probes.
Difficulty: Advanced
Topics: raw sockets, TTL, ICMP
Estimated LOC: 450
Libraries: netinet/ip.h

293. DNS Resolver (from scratch)
Description: Build and parse DNS queries over UDP without libc resolver.
Difficulty: Advanced
Topics: DNS wire format, UDP
Estimated LOC: 500
Libraries: sys/socket.h

294. DHCP Client (basic)
Description: Perform DISCOVER/OFFER/REQUEST/ACK to obtain a lease.
Difficulty: Advanced
Topics: DHCP, raw sockets
Estimated LOC: 600
Libraries: sys/socket.h

295. ARP Scanner
Description: Discover hosts on a LAN via ARP requests.
Difficulty: Advanced
Topics: raw sockets, layer 2
Estimated LOC: 450
Libraries: linux/if_packet.h

296. Packet Sniffer
Description: Capture and decode Ethernet/IP/TCP headers off the wire.
Difficulty: Advanced
Topics: raw sockets, packet parsing
Estimated LOC: 600
Libraries: libpcap

297. Bandwidth Meter (iperf-lite)
Description: Measure throughput between two hosts over TCP/UDP.
Difficulty: Intermediate
Topics: sockets, timing
Estimated LOC: 450
Libraries: sys/socket.h

298. NTP Time Client
Description: Query an NTP server and compute clock offset.
Difficulty: Intermediate
Topics: NTP protocol, UDP
Estimated LOC: 350
Libraries: sys/socket.h

299. Simple VPN Tunnel (TUN device)
Description: Tunnel IP packets between hosts through a userspace TUN device.
Difficulty: Advanced
Topics: TUN/TAP, encryption
Estimated LOC: 700
Libraries: linux/if_tun.h

300. TCP Proxy / Port Forwarder
Description: Forward connections between a local and remote endpoint.
Difficulty: Intermediate
Topics: sockets, relaying
Estimated LOC: 400
Libraries: sys/socket.h

301. SOCKS5 Proxy Server
Description: Implement the SOCKS5 handshake and relay traffic.
Difficulty: Advanced
Topics: proxy protocols, sockets
Estimated LOC: 600
Libraries: sys/socket.h

302. Reliable UDP Protocol
Description: Add ACKs, retransmission, and ordering on top of UDP.
Difficulty: Advanced
Topics: protocol design, reliability
Estimated LOC: 700
Libraries: sys/socket.h

303. Network Chat with Encryption
Description: End-to-end encrypted chat over TCP with key exchange.
Difficulty: Advanced
Topics: crypto, sockets
Estimated LOC: 700
Libraries: OpenSSL

304. Multicast Group Messenger
Description: Send and receive on IP multicast groups.
Difficulty: Intermediate
Topics: multicast, UDP
Estimated LOC: 350
Libraries: sys/socket.h

305. WHOIS Client
Description: Query WHOIS servers and display registration data.
Difficulty: Beginner
Topics: sockets, protocols
Estimated LOC: 250
Libraries: sys/socket.h

306. mDNS / Service Discovery
Description: Advertise and discover services on the local network.
Difficulty: Advanced
Topics: mDNS, multicast
Estimated LOC: 600
Libraries: sys/socket.h

307. Simple BitTorrent Peer (leech)
Description: Parse a .torrent, contact peers, and download pieces.
Difficulty: Advanced
Topics: bencode, peer protocol
Estimated LOC: 1200
Libraries: OpenSSL

308. Syslog Server
Description: Receive and store RFC-5424 syslog messages over UDP.
Difficulty: Intermediate
Topics: parsing, UDP
Estimated LOC: 400
Libraries: sys/socket.h

309. Load Balancer (round-robin/least-conn)
Description: Distribute TCP connections across backend servers.
Difficulty: Advanced
Topics: proxying, health checks
Estimated LOC: 700
Libraries: sys/epoll.h

---

## 14. Web Servers, HTTP & REST (310–329)

310. HTTP/1.0 Static File Server
Description: Serve files from a directory with correct MIME types.
Difficulty: Intermediate
Topics: HTTP, sockets, file I/O
Estimated LOC: 500
Libraries: sys/socket.h

311. HTTP Request Parser
Description: Parse request line, headers, and body robustly.
Difficulty: Intermediate
Topics: parsing, HTTP
Estimated LOC: 400
Libraries: stdlib.h

312. HTTP Client (`curl`-lite)
Description: Perform GET/POST requests and print responses.
Difficulty: Intermediate
Topics: HTTP, sockets
Estimated LOC: 450
Libraries: sys/socket.h

313. HTTP/1.1 Server with Keep-Alive
Description: Persistent connections, chunked encoding, and pipelining.
Difficulty: Advanced
Topics: HTTP/1.1, streaming
Estimated LOC: 800
Libraries: sys/socket.h

314. REST API Server (in-memory)
Description: CRUD JSON REST endpoints backed by an in-memory store.
Difficulty: Advanced
Topics: HTTP, JSON, routing
Estimated LOC: 900
Libraries: sys/socket.h

315. URL Router & Middleware Framework
Description: Route requests by method/path with composable middleware.
Difficulty: Advanced
Topics: routing, function pointers
Estimated LOC: 600
Libraries: stdlib.h

316. WebSocket Server
Description: Perform the WS handshake and exchange framed messages.
Difficulty: Advanced
Topics: WebSocket, framing, SHA-1
Estimated LOC: 700
Libraries: OpenSSL

317. HTTPS Server with TLS
Description: Serve HTTP over TLS using OpenSSL.
Difficulty: Advanced
Topics: TLS, sockets
Estimated LOC: 700
Libraries: OpenSSL

318. CGI Web Server
Description: Execute CGI scripts and stream their output to clients.
Difficulty: Advanced
Topics: fork/exec, environ, HTTP
Estimated LOC: 700
Libraries: unistd.h

319. Reverse Proxy
Description: Forward HTTP requests to backends and relay responses.
Difficulty: Advanced
Topics: HTTP, proxying
Estimated LOC: 800
Libraries: sys/socket.h

320. HTTP Rate Limiter
Description: Throttle requests per client using token buckets.
Difficulty: Intermediate
Topics: algorithms, HTTP
Estimated LOC: 400
Libraries: stdlib.h

321. Static Site Generator
Description: Convert Markdown + templates into a static website.
Difficulty: Intermediate
Topics: parsing, templating, file I/O
Estimated LOC: 700
Libraries: stdio.h

322. URL Shortener Service
Description: Map short codes to URLs with a REST API and persistence.
Difficulty: Intermediate
Topics: HTTP, hashing, storage
Estimated LOC: 600
Libraries: sys/socket.h

323. HTTP Cache / CDN-lite
Description: Cache upstream responses with TTL and revalidation.
Difficulty: Advanced
Topics: caching, HTTP semantics
Estimated LOC: 700
Libraries: sys/socket.h

324. Cookie & Session Manager
Description: Issue and validate session cookies with signing.
Difficulty: Intermediate
Topics: HTTP, HMAC
Estimated LOC: 400
Libraries: OpenSSL

325. JSON REST Client SDK Generator
Description: Generate typed C client stubs from an API description.
Difficulty: Advanced
Topics: code generation, parsing
Estimated LOC: 700
Libraries: stdlib.h

326. Server-Sent Events (SSE) Server
Description: Stream real-time events to browsers over HTTP.
Difficulty: Intermediate
Topics: HTTP streaming
Estimated LOC: 400
Libraries: sys/socket.h

327. Multipart Form Upload Handler
Description: Parse multipart/form-data and save uploaded files.
Difficulty: Advanced
Topics: parsing, HTTP
Estimated LOC: 500
Libraries: stdlib.h

328. Basic + Bearer Auth Middleware
Description: Protect routes with HTTP Basic and token auth.
Difficulty: Intermediate
Topics: HTTP auth, base64
Estimated LOC: 350
Libraries: OpenSSL

329. Webhook Dispatcher
Description: Queue and deliver HTTP webhooks with retries and backoff.
Difficulty: Advanced
Topics: HTTP client, queues, retries
Estimated LOC: 600
Libraries: sys/socket.h

---

## 15. Multithreading & Concurrency (330–349)

330. Thread Pool
Description: A fixed pool of worker threads consuming a task queue.
Difficulty: Intermediate
Topics: pthreads, queues, condvars
Estimated LOC: 400
Libraries: pthread

331. Parallel Merge Sort
Description: Sort large arrays using worker threads.
Difficulty: Intermediate
Topics: parallelism, divide and conquer
Estimated LOC: 350
Libraries: pthread

332. Producer-Consumer Queue (bounded)
Description: Thread-safe bounded buffer with condition variables.
Difficulty: Intermediate
Topics: synchronization
Estimated LOC: 300
Libraries: pthread

333. Read-Write Lock Library
Description: Implement fair reader-writer locks from primitives.
Difficulty: Advanced
Topics: synchronization, fairness
Estimated LOC: 350
Libraries: pthread

334. Lock-Free Queue (CAS)
Description: Michael-Scott lock-free MPSC/MPMC queue with atomics.
Difficulty: Advanced
Topics: atomics, memory ordering
Estimated LOC: 450
Libraries: stdatomic.h

335. Parallel Web Crawler
Description: Crawl links concurrently with a shared frontier.
Difficulty: Advanced
Topics: threads, HTTP, dedup
Estimated LOC: 800
Libraries: pthread

336. Map-Reduce Framework (single node)
Description: Run map/reduce jobs across worker threads.
Difficulty: Advanced
Topics: parallelism, aggregation
Estimated LOC: 600
Libraries: pthread

337. Actor Model Runtime
Description: Message-passing actors with mailboxes and a scheduler.
Difficulty: Advanced
Topics: concurrency models
Estimated LOC: 700
Libraries: pthread

338. Parallel Matrix Multiply
Description: Multiply large matrices with tiling and threads.
Difficulty: Intermediate
Topics: parallelism, cache blocking
Estimated LOC: 400
Libraries: pthread

339. Barrier & Latch Primitives
Description: Implement reusable barriers and countdown latches.
Difficulty: Intermediate
Topics: synchronization
Estimated LOC: 300
Libraries: pthread

340. Coroutine Library (setjmp/ucontext)
Description: Cooperative coroutines with yield and resume.
Difficulty: Advanced
Topics: context switching
Estimated LOC: 400
Libraries: ucontext.h

341. Parallel Prime Sieve
Description: Segment the sieve across threads for speed.
Difficulty: Intermediate
Topics: parallelism, number theory
Estimated LOC: 350
Libraries: pthread

342. Concurrent Hash Map
Description: Thread-safe hash map with fine-grained locking.
Difficulty: Advanced
Topics: concurrency, hashing
Estimated LOC: 500
Libraries: pthread

343. Work-Stealing Scheduler
Description: Balance tasks across threads with per-thread deques.
Difficulty: Advanced
Topics: scheduling, deques
Estimated LOC: 600
Libraries: pthread

344. Deadlock Detector (runtime)
Description: Instrument locks to detect lock-order cycles at runtime.
Difficulty: Advanced
Topics: graphs, synchronization
Estimated LOC: 500
Libraries: pthread

345. Parallel Image Filter
Description: Apply convolution filters to images across threads.
Difficulty: Intermediate
Topics: parallelism, image processing
Estimated LOC: 400
Libraries: pthread

346. Thread-Safe Logger
Description: Non-blocking logging with a background flush thread.
Difficulty: Intermediate
Topics: queues, threads
Estimated LOC: 400
Libraries: pthread

347. Futures / Promises Library
Description: Async result handles resolved by worker threads.
Difficulty: Advanced
Topics: concurrency abstractions
Estimated LOC: 450
Libraries: pthread

348. Parallel Monte Carlo Simulator
Description: Run independent simulations across cores and merge results.
Difficulty: Intermediate
Topics: parallelism, RNG per-thread
Estimated LOC: 350
Libraries: pthread

349. SIMD-Accelerated Vector Ops
Description: Speed up array math with SSE/AVX intrinsics.
Difficulty: Advanced
Topics: SIMD, intrinsics
Estimated LOC: 400
Libraries: immintrin.h

---

## 16. Memory Management (350–366)

350. Custom malloc/free (free list)
Description: A heap allocator using a free list and sbrk/mmap.
Difficulty: Advanced
Topics: allocators, memory
Estimated LOC: 600
Libraries: unistd.h

351. Arena / Bump Allocator
Description: Fast region allocator with bulk free.
Difficulty: Intermediate
Topics: allocators, lifetimes
Estimated LOC: 250
Libraries: stdlib.h

352. Pool / Slab Allocator
Description: Fixed-size object pool to avoid fragmentation.
Difficulty: Intermediate
Topics: allocators, free lists
Estimated LOC: 300
Libraries: stdlib.h

353. Stack Allocator
Description: LIFO allocator with save/restore markers.
Difficulty: Intermediate
Topics: allocators
Estimated LOC: 250
Libraries: stdlib.h

354. Reference-Counting Smart Pointers
Description: Retain/release semantics with automatic free.
Difficulty: Advanced
Topics: reference counting
Estimated LOC: 350
Libraries: stdlib.h

355. Mark-and-Sweep Garbage Collector
Description: A tracing GC for a managed object graph.
Difficulty: Advanced
Topics: garbage collection
Estimated LOC: 600
Libraries: stdlib.h

356. Generational / Copying GC
Description: Copying collector with young/old generations.
Difficulty: Advanced
Topics: garbage collection
Estimated LOC: 800
Libraries: stdlib.h

357. Memory Leak Detector
Description: Wrap malloc/free to report leaks and double-frees.
Difficulty: Advanced
Topics: instrumentation, hooks
Estimated LOC: 450
Libraries: dlfcn.h

358. Buffer Overflow Guard Allocator
Description: Add guard pages/canaries around allocations.
Difficulty: Advanced
Topics: mprotect, security
Estimated LOC: 400
Libraries: sys/mman.h

359. Memory Debugger (Valgrind-lite)
Description: Track allocations and detect invalid accesses via interposition.
Difficulty: Advanced
Topics: instrumentation, shadow memory
Estimated LOC: 700
Libraries: dlfcn.h

360. Object Pool with Recycling
Description: Reuse expensive objects with acquire/release.
Difficulty: Intermediate
Topics: pooling, lifetimes
Estimated LOC: 300
Libraries: stdlib.h

361. Copy-on-Write Buffer
Description: Share buffers cheaply and copy only on mutation.
Difficulty: Advanced
Topics: COW, reference counting
Estimated LOC: 400
Libraries: stdlib.h

362. Compacting Allocator
Description: Reduce fragmentation by relocating live objects.
Difficulty: Advanced
Topics: memory compaction
Estimated LOC: 600
Libraries: stdlib.h

363. Custom `realloc` Growth Strategy Benchmark
Description: Compare growth factors and their fragmentation impact.
Difficulty: Intermediate
Topics: allocators, benchmarking
Estimated LOC: 350
Libraries: time.h

364. Aligned Allocation Library
Description: Provide cache-line and page-aligned allocations.
Difficulty: Intermediate
Topics: alignment, memory
Estimated LOC: 250
Libraries: stdlib.h

365. Memory Fragmentation Visualizer
Description: Visualize heap layout and fragmentation over time.
Difficulty: Advanced
Topics: allocators, visualization
Estimated LOC: 500
Libraries: ncurses

366. Stack Depth & Overflow Detector
Description: Detect deep recursion and near-stack-overflow conditions.
Difficulty: Advanced
Topics: stack, signals, guard pages
Estimated LOC: 350
Libraries: signal.h

---

## 17. Graphics (SDL2 / Raylib / OpenGL) (367–392)

367. Software Framebuffer Renderer
Description: Plot pixels, lines, and shapes into a raw framebuffer.
Difficulty: Intermediate
Topics: rasterization, Bresenham
Estimated LOC: 500
Libraries: SDL2

368. Line & Circle Rasterizer
Description: Draw primitives using Bresenham and midpoint algorithms.
Difficulty: Intermediate
Topics: rasterization
Estimated LOC: 350
Libraries: SDL2

369. Triangle Rasterizer with Z-Buffer
Description: Fill triangles with depth testing and interpolation.
Difficulty: Advanced
Topics: rasterization, 3D
Estimated LOC: 600
Libraries: SDL2

370. Software 3D Wireframe Renderer
Description: Project and draw 3D models as rotating wireframes.
Difficulty: Advanced
Topics: 3D math, projection
Estimated LOC: 600
Libraries: SDL2

371. Software 3D Renderer with Shading
Description: Flat/Gouraud shading of OBJ models in software.
Difficulty: Advanced
Topics: 3D graphics, lighting
Estimated LOC: 900
Libraries: SDL2

372. Ray Tracer (spheres & planes)
Description: Render scenes with reflections, shadows, and lighting.
Difficulty: Advanced
Topics: ray tracing, vectors
Estimated LOC: 900
Libraries: none (PPM output)

373. Path Tracer
Description: Physically based rendering with Monte Carlo sampling.
Difficulty: Advanced
Topics: global illumination, sampling
Estimated LOC: 1200
Libraries: none (PPM output)

374. OBJ Model Loader & Viewer
Description: Parse Wavefront OBJ and view it with OpenGL.
Difficulty: Advanced
Topics: parsing, OpenGL
Estimated LOC: 700
Libraries: OpenGL, GLFW

375. 2D Particle System
Description: Simulate fire/smoke/sparks with thousands of particles.
Difficulty: Intermediate
Topics: simulation, rendering
Estimated LOC: 500
Libraries: Raylib

376. Fractal Explorer (Mandelbrot/Julia)
Description: Interactive zoomable fractal viewer with color maps.
Difficulty: Intermediate
Topics: complex math, rendering
Estimated LOC: 500
Libraries: SDL2

377. Fluid Simulation (Stam's stable fluids)
Description: Real-time 2D fluid with advection and diffusion.
Difficulty: Advanced
Topics: numerical simulation
Estimated LOC: 800
Libraries: SDL2

378. Cloth / Spring-Mass Simulation
Description: Simulate cloth with constraints and gravity.
Difficulty: Advanced
Topics: physics, integration
Estimated LOC: 600
Libraries: Raylib

379. Boids Flocking Simulation
Description: Emergent flocking from separation/alignment/cohesion.
Difficulty: Intermediate
Topics: simulation, vectors
Estimated LOC: 400
Libraries: Raylib

380. Procedural Terrain Generator
Description: Generate and render terrain from Perlin/Simplex noise.
Difficulty: Advanced
Topics: noise, meshes
Estimated LOC: 700
Libraries: Raylib

381. Voxel Engine (mini-Minecraft)
Description: Render and edit a chunked voxel world.
Difficulty: Advanced
Topics: meshing, chunks, OpenGL
Estimated LOC: 1500
Libraries: OpenGL, GLFW

382. 2D Physics Engine
Description: Rigid-body collisions, impulses, and constraints.
Difficulty: Advanced
Topics: physics, collision detection
Estimated LOC: 1000
Libraries: SDL2

383. Bezier & Spline Editor
Description: Interactively edit and render Bezier/Catmull-Rom curves.
Difficulty: Intermediate
Topics: curves, interpolation
Estimated LOC: 450
Libraries: Raylib

384. Image Viewer with Zoom/Pan
Description: Load and navigate images with smooth zoom.
Difficulty: Intermediate
Topics: textures, input
Estimated LOC: 400
Libraries: SDL2, stb_image

385. Font Renderer (bitmap/TTF)
Description: Rasterize text from bitmap or TrueType fonts.
Difficulty: Advanced
Topics: glyphs, rasterization
Estimated LOC: 700
Libraries: stb_truetype

386. Simple Paint Program
Description: Draw with brushes, colors, layers, and export to PNG.
Difficulty: Intermediate
Topics: input, rendering, files
Estimated LOC: 700
Libraries: SDL2

387. Charting / Plotting Library
Description: Render line, bar, and scatter charts to an image.
Difficulty: Intermediate
Topics: rendering, scaling
Estimated LOC: 600
Libraries: Raylib

388. Marching Squares / Contour Renderer
Description: Extract and draw contour lines from a scalar field.
Difficulty: Advanced
Topics: computational geometry
Estimated LOC: 450
Libraries: SDL2

389. Software Shader Playground
Description: Run per-pixel "shaders" (C callbacks) over a framebuffer.
Difficulty: Advanced
Topics: rendering, function pointers
Estimated LOC: 500
Libraries: SDL2

390. Sprite Animation System
Description: Load sprite sheets and play frame-based animations.
Difficulty: Intermediate
Topics: textures, timing
Estimated LOC: 400
Libraries: Raylib

391. Isometric Tile Renderer
Description: Render and pick tiles in an isometric grid world.
Difficulty: Advanced
Topics: coordinate transforms
Estimated LOC: 600
Libraries: SDL2

392. GPU Compute with OpenGL Compute Shaders
Description: Offload a parallel computation (N-body) to the GPU.
Difficulty: Advanced
Topics: GPGPU, OpenGL
Estimated LOC: 700
Libraries: OpenGL, GLFW

---

## 18. ncurses & Terminal UIs (393–408)

393. Terminal Text Editor (`nano`-lite)
Description: Modal-free editor with cursor movement, edit, and save.
Difficulty: Advanced
Topics: ncurses, buffers, input
Estimated LOC: 800
Libraries: ncurses

394. Vim-like Modal Editor
Description: Editor with normal/insert modes and basic motions.
Difficulty: Advanced
Topics: modal input, buffers
Estimated LOC: 1200
Libraries: ncurses

395. Terminal File Manager (`ranger`-lite)
Description: Navigate directories with a two-pane preview UI.
Difficulty: Advanced
Topics: ncurses, filesystem
Estimated LOC: 900
Libraries: ncurses

396. TUI Dashboard Framework
Description: Composable widgets (boxes, gauges, tables) for TUIs.
Difficulty: Advanced
Topics: layout, widgets
Estimated LOC: 900
Libraries: ncurses

397. Terminal Task Board (Kanban)
Description: Drag tasks across columns with keyboard controls.
Difficulty: Intermediate
Topics: ncurses, state, persistence
Estimated LOC: 600
Libraries: ncurses

398. Terminal Music Player UI
Description: Browse and control playback with a progress bar.
Difficulty: Advanced
Topics: ncurses, audio integration
Estimated LOC: 700
Libraries: ncurses, libao

399. Terminal Spreadsheet
Description: Grid of cells with formulas and dependency recalculation.
Difficulty: Advanced
Topics: parsing, dependency graphs
Estimated LOC: 900
Libraries: ncurses

400. Terminal Hex Editor
Description: View and edit binary files in a hex/ASCII pane.
Difficulty: Advanced
Topics: ncurses, binary I/O
Estimated LOC: 700
Libraries: ncurses

401. Terminal Git Log Browser
Description: Interactively browse commits and diffs.
Difficulty: Advanced
Topics: ncurses, subprocess parsing
Estimated LOC: 700
Libraries: ncurses

402. Terminal Process Manager
Description: Interactive process list with kill/renice actions.
Difficulty: Advanced
Topics: ncurses, /proc
Estimated LOC: 700
Libraries: ncurses

403. Terminal Chart Viewer
Description: Render live line/bar charts from piped data.
Difficulty: Intermediate
Topics: ncurses, plotting
Estimated LOC: 500
Libraries: ncurses

404. TUI Form & Menu Library
Description: Build forms with fields, validation, and menus.
Difficulty: Intermediate
Topics: ncurses forms
Estimated LOC: 500
Libraries: ncurses (form/menu)

405. Terminal Calendar & Agenda
Description: Month view with events and day agenda pane.
Difficulty: Intermediate
Topics: ncurses, date math
Estimated LOC: 500
Libraries: ncurses

406. Terminal Presentation Tool
Description: Show Markdown slides in the terminal with transitions.
Difficulty: Intermediate
Topics: parsing, ncurses
Estimated LOC: 500
Libraries: ncurses

407. Terminal Typing Speed Test
Description: Measure WPM/accuracy with live highlighting.
Difficulty: Beginner
Topics: ncurses, timing
Estimated LOC: 350
Libraries: ncurses

408. TUI Log Tailer with Filters
Description: Follow logs with search, highlight, and level filters.
Difficulty: Intermediate
Topics: ncurses, streaming
Estimated LOC: 500
Libraries: ncurses

---

## 19. Cryptography (409–431)

409. Classical Cipher Suite
Description: Caesar, Vigenère, Playfair, and rail-fence with cryptanalysis.
Difficulty: Intermediate
Topics: substitution ciphers, frequency analysis
Estimated LOC: 500
Libraries: ctype.h

410. XOR Cipher & Key Recovery
Description: Encrypt with repeating-key XOR and break it statistically.
Difficulty: Intermediate
Topics: XOR, frequency analysis
Estimated LOC: 350
Libraries: stdlib.h

411. MD5 Implementation
Description: Implement the MD5 hash from the spec.
Difficulty: Advanced
Topics: hashing, bit operations
Estimated LOC: 400
Libraries: stdint.h

412. SHA-256 Implementation
Description: Implement SHA-256 and verify against test vectors.
Difficulty: Advanced
Topics: hashing, bit operations
Estimated LOC: 400
Libraries: stdint.h

413. SHA-3 / Keccak Implementation
Description: Implement the Keccak sponge and SHA-3 variants.
Difficulty: Advanced
Topics: hashing, permutations
Estimated LOC: 600
Libraries: stdint.h

414. HMAC Library
Description: Compute HMAC over any hash and verify messages.
Difficulty: Intermediate
Topics: MACs, hashing
Estimated LOC: 250
Libraries: stdint.h

415. AES (128/256) Implementation
Description: Implement AES block cipher with ECB/CBC/CTR modes.
Difficulty: Advanced
Topics: block ciphers, GF(2^8)
Estimated LOC: 800
Libraries: stdint.h

416. ChaCha20 + Poly1305 AEAD
Description: Implement authenticated stream encryption.
Difficulty: Advanced
Topics: stream ciphers, AEAD
Estimated LOC: 600
Libraries: stdint.h

417. RSA Key Generation & Encryption
Description: Generate keys and encrypt/sign with big-integer RSA.
Difficulty: Advanced
Topics: number theory, bignum
Estimated LOC: 900
Libraries: GMP (or custom bignum)

418. Diffie-Hellman Key Exchange
Description: Establish a shared secret over an insecure channel.
Difficulty: Advanced
Topics: modular exponentiation
Estimated LOC: 400
Libraries: GMP

419. Elliptic Curve Point Arithmetic
Description: Implement point addition/doubling on curve25519.
Difficulty: Advanced
Topics: ECC, modular math
Estimated LOC: 700
Libraries: stdint.h

420. Base64 / Base32 / Base58 Codec
Description: Encode and decode common binary-to-text encodings.
Difficulty: Beginner
Topics: bit manipulation, encoding
Estimated LOC: 350
Libraries: stdint.h

421. Password Hashing (PBKDF2/bcrypt-style)
Description: Derive keys with salt and configurable iterations.
Difficulty: Advanced
Topics: KDFs, hashing
Estimated LOC: 500
Libraries: stdint.h

422. Shamir's Secret Sharing
Description: Split a secret into shares requiring k-of-n to recover.
Difficulty: Advanced
Topics: polynomials, finite fields
Estimated LOC: 500
Libraries: stdlib.h

423. Digital Signature Tool (sign/verify)
Description: Sign files with a private key and verify signatures.
Difficulty: Advanced
Topics: signatures, hashing
Estimated LOC: 500
Libraries: OpenSSL

424. TOTP / HOTP Authenticator
Description: Generate one-time passwords compatible with 2FA apps.
Difficulty: Intermediate
Topics: HMAC, time-based codes
Estimated LOC: 300
Libraries: stdint.h

425. Cryptographic RNG (CSPRNG)
Description: Gather entropy and produce secure random bytes.
Difficulty: Advanced
Topics: entropy, hashing
Estimated LOC: 350
Libraries: unistd.h

426. Encrypted File Vault
Description: Password-protected vault with authenticated encryption.
Difficulty: Advanced
Topics: AEAD, KDF, file I/O
Estimated LOC: 600
Libraries: libsodium

427. Merkle Tree Builder & Proofs
Description: Build Merkle trees and generate inclusion proofs.
Difficulty: Advanced
Topics: hashing, trees
Estimated LOC: 450
Libraries: stdint.h

428. Steganography Tool (LSB)
Description: Hide and extract messages in image pixels.
Difficulty: Intermediate
Topics: image bytes, bit manipulation
Estimated LOC: 400
Libraries: stb_image

429. One-Time Pad with Key Management
Description: Perfectly-secret encryption with key generation and tracking.
Difficulty: Intermediate
Topics: XOR, key handling
Estimated LOC: 300
Libraries: unistd.h

430. CRC32 / Checksum Library
Description: Implement CRC and Adler checksums with tables.
Difficulty: Intermediate
Topics: polynomial arithmetic
Estimated LOC: 300
Libraries: stdint.h

431. Simple TLS 1.2 Handshake (educational)
Description: Perform a minimal TLS handshake using primitives you built.
Difficulty: Advanced
Topics: TLS, crypto composition
Estimated LOC: 1500
Libraries: (self-built primitives)

---

## 20. Security, Reverse Engineering & Binary Analysis (432–457)

432. Buffer Overflow Demo & Mitigation Lab
Description: Demonstrate and then defend against a stack overflow.
Difficulty: Advanced
Topics: memory safety, canaries
Estimated LOC: 400
Libraries: none

433. Format String Vulnerability Lab
Description: Exploit and fix a printf format-string bug.
Difficulty: Advanced
Topics: vulnerabilities, mitigation
Estimated LOC: 300
Libraries: none

434. Shellcode Loader & Runner
Description: Load and execute position-independent shellcode (for research).
Difficulty: Advanced
Topics: mmap, exec permissions
Estimated LOC: 300
Libraries: sys/mman.h

435. ELF Symbol & Section Dumper (`readelf`-lite)
Description: Parse and display ELF sections, symbols, and relocations.
Difficulty: Advanced
Topics: ELF, binary layout
Estimated LOC: 600
Libraries: elf.h

436. x86 Disassembler (subset)
Description: Decode a subset of x86-64 instructions to assembly.
Difficulty: Advanced
Topics: instruction encoding
Estimated LOC: 900
Libraries: none

437. Simple Debugger (ptrace)
Description: Set breakpoints, single-step, and inspect registers.
Difficulty: Advanced
Topics: ptrace, breakpoints
Estimated LOC: 700
Libraries: sys/ptrace.h

438. Function Hooking / Detour Library
Description: Redirect function calls at runtime by patching prologues.
Difficulty: Advanced
Topics: code patching, mprotect
Estimated LOC: 500
Libraries: sys/mman.h

439. LD_PRELOAD Interposition Toolkit
Description: Intercept libc calls to log or modify behavior.
Difficulty: Advanced
Topics: dynamic linking, hooks
Estimated LOC: 350
Libraries: dlfcn.h

440. PE (Windows Executable) Parser
Description: Parse PE headers, sections, and imports.
Difficulty: Advanced
Topics: PE format, binary layout
Estimated LOC: 600
Libraries: stdint.h

441. Control Flow Graph Extractor
Description: Build a CFG from a disassembled function.
Difficulty: Advanced
Topics: static analysis, graphs
Estimated LOC: 600
Libraries: none

442. Fuzzer (coverage-guided lite)
Description: Mutate inputs and detect crashes in a target program.
Difficulty: Advanced
Topics: fuzzing, instrumentation
Estimated LOC: 600
Libraries: none

443. String & Entropy Scanner (`strings` clone)
Description: Extract printable strings and flag high-entropy regions.
Difficulty: Intermediate
Topics: binary scanning, entropy
Estimated LOC: 350
Libraries: math.h

444. Yara-style Signature Scanner
Description: Match byte/string patterns against files with rules.
Difficulty: Advanced
Topics: pattern matching, rules
Estimated LOC: 600
Libraries: stdlib.h

445. Packer / Unpacker (educational)
Description: Compress+encrypt a binary and unpack it at runtime.
Difficulty: Advanced
Topics: loaders, compression
Estimated LOC: 700
Libraries: zlib

446. ROP Gadget Finder
Description: Scan a binary for useful return-oriented gadgets.
Difficulty: Advanced
Topics: disassembly, exploitation research
Estimated LOC: 500
Libraries: none

447. Anti-Debugging Detection Demo
Description: Detect ptrace/debugger presence and time-based checks.
Difficulty: Advanced
Topics: ptrace, timing
Estimated LOC: 300
Libraries: sys/ptrace.h

448. Simple Antivirus (signature-based)
Description: Scan files against a hash/signature database.
Difficulty: Intermediate
Topics: hashing, scanning
Estimated LOC: 500
Libraries: OpenSSL

449. Network Intrusion Detector (rules)
Description: Match packet patterns and alert on suspicious traffic.
Difficulty: Advanced
Topics: packet parsing, rules
Estimated LOC: 700
Libraries: libpcap

450. Password Strength Auditor
Description: Score passwords and check against common wordlists.
Difficulty: Intermediate
Topics: entropy, dictionaries
Estimated LOC: 350
Libraries: stdlib.h

451. Dictionary/Brute-Force Cracker (own hashes)
Description: Crack self-generated hashed passwords for education.
Difficulty: Intermediate
Topics: hashing, search
Estimated LOC: 400
Libraries: OpenSSL

452. Syscall Auditing Sandbox
Description: Log and restrict syscalls of an untrusted child (ptrace/seccomp).
Difficulty: Advanced
Topics: ptrace, seccomp, security
Estimated LOC: 600
Libraries: seccomp

453. Binary Diffing Tool
Description: Compare two binaries at the function/byte level.
Difficulty: Advanced
Topics: diffing, disassembly
Estimated LOC: 600
Libraries: none

454. Import/Dependency Analyzer (`ldd`-lite)
Description: List shared library dependencies of an executable.
Difficulty: Intermediate
Topics: ELF, dynamic section
Estimated LOC: 400
Libraries: elf.h

455. Heap Exploitation Sandbox
Description: Visualize allocator internals to study heap bugs safely.
Difficulty: Advanced
Topics: allocators, memory safety
Estimated LOC: 600
Libraries: none

456. Capability & Privilege Dropper
Description: Safely drop privileges and Linux capabilities after setup.
Difficulty: Advanced
Topics: capabilities, security
Estimated LOC: 300
Libraries: sys/capability.h

457. Rootkit Detection Scanner (userspace)
Description: Detect hidden processes/files by cross-checking sources.
Difficulty: Advanced
Topics: /proc, anomaly detection
Estimated LOC: 500
Libraries: dirent.h

---

## 21. Image Processing (458–476)

458. PPM/PGM Image Library
Description: Read, write, and manipulate Netpbm images.
Difficulty: Beginner
Topics: image formats, I/O
Estimated LOC: 300
Libraries: stdio.h

459. Image Filter Toolkit
Description: Apply blur, sharpen, edge, and emboss convolutions.
Difficulty: Intermediate
Topics: convolution, kernels
Estimated LOC: 500
Libraries: stb_image

460. Grayscale, Threshold & Histogram
Description: Convert to grayscale and compute/equalize histograms.
Difficulty: Beginner
Topics: pixel math, statistics
Estimated LOC: 350
Libraries: stb_image

461. Image Resizer (bilinear/bicubic)
Description: Scale images with quality interpolation.
Difficulty: Intermediate
Topics: interpolation, sampling
Estimated LOC: 400
Libraries: stb_image

462. Canny Edge Detector
Description: Full Canny pipeline with NMS and hysteresis.
Difficulty: Advanced
Topics: gradients, edge detection
Estimated LOC: 600
Libraries: stb_image

463. Image Rotation & Affine Transform
Description: Rotate/skew images with inverse mapping.
Difficulty: Intermediate
Topics: transforms, sampling
Estimated LOC: 400
Libraries: stb_image

464. Seam Carving (content-aware resize)
Description: Remove low-energy seams to resize without distortion.
Difficulty: Advanced
Topics: dynamic programming, energy maps
Estimated LOC: 600
Libraries: stb_image

465. Median / Bilateral Denoise
Description: Reduce noise while preserving edges.
Difficulty: Intermediate
Topics: filtering, windows
Estimated LOC: 400
Libraries: stb_image

466. Chroma Key (green screen)
Description: Composite a subject onto a new background.
Difficulty: Intermediate
Topics: color spaces, masking
Estimated LOC: 350
Libraries: stb_image

467. Image to ASCII Art
Description: Convert images into shaded ASCII/ANSI art.
Difficulty: Beginner
Topics: sampling, mapping
Estimated LOC: 300
Libraries: stb_image

468. Dithering (Floyd-Steinberg)
Description: Reduce color depth with error-diffusion dithering.
Difficulty: Intermediate
Topics: quantization, dithering
Estimated LOC: 350
Libraries: stb_image

469. Connected Component Labeling
Description: Segment and label distinct regions in a binary image.
Difficulty: Intermediate
Topics: union-find, flood fill
Estimated LOC: 400
Libraries: stb_image

470. Hough Transform (lines/circles)
Description: Detect lines and circles via the Hough transform.
Difficulty: Advanced
Topics: accumulators, geometry
Estimated LOC: 500
Libraries: stb_image

471. Image Morphing / Blending
Description: Cross-dissolve and warp between two images.
Difficulty: Advanced
Topics: interpolation, warping
Estimated LOC: 500
Libraries: stb_image

472. Barcode / QR Decoder
Description: Detect and decode 1D/2D codes from an image.
Difficulty: Advanced
Topics: image processing, decoding
Estimated LOC: 900
Libraries: stb_image

473. Panorama Stitcher (basic)
Description: Align and blend overlapping photos into a panorama.
Difficulty: Advanced
Topics: feature matching, homography
Estimated LOC: 900
Libraries: stb_image

474. Color Palette Extractor (k-means)
Description: Extract dominant colors via k-means clustering.
Difficulty: Intermediate
Topics: clustering
Estimated LOC: 400
Libraries: stb_image

475. Image Format Converter
Description: Convert between PNG/JPG/BMP/PPM.
Difficulty: Intermediate
Topics: codecs, I/O
Estimated LOC: 350
Libraries: stb_image, stb_image_write

476. Real-Time Webcam Filter (V4L2)
Description: Capture webcam frames and apply live filters.
Difficulty: Advanced
Topics: V4L2, image processing
Estimated LOC: 700
Libraries: linux/videodev2.h, SDL2

---

## 22. Audio & Signal Processing (477–492)

477. WAV Tone Generator
Description: Synthesize sine/square/saw tones to a WAV file.
Difficulty: Beginner
Topics: audio, sampling
Estimated LOC: 300
Libraries: stdint.h

478. Audio Playback Engine
Description: Stream PCM audio to speakers with a callback API.
Difficulty: Intermediate
Topics: audio output, buffering
Estimated LOC: 400
Libraries: PortAudio (or SDL2)

479. Real-Time Spectrum Analyzer
Description: Show a live FFT spectrum of microphone input.
Difficulty: Advanced
Topics: FFT, audio input
Estimated LOC: 600
Libraries: PortAudio, ncurses

480. Digital Audio Filters (EQ)
Description: Implement low/high/band-pass biquad filters.
Difficulty: Advanced
Topics: DSP, filter design
Estimated LOC: 500
Libraries: math.h

481. Audio Effects Rack
Description: Add reverb, delay, distortion, and chorus effects.
Difficulty: Advanced
Topics: DSP, buffers
Estimated LOC: 700
Libraries: PortAudio

482. Metronome & Beat Generator
Description: Precisely timed click track with adjustable BPM.
Difficulty: Beginner
Topics: timing, audio
Estimated LOC: 250
Libraries: SDL2

483. Pitch Detector (autocorrelation)
Description: Estimate the fundamental frequency of a note.
Difficulty: Advanced
Topics: DSP, autocorrelation
Estimated LOC: 450
Libraries: math.h

484. Guitar Tuner
Description: Detect pitch and show tuning offset in real time.
Difficulty: Advanced
Topics: DSP, audio input
Estimated LOC: 500
Libraries: PortAudio

485. Simple Synthesizer (subtractive)
Description: Play notes from the keyboard with oscillators and ADSR.
Difficulty: Advanced
Topics: synthesis, envelopes
Estimated LOC: 700
Libraries: PortAudio, SDL2

486. MIDI File Parser & Player
Description: Parse MIDI files and synthesize the notes.
Difficulty: Advanced
Topics: MIDI format, synthesis
Estimated LOC: 700
Libraries: PortAudio

487. DTMF Encoder/Decoder
Description: Generate and detect phone touch-tone signals.
Difficulty: Intermediate
Topics: Goertzel algorithm, DSP
Estimated LOC: 400
Libraries: math.h

488. Audio Waveform Visualizer
Description: Draw scrolling waveforms of live or file audio.
Difficulty: Intermediate
Topics: rendering, audio
Estimated LOC: 450
Libraries: SDL2

489. Sample Rate Converter (resampler)
Description: Resample audio with windowed-sinc interpolation.
Difficulty: Advanced
Topics: DSP, interpolation
Estimated LOC: 500
Libraries: math.h

490. Voice Activity Detector
Description: Detect speech vs silence in an audio stream.
Difficulty: Intermediate
Topics: energy/zero-crossing analysis
Estimated LOC: 350
Libraries: math.h

491. Simple Audio Compressor/Limiter
Description: Apply dynamic range compression to audio.
Difficulty: Advanced
Topics: DSP, envelope following
Estimated LOC: 450
Libraries: math.h

492. Morse Code Audio Encoder/Decoder
Description: Convert text to Morse beeps and decode them back.
Difficulty: Intermediate
Topics: timing, DSP, encoding
Estimated LOC: 400
Libraries: SDL2

---

## 23. Compression (493–505)

493. Run-Length Encoding
Description: Compress and decompress data with RLE.
Difficulty: Beginner
Topics: encoding, streams
Estimated LOC: 200
Libraries: stdio.h

494. Huffman File Compressor
Description: Full Huffman codec with a serialized code table.
Difficulty: Advanced
Topics: greedy, trees, bit I/O
Estimated LOC: 600
Libraries: stdlib.h

495. LZ77 Compressor
Description: Sliding-window dictionary compression.
Difficulty: Advanced
Topics: LZ77, windows
Estimated LOC: 600
Libraries: stdlib.h

496. LZ78 / LZW Compressor
Description: Dictionary-building compression like GIF/compress.
Difficulty: Advanced
Topics: LZW, dictionaries
Estimated LOC: 500
Libraries: stdlib.h

497. DEFLATE Implementation
Description: Combine LZ77 and Huffman like gzip's DEFLATE.
Difficulty: Advanced
Topics: LZ77, Huffman, bit streams
Estimated LOC: 1000
Libraries: stdlib.h

498. Arithmetic Coder
Description: Range/arithmetic coding for near-entropy compression.
Difficulty: Advanced
Topics: entropy coding, probability
Estimated LOC: 600
Libraries: stdlib.h

499. Burrows-Wheeler Transform + MTF
Description: Implement BWT, MTF, and RLE like the bzip2 pipeline.
Difficulty: Advanced
Topics: transforms, suffix arrays
Estimated LOC: 700
Libraries: stdlib.h

500. gzip File Reader/Writer
Description: Read and write .gz files (header + DEFLATE).
Difficulty: Advanced
Topics: gzip format, CRC32
Estimated LOC: 800
Libraries: (self-built DEFLATE)

501. ZIP Archive Reader/Writer
Description: Create and extract ZIP archives with stored/deflated entries.
Difficulty: Advanced
Topics: ZIP format, CRC, compression
Estimated LOC: 900
Libraries: zlib

502. Delta Encoding Tool
Description: Compute and apply binary diffs between file versions.
Difficulty: Intermediate
Topics: diffing, patching
Estimated LOC: 500
Libraries: stdlib.h

503. Image-Specific Compressor
Description: Compress images with prediction + entropy coding (PNG-like).
Difficulty: Advanced
Topics: filters, entropy coding
Estimated LOC: 700
Libraries: stb_image

504. Dictionary Compression Benchmark
Description: Compare RLE/Huffman/LZ ratios and speeds on datasets.
Difficulty: Intermediate
Topics: benchmarking, compression
Estimated LOC: 400
Libraries: time.h

505. Streaming Compressor (chunked)
Description: Compress unbounded streams with framing and flushing.
Difficulty: Advanced
Topics: streaming, framing
Estimated LOC: 600
Libraries: zlib

---

## 24. Database Systems (506–524)

506. Key-Value Store (in-memory)
Description: A hash-backed KV store with get/set/delete.
Difficulty: Intermediate
Topics: hashing, APIs
Estimated LOC: 400
Libraries: stdlib.h

507. Persistent KV Store (log-structured)
Description: Append-only log KV store with compaction (Bitcask-style).
Difficulty: Advanced
Topics: WAL, indexing, compaction
Estimated LOC: 700
Libraries: stdio.h

508. LSM-Tree Storage Engine
Description: MemTable + SSTables with merges like LevelDB.
Difficulty: Advanced
Topics: LSM trees, compaction
Estimated LOC: 1200
Libraries: stdlib.h

509. B-Tree Disk Index
Description: On-disk B+tree supporting inserts and range scans.
Difficulty: Advanced
Topics: paging, B-trees
Estimated LOC: 1000
Libraries: stdio.h

510. Write-Ahead Log & Recovery
Description: Durable WAL with crash recovery and checkpoints.
Difficulty: Advanced
Topics: durability, recovery
Estimated LOC: 600
Libraries: fsync

511. SQL Query Parser
Description: Parse a subset of SQL into an AST.
Difficulty: Advanced
Topics: lexing, parsing
Estimated LOC: 800
Libraries: stdlib.h

512. Mini SQL Database Engine
Description: Parse, plan, and execute SELECT/INSERT with a storage engine.
Difficulty: Advanced
Topics: databases, execution
Estimated LOC: 2000
Libraries: stdlib.h

513. Query Optimizer (cost-based)
Description: Reorder joins and choose indexes by estimated cost.
Difficulty: Advanced
Topics: optimization, statistics
Estimated LOC: 800
Libraries: stdlib.h

514. Buffer Pool / Page Cache Manager
Description: Cache disk pages with LRU/clock eviction and dirty flushing.
Difficulty: Advanced
Topics: caching, paging
Estimated LOC: 600
Libraries: stdio.h

515. Transaction Manager (MVCC)
Description: Provide snapshot isolation with multi-version records.
Difficulty: Advanced
Topics: MVCC, isolation
Estimated LOC: 900
Libraries: stdlib.h

516. Time-Series Database
Description: Ingest and query timestamped metrics with downsampling.
Difficulty: Advanced
Topics: storage, aggregation
Estimated LOC: 900
Libraries: stdlib.h

517. Document Store (JSON)
Description: Store, index, and query JSON documents by field.
Difficulty: Advanced
Topics: JSON, indexing
Estimated LOC: 900
Libraries: (self-built JSON)

518. Graph Database (basic)
Description: Store nodes/edges and run traversal queries.
Difficulty: Advanced
Topics: graphs, storage
Estimated LOC: 900
Libraries: stdlib.h

519. Inverted Index Search Engine
Description: Index documents and rank results with TF-IDF.
Difficulty: Advanced
Topics: indexing, ranking
Estimated LOC: 800
Libraries: stdlib.h

520. Columnar Storage Engine
Description: Store data by column with compression and vectorized scans.
Difficulty: Advanced
Topics: column stores, compression
Estimated LOC: 800
Libraries: stdlib.h

521. Redis-lite Server
Description: Serve GET/SET/LPUSH over the RESP protocol via sockets.
Difficulty: Advanced
Topics: networking, data structures
Estimated LOC: 1000
Libraries: sys/socket.h

522. Bloom-Filter-Backed Cache
Description: Avoid disk lookups for absent keys with a Bloom filter.
Difficulty: Intermediate
Topics: probabilistic structures
Estimated LOC: 500
Libraries: stdlib.h

523. Replication & Log Shipping
Description: Replicate a KV store to a follower over the network.
Difficulty: Advanced
Topics: replication, networking
Estimated LOC: 800
Libraries: sys/socket.h

524. Database CLI & REPL
Description: Interactive client to run queries against your engine.
Difficulty: Intermediate
Topics: REPL, parsing
Estimated LOC: 400
Libraries: readline

---

## 25. Compilers, Interpreters & Virtual Machines (525–553)

525. Reverse Polish (RPN) Calculator VM
Description: Evaluate postfix expressions on a small stack machine.
Difficulty: Beginner
Topics: stacks, evaluation
Estimated LOC: 250
Libraries: stdlib.h

526. Tokenizer / Lexer Library
Description: Reusable lexer producing tokens with positions.
Difficulty: Intermediate
Topics: lexing, state machines
Estimated LOC: 400
Libraries: stdlib.h

527. Recursive Descent Expression Parser
Description: Parse arithmetic into an AST with precedence.
Difficulty: Intermediate
Topics: parsing, ASTs
Estimated LOC: 400
Libraries: stdlib.h

528. Pratt Parser
Description: Parse expressions with a Pratt (precedence-climbing) parser.
Difficulty: Intermediate
Topics: parsing
Estimated LOC: 400
Libraries: stdlib.h

529. Brainfuck Interpreter & Optimizer
Description: Run Brainfuck with loop-collapsing optimizations.
Difficulty: Beginner
Topics: interpreters, tape machines
Estimated LOC: 300
Libraries: stdio.h

530. Brainfuck-to-C Compiler
Description: Transpile Brainfuck into compilable C.
Difficulty: Intermediate
Topics: code generation
Estimated LOC: 300
Libraries: stdio.h

531. Lisp / Scheme Interpreter
Description: Parse S-expressions and evaluate with closures.
Difficulty: Advanced
Topics: interpreters, environments
Estimated LOC: 1000
Libraries: stdlib.h

532. Forth Interpreter
Description: A threaded, stack-based Forth with a dictionary.
Difficulty: Advanced
Topics: stack VMs, dictionaries
Estimated LOC: 800
Libraries: stdlib.h

533. Tree-Walking Scripting Language
Description: Full language with variables, functions, and control flow.
Difficulty: Advanced
Topics: interpreters, scoping
Estimated LOC: 1500
Libraries: stdlib.h

534. Bytecode Compiler & VM
Description: Compile a language to bytecode and run it on a VM.
Difficulty: Advanced
Topics: bytecode, stack VMs
Estimated LOC: 2000
Libraries: stdlib.h

535. Register-Based Virtual Machine
Description: A register VM with an instruction set and assembler.
Difficulty: Advanced
Topics: VM design, ISA
Estimated LOC: 1200
Libraries: stdlib.h

536. Stack-Based Bytecode Assembler
Description: Assemble textual mnemonics into VM bytecode.
Difficulty: Intermediate
Topics: assembling, encoding
Estimated LOC: 500
Libraries: stdlib.h

537. Garbage-Collected Language Runtime
Description: Add tracing GC to your interpreter's objects.
Difficulty: Advanced
Topics: GC, runtimes
Estimated LOC: 800
Libraries: stdlib.h

538. Static Type Checker
Description: Infer/check types for a small language before running.
Difficulty: Advanced
Topics: type systems, inference
Estimated LOC: 900
Libraries: stdlib.h

539. C Subset Compiler to Assembly
Description: Compile a C subset to x86-64 assembly.
Difficulty: Advanced
Topics: codegen, calling conventions
Estimated LOC: 3000
Libraries: stdlib.h

540. JSON Query Language (JQ-lite)
Description: Evaluate a path/filter language over JSON.
Difficulty: Advanced
Topics: parsing, evaluation
Estimated LOC: 800
Libraries: (self-built JSON)

541. Regular Expression Compiler to NFA/DFA
Description: Compile regexes to automata and match with them.
Difficulty: Advanced
Topics: automata, compilation
Estimated LOC: 700
Libraries: stdlib.h

542. Calculator Language with JIT (dynasm-free)
Description: Emit machine code for expressions and execute it.
Difficulty: Advanced
Topics: JIT, machine code
Estimated LOC: 700
Libraries: sys/mman.h

543. Peephole Optimizer
Description: Apply local optimizations to a bytecode/IR stream.
Difficulty: Advanced
Topics: optimization
Estimated LOC: 500
Libraries: stdlib.h

544. Constant Folding & Dead Code Elimination
Description: Simplify an AST/IR before code generation.
Difficulty: Advanced
Topics: optimization, IR
Estimated LOC: 500
Libraries: stdlib.h

545. SSA IR Builder
Description: Convert a control-flow graph into SSA form.
Difficulty: Advanced
Topics: compiler IR, dominance
Estimated LOC: 900
Libraries: stdlib.h

546. Register Allocator (graph coloring)
Description: Allocate registers by coloring an interference graph.
Difficulty: Advanced
Topics: graph coloring, compilers
Estimated LOC: 700
Libraries: stdlib.h

547. Parser Generator (mini-yacc)
Description: Generate a parser from a grammar specification.
Difficulty: Advanced
Topics: LR/LL parsing, codegen
Estimated LOC: 1200
Libraries: stdlib.h

548. Lexer Generator (mini-lex)
Description: Generate a scanner from regex rules.
Difficulty: Advanced
Topics: automata, codegen
Estimated LOC: 900
Libraries: stdlib.h

549. Template/Macro Preprocessor (`cpp`-lite)
Description: Implement #include, #define, and conditionals.
Difficulty: Advanced
Topics: preprocessing, macros
Estimated LOC: 800
Libraries: stdlib.h

550. Query Language for CSV (SQL-on-files)
Description: Run SELECT/WHERE/GROUP BY over CSV files.
Difficulty: Advanced
Topics: parsing, execution
Estimated LOC: 900
Libraries: stdlib.h

551. WebAssembly Interpreter (subset)
Description: Parse and execute a subset of WASM bytecode.
Difficulty: Advanced
Topics: bytecode, stack VMs
Estimated LOC: 1500
Libraries: stdlib.h

552. Markup Language Compiler (config DSL)
Description: Compile a custom DSL into a runtime config structure.
Difficulty: Advanced
Topics: DSLs, parsing
Estimated LOC: 700
Libraries: stdlib.h

553. Interactive Language REPL with Errors
Description: A REPL with helpful error messages and line editing.
Difficulty: Advanced
Topics: interpreters, UX
Estimated LOC: 700
Libraries: readline

---

## 26. Emulators (554–566)

554. CHIP-8 Emulator
Description: Emulate the CHIP-8 virtual machine and run ROMs.
Difficulty: Intermediate
Topics: opcode decoding, emulation
Estimated LOC: 700
Libraries: SDL2

555. Intel 8080 CPU Emulator
Description: Emulate the 8080 and run Space Invaders.
Difficulty: Advanced
Topics: CPU emulation
Estimated LOC: 1500
Libraries: SDL2

556. MOS 6502 CPU Emulator
Description: Cycle-accurate 6502 emulator with a test suite.
Difficulty: Advanced
Topics: CPU emulation, cycles
Estimated LOC: 1800
Libraries: none

557. NES Emulator (subset)
Description: Emulate 6502 + PPU to run simple NES games.
Difficulty: Advanced
Topics: emulation, graphics
Estimated LOC: 4000
Libraries: SDL2

558. Game Boy Emulator (subset)
Description: Emulate the LR35902 CPU and render the LCD.
Difficulty: Advanced
Topics: emulation, timing
Estimated LOC: 5000
Libraries: SDL2

559. Z80 CPU Emulator
Description: Emulate the Z80 for retro-computer targets.
Difficulty: Advanced
Topics: CPU emulation
Estimated LOC: 2000
Libraries: none

560. Simple RISC-V (RV32I) Emulator
Description: Execute RV32I instructions and run compiled ELF.
Difficulty: Advanced
Topics: ISA emulation, ELF
Estimated LOC: 1500
Libraries: elf.h

561. Fantasy Console (PICO-8-like)
Description: A tiny virtual console with a scripting API and display.
Difficulty: Advanced
Topics: VM, graphics, scripting
Estimated LOC: 2500
Libraries: SDL2

562. Assembler for Your Emulated CPU
Description: Assemble source into ROMs for your emulator.
Difficulty: Intermediate
Topics: assembling
Estimated LOC: 600
Libraries: stdlib.h

563. Terminal (VT100) Emulator
Description: Interpret ANSI/VT100 escape sequences into a screen buffer.
Difficulty: Advanced
Topics: terminal protocols, pty
Estimated LOC: 1200
Libraries: SDL2, pty.h

564. Simple GPU / Blitter Simulator
Description: Model a 2D blitter with sprites and layers.
Difficulty: Advanced
Topics: hardware modeling
Estimated LOC: 700
Libraries: SDL2

565. Retro Sound Chip Emulator (AY/SID-like)
Description: Emulate a programmable sound generator and play tunes.
Difficulty: Advanced
Topics: audio synthesis, emulation
Estimated LOC: 800
Libraries: SDL2

566. Debugger for Your Emulator
Description: Step, breakpoint, and inspect memory/registers of an emulated CPU.
Difficulty: Advanced
Topics: debugging, emulation
Estimated LOC: 700
Libraries: ncurses

---

## 27. Embedded, IoT & Robotics (567–590)

567. GPIO Blink & Button (Raspberry Pi)
Description: Blink an LED and read a button via sysfs/gpiod.
Difficulty: Beginner
Topics: GPIO, embedded I/O
Estimated LOC: 200
Libraries: libgpiod

568. PWM LED Dimmer / Servo Driver
Description: Control LED brightness and servo angle with PWM.
Difficulty: Intermediate
Topics: PWM, timing
Estimated LOC: 250
Libraries: pigpio

569. I2C Sensor Reader
Description: Read temperature/humidity from an I2C sensor.
Difficulty: Intermediate
Topics: I2C, protocols
Estimated LOC: 300
Libraries: linux/i2c-dev.h

570. SPI Device Driver (userspace)
Description: Communicate with an SPI display or ADC.
Difficulty: Intermediate
Topics: SPI, protocols
Estimated LOC: 350
Libraries: linux/spi/spidev.h

571. UART Serial Communication
Description: Send/receive framed data over a serial port.
Difficulty: Intermediate
Topics: serial, termios
Estimated LOC: 350
Libraries: termios.h

572. Bare-Metal Blinky (STM32/AVR)
Description: Toggle a pin with no OS by writing registers directly.
Difficulty: Advanced
Topics: registers, freestanding
Estimated LOC: 200
Libraries: CMSIS / avr-libc

573. Bare-Metal UART Driver
Description: Implement UART TX/RX by poking peripheral registers.
Difficulty: Advanced
Topics: MMIO, drivers
Estimated LOC: 350
Libraries: none (freestanding)

574. RTOS Task Scheduler (bare-metal)
Description: Cooperative/preemptive scheduler for a microcontroller.
Difficulty: Advanced
Topics: context switching, timers
Estimated LOC: 600
Libraries: CMSIS

575. Ring Buffer for ISR Data
Description: Interrupt-safe buffer for streaming sensor data.
Difficulty: Intermediate
Topics: ISRs, buffers
Estimated LOC: 250
Libraries: none (freestanding)

576. Debounce & Input State Machine
Description: Debounce buttons and detect long/short presses.
Difficulty: Intermediate
Topics: state machines, timing
Estimated LOC: 250
Libraries: none

577. PID Motor Controller
Description: Control motor speed/position with a tuned PID loop.
Difficulty: Advanced
Topics: control theory, PID
Estimated LOC: 400
Libraries: none

578. Line-Following Robot Logic
Description: Steer a robot using IR sensor input and PID.
Difficulty: Advanced
Topics: robotics, control
Estimated LOC: 450
Libraries: pigpio

579. Ultrasonic Distance Radar
Description: Map distances with an ultrasonic sensor on a servo.
Difficulty: Intermediate
Topics: sensors, timing
Estimated LOC: 400
Libraries: pigpio

580. IMU Sensor Fusion (complementary filter)
Description: Fuse accelerometer/gyro data into stable orientation.
Difficulty: Advanced
Topics: sensor fusion, math
Estimated LOC: 450
Libraries: linux/i2c-dev.h

581. MQTT Client (from scratch)
Description: Publish/subscribe to an MQTT broker over TCP.
Difficulty: Advanced
Topics: MQTT protocol, networking
Estimated LOC: 700
Libraries: sys/socket.h

582. CoAP Client/Server
Description: Implement constrained-device messaging over UDP.
Difficulty: Advanced
Topics: CoAP, UDP
Estimated LOC: 700
Libraries: sys/socket.h

583. Home Automation Hub
Description: Aggregate sensors and expose control via a REST API.
Difficulty: Advanced
Topics: IoT, HTTP, devices
Estimated LOC: 1000
Libraries: sys/socket.h

584. OTA Firmware Updater
Description: Download and flash firmware with rollback safety.
Difficulty: Advanced
Topics: flashing, integrity
Estimated LOC: 700
Libraries: OpenSSL

585. Modbus RTU/TCP Master
Description: Poll industrial devices over Modbus.
Difficulty: Advanced
Topics: Modbus, protocols
Estimated LOC: 600
Libraries: termios.h

586. Data Logger to SD/Flash
Description: Log timestamped sensor data with wear-friendly writes.
Difficulty: Intermediate
Topics: storage, timing
Estimated LOC: 400
Libraries: stdio.h

587. Low-Power Sleep Scheduler
Description: Duty-cycle a device between sleep and sampling.
Difficulty: Advanced
Topics: power management, timers
Estimated LOC: 350
Libraries: none (freestanding)

588. Robot Kinematics Solver
Description: Compute forward/inverse kinematics for a robot arm.
Difficulty: Advanced
Topics: robotics, linear algebra
Estimated LOC: 600
Libraries: math.h

589. CAN Bus Message Decoder
Description: Read and decode CAN frames on a vehicle bus.
Difficulty: Advanced
Topics: CAN, protocols
Estimated LOC: 500
Libraries: linux/can.h

590. Bootloader with Firmware Verification
Description: A small bootloader that verifies and jumps to signed firmware.
Difficulty: Advanced
Topics: bootloaders, crypto
Estimated LOC: 600
Libraries: (self-built crypto)

---

## 28. Artificial Intelligence & Machine Learning (591–611)

591. Perceptron & Logistic Regression
Description: Train a linear classifier with gradient descent.
Difficulty: Intermediate
Topics: ML basics, gradients
Estimated LOC: 350
Libraries: math.h

592. K-Nearest Neighbors Classifier
Description: Classify points by nearest labeled neighbors.
Difficulty: Beginner
Topics: distance metrics
Estimated LOC: 300
Libraries: math.h

593. K-Means Clustering
Description: Cluster data with Lloyd's algorithm and visualization.
Difficulty: Intermediate
Topics: clustering
Estimated LOC: 400
Libraries: math.h

594. Decision Tree Learner
Description: Build classification trees using information gain.
Difficulty: Intermediate
Topics: trees, entropy
Estimated LOC: 500
Libraries: math.h

595. Naive Bayes Text Classifier
Description: Classify documents (e.g. spam) with Naive Bayes.
Difficulty: Intermediate
Topics: probability, NLP
Estimated LOC: 450
Libraries: stdlib.h

596. Feedforward Neural Network
Description: Train an MLP with backpropagation on MNIST.
Difficulty: Advanced
Topics: neural networks, backprop
Estimated LOC: 700
Libraries: math.h

597. Autograd / Tensor Engine (micro)
Description: Reverse-mode automatic differentiation over a tensor graph.
Difficulty: Advanced
Topics: autodiff, graphs
Estimated LOC: 800
Libraries: math.h

598. Convolutional Neural Network
Description: Implement conv/pool layers and train an image classifier.
Difficulty: Advanced
Topics: CNNs, convolution
Estimated LOC: 1200
Libraries: math.h

599. Recurrent Network / LSTM
Description: Train an RNN/LSTM for character-level text generation.
Difficulty: Advanced
Topics: sequence models
Estimated LOC: 1000
Libraries: math.h

600. Linear SVM (SGD)
Description: Train a support vector machine with hinge loss.
Difficulty: Advanced
Topics: optimization, ML
Estimated LOC: 500
Libraries: math.h

601. Q-Learning Agent
Description: Learn to solve gridworld/CartPole via tabular Q-learning.
Difficulty: Intermediate
Topics: reinforcement learning
Estimated LOC: 450
Libraries: stdlib.h

602. Minimax + Alpha-Beta Game AI
Description: A reusable adversarial search engine for board games.
Difficulty: Advanced
Topics: game trees, pruning
Estimated LOC: 500
Libraries: stdlib.h

603. Monte Carlo Tree Search
Description: Implement MCTS for games like Connect Four/Go-lite.
Difficulty: Advanced
Topics: search, simulation
Estimated LOC: 600
Libraries: math.h

604. Genetic Programming Evolver
Description: Evolve programs/expressions to fit target functions.
Difficulty: Advanced
Topics: evolutionary computation
Estimated LOC: 700
Libraries: stdlib.h

605. N-Gram Language Model
Description: Train and sample from an n-gram model for text.
Difficulty: Intermediate
Topics: NLP, probability
Estimated LOC: 400
Libraries: stdlib.h

606. Recommendation Engine (collaborative filtering)
Description: Recommend items using matrix factorization.
Difficulty: Advanced
Topics: linear algebra, ML
Estimated LOC: 600
Libraries: math.h

607. Principal Component Analysis
Description: Reduce dimensionality via eigen-decomposition.
Difficulty: Advanced
Topics: linear algebra
Estimated LOC: 500
Libraries: math.h

608. Simple Neural Net Inference Engine
Description: Load trained weights and run inference (no training).
Difficulty: Intermediate
Topics: inference, matrices
Estimated LOC: 400
Libraries: math.h

609. Handwritten Digit Recognizer (end-to-end)
Description: Train and demo a digit classifier with a drawing UI.
Difficulty: Advanced
Topics: ML, GUI integration
Estimated LOC: 1000
Libraries: math.h, SDL2

610. Anomaly Detector (statistical)
Description: Flag outliers in streams via z-score/EWMA.
Difficulty: Intermediate
Topics: statistics, streaming
Estimated LOC: 350
Libraries: math.h

611. Tiny Tensor Library (BLAS-lite)
Description: N-dim arrays with broadcasting and matmul for ML.
Difficulty: Advanced
Topics: tensors, numerical computing
Estimated LOC: 900
Libraries: math.h

---

## 29. Parsers & Serialization (612–627)

612. Binary Serialization Library
Description: Serialize/deserialize structs to a compact binary format.
Difficulty: Intermediate
Topics: serialization, endianness
Estimated LOC: 400
Libraries: stdint.h

613. Protocol Buffers Decoder (subset)
Description: Decode protobuf wire format into fields.
Difficulty: Advanced
Topics: varints, wire formats
Estimated LOC: 500
Libraries: stdint.h

614. MessagePack Codec
Description: Encode/decode the MessagePack binary format.
Difficulty: Intermediate
Topics: serialization
Estimated LOC: 500
Libraries: stdint.h

615. YAML Parser (subset)
Description: Parse a practical subset of YAML into a value tree.
Difficulty: Advanced
Topics: parsing, indentation
Estimated LOC: 800
Libraries: stdlib.h

616. TOML Parser
Description: Parse TOML config files into typed values.
Difficulty: Advanced
Topics: parsing
Estimated LOC: 700
Libraries: stdlib.h

617. XML Parser & DOM
Description: Parse XML into a navigable DOM tree.
Difficulty: Advanced
Topics: parsing, trees
Estimated LOC: 800
Libraries: stdlib.h

618. CSV ↔ JSON ↔ YAML Converter
Description: Convert data between common formats.
Difficulty: Intermediate
Topics: parsing, serialization
Estimated LOC: 600
Libraries: (self-built parsers)

619. Bencode (BitTorrent) Codec
Description: Encode/decode bencoded data.
Difficulty: Intermediate
Topics: serialization
Estimated LOC: 350
Libraries: stdlib.h

620. ASN.1 / DER Decoder (subset)
Description: Parse DER-encoded structures (e.g. certificates).
Difficulty: Advanced
Topics: TLV parsing
Estimated LOC: 700
Libraries: stdint.h

621. S-Expression Parser
Description: Parse and print Lisp-style S-expressions.
Difficulty: Intermediate
Topics: parsing, trees
Estimated LOC: 400
Libraries: stdlib.h

622. Schema Validator
Description: Validate JSON documents against a schema.
Difficulty: Advanced
Topics: validation, recursion
Estimated LOC: 700
Libraries: (self-built JSON)

623. Config Reload & Hot-Swap Library
Description: Watch and safely reload config without restart.
Difficulty: Intermediate
Topics: parsing, inotify
Estimated LOC: 400
Libraries: sys/inotify.h

624. URL & Query String Parser
Description: Parse and build URLs with percent-encoding.
Difficulty: Beginner
Topics: parsing, encoding
Estimated LOC: 300
Libraries: stdlib.h

625. HTTP Header & MIME Parser
Description: Robustly parse headers, tokens, and MIME types.
Difficulty: Intermediate
Topics: parsing, HTTP
Estimated LOC: 400
Libraries: stdlib.h

626. Log Format Parser (Apache/nginx)
Description: Parse access logs into structured records for analysis.
Difficulty: Intermediate
Topics: parsing, regex
Estimated LOC: 400
Libraries: regex.h

627. Binary Grammar / Kaitai-style Reader
Description: Describe a binary format declaratively and parse it.
Difficulty: Advanced
Topics: DSLs, binary parsing
Estimated LOC: 800
Libraries: stdlib.h

---

## 30. Developer Tools (628–648)

628. Argument Parser Library (getopt++)
Description: Declarative CLI parsing with subcommands and help text.
Difficulty: Intermediate
Topics: CLI design, parsing
Estimated LOC: 500
Libraries: stdlib.h

629. Logging Framework (levels/sinks)
Description: Structured logging with levels, sinks, and formatting.
Difficulty: Intermediate
Topics: logging, design
Estimated LOC: 450
Libraries: stdio.h

630. Config Management Library
Description: Layer defaults, files, env, and flags into one config.
Difficulty: Intermediate
Topics: config, precedence
Estimated LOC: 450
Libraries: stdlib.h

631. Hot-Reload File Watcher for Dev
Description: Rebuild/restart a target when source files change.
Difficulty: Intermediate
Topics: inotify, subprocess
Estimated LOC: 400
Libraries: sys/inotify.h

632. Code Line Counter (`cloc`-lite)
Description: Count code/comment/blank lines by language.
Difficulty: Intermediate
Topics: parsing, stats
Estimated LOC: 450
Libraries: dirent.h

633. Dependency Graph Visualizer
Description: Parse #include graphs and export to DOT/Graphviz.
Difficulty: Intermediate
Topics: parsing, graphs
Estimated LOC: 450
Libraries: stdlib.h

634. Code Formatter (C)
Description: Reformat C source with configurable style rules.
Difficulty: Advanced
Topics: lexing, formatting
Estimated LOC: 800
Libraries: stdlib.h

635. Static Analyzer / Linter (C)
Description: Flag common bugs (unused vars, null derefs) via AST checks.
Difficulty: Advanced
Topics: static analysis, parsing
Estimated LOC: 1000
Libraries: stdlib.h

636. Documentation Generator (Doxygen-lite)
Description: Extract doc comments and emit HTML/Markdown docs.
Difficulty: Intermediate
Topics: parsing, output
Estimated LOC: 600
Libraries: stdlib.h

637. Benchmark Harness Library
Description: Time functions, warm up, and report stable statistics.
Difficulty: Intermediate
Topics: benchmarking, statistics
Estimated LOC: 400
Libraries: time.h

638. Crash Reporter (backtrace on signal)
Description: Catch faults and print a symbolized stack trace.
Difficulty: Advanced
Topics: signals, backtrace
Estimated LOC: 400
Libraries: execinfo.h

639. Assertion & Contract Library
Description: Rich assertions with messages and optional contracts.
Difficulty: Intermediate
Topics: macros, debugging
Estimated LOC: 300
Libraries: stdio.h

640. Diff & Patch Toolkit
Description: Generate unified diffs and apply patches to files.
Difficulty: Advanced
Topics: diffing, patching
Estimated LOC: 700
Libraries: stdlib.h

641. Code Search Tool (`ack`/`ag`-lite)
Description: Fast recursive code search respecting ignore files.
Difficulty: Intermediate
Topics: search, traversal
Estimated LOC: 500
Libraries: regex.h

642. Environment Diff Tool
Description: Compare environment/config between two setups.
Difficulty: Beginner
Topics: parsing, diffing
Estimated LOC: 300
Libraries: stdlib.h

643. TODO/FIXME Scanner
Description: Aggregate code annotations into a report/board.
Difficulty: Beginner
Topics: scanning, reporting
Estimated LOC: 300
Libraries: dirent.h

644. Macro Expansion Explorer
Description: Show how C macros expand step by step.
Difficulty: Advanced
Topics: preprocessing
Estimated LOC: 600
Libraries: stdlib.h

645. Command Palette / Fuzzy Finder (`fzf`-lite)
Description: Interactive fuzzy filter over piped input.
Difficulty: Intermediate
Topics: fuzzy matching, ncurses
Estimated LOC: 500
Libraries: ncurses

646. Code Metrics / Complexity Analyzer
Description: Compute cyclomatic complexity per function.
Difficulty: Advanced
Topics: static analysis
Estimated LOC: 600
Libraries: stdlib.h

647. Snippet Manager CLI
Description: Store, tag, search, and paste code snippets.
Difficulty: Intermediate
Topics: storage, search
Estimated LOC: 450
Libraries: stdlib.h

648. Interactive Regex Tester
Description: Live-test regexes against sample text with highlighting.
Difficulty: Intermediate
Topics: regex, ncurses
Estimated LOC: 450
Libraries: regex.h, ncurses

---

## 31. Git-like Tools, Build Systems, Testing, Profilers & Debuggers (649–660)

649. Content-Addressable Store (Git objects)
Description: Store blobs/trees/commits by SHA-1 like Git's object DB.
Difficulty: Advanced
Topics: hashing, storage
Estimated LOC: 600
Libraries: OpenSSL, zlib

650. Mini Version Control System (`git`-lite)
Description: init, add, commit, log, checkout with a real object model.
Difficulty: Advanced
Topics: VCS internals, hashing
Estimated LOC: 1500
Libraries: OpenSSL, zlib

651. Diff-Based Branching & Merge
Description: Add branches and three-way merges to your mini-VCS.
Difficulty: Advanced
Topics: merging, diff algorithms
Estimated LOC: 900
Libraries: (self-built diff)

652. Build System (`make`-lite)
Description: Parse rules, resolve dependencies, and rebuild stale targets.
Difficulty: Advanced
Topics: DAGs, timestamps, exec
Estimated LOC: 800
Libraries: sys/stat.h

653. Incremental Build Cache
Description: Cache build outputs keyed by input hashes (ccache-style).
Difficulty: Advanced
Topics: hashing, caching
Estimated LOC: 600
Libraries: OpenSSL

654. Task Runner / Job Orchestrator
Description: Run task graphs in parallel respecting dependencies.
Difficulty: Advanced
Topics: DAGs, concurrency
Estimated LOC: 700
Libraries: pthread

655. Unit Test Framework
Description: Test registration, assertions, fixtures, and TAP output.
Difficulty: Intermediate
Topics: macros, reporting
Estimated LOC: 500
Libraries: stdio.h

656. Mocking / Stubbing Library
Description: Replace functions with mocks and verify call expectations.
Difficulty: Advanced
Topics: linker tricks, function pointers
Estimated LOC: 500
Libraries: stdlib.h

657. Code Coverage Tool
Description: Instrument source to report line/branch coverage.
Difficulty: Advanced
Topics: instrumentation, parsing
Estimated LOC: 800
Libraries: stdlib.h

658. Sampling Profiler
Description: Periodically sample the stack to build a flame profile.
Difficulty: Advanced
Topics: signals, backtrace, stats
Estimated LOC: 600
Libraries: execinfo.h

659. Instrumenting Profiler
Description: Time function entry/exit via -finstrument-functions hooks.
Difficulty: Advanced
Topics: instrumentation, timing
Estimated LOC: 500
Libraries: time.h

660. Full-Featured Debugger (ptrace + DWARF)
Description: Source-level breakpoints and variable inspection using DWARF.
Difficulty: Advanced
Topics: ptrace, DWARF, debugging
Estimated LOC: 2000
Libraries: sys/ptrace.h, libdwarf

---


