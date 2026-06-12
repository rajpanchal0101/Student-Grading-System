# Student Grading System

Reads student data from an input file, calculates grade statistics, and outputs results to both the console and an output file. The project has two sections that handle different input formats and grading logic.

## Tech Used

- C++

## File Breakdown

### Section 1 — Per-Student Averages & Letter Grades

Reads student scores, calculates each student's average, assigns a letter grade, and writes the results to console and file.

| File | Description |
|------|-------------|
| `Section 1/sec1_header.h` | Header file with function declarations and global variables. Included in `sec1_prosecution.cpp`. |
| `Section 1/sec1_main.cpp` | Entry point — reads input, computes averages, determines grades, writes output. |
| `Section 1/sec1_prosecution.cpp` | Implements average calculation and grade assignment functions. Included in `sec1_main.cpp`. |
| `Section 1/sec1_grades.txt` | Input file with student data. |
| `Section 1/sec1_output.txt` | Output file with computed results. |
| `Section 1/sec1_executable.exe` | Pre-built executable binary. |

### Section 2 — Subject-Wise Averages & Grades

Processes a different input format, calculates per-subject averages, assigns grades for each subject, and writes results to file.

| File | Description |
|------|-------------|
| `Section 2/sec2_header.h` | Header file with function declarations and global variables. Included in `sec2_prosecution.cpp`. |
| `Section 2/sec2_main.cpp` | Entry point — reads input, computes subject-wise averages, assigns grades. |
| `Section 2/sec2_prosecution.cpp` | Implements input parsing, average calculation, and grade assignment. Included in `sec2_main.cpp`. |
| `Section 2/sec2_grades.txt` | Input file with student data. |
| `Section 2/sec2_output.txt` | Output file with computed results. |
| `Section 2/sec2_executable.exe` | Pre-built executable binary. |

## How to Build & Run

```bash
# Section 1
cd "Section 1"
g++ sec1_main.cpp -o sec1 && ./sec1

# Section 2
cd "Section 2"
g++ sec2_main.cpp -o sec2 && ./sec2
```

Or run the pre-built `.exe` files directly on Windows.
