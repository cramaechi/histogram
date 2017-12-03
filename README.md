# Quiz Histogram
A program that prints out a text-based histogram for student quiz grades.

### Synopsis
The quiz is graded on a scale from 0 to 5.

The program is capable of handling an arbitrary number of student grades.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/quiz-histogram.git
   ```
    or [https://github.com/cramaechi/quiz-histogram/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd quiz-histogram
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./quiz_histogram
```

Sample Output:
```
Start entering grades: 3 4 5 4 3 2 0 1 4 5 3 2 3 4                                                                    
                                                                                                                      
1 grade(s) of 0                                                                                                       
1 grade(s) of 1                                                                                                       
2 grade(s) of 2                                                                                                       
4 grade(s) of 3                                                                                                       
4 grade(s) of 4                                                                                                       
2 grade(s) of 5

Start entering grades: 4 5 2 4 2 5 1 0 1 3 1 0 4 2 5 2 5 2 4 2 1 0 1                                                  
                                                                                                                      
3 grade(s) of 0                                                                                                       
5 grade(s) of 1                                                                                                       
6 grade(s) of 2                                                                                                       
1 grade(s) of 3                                                                                                       
4 grade(s) of 4                                                                                                       
4 grade(s) of 5 
```
