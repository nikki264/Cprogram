//if (marks >= 33 && marks < 35)  
 
#include <stdio.h> 
int marks;  // global data – everyone can change this 
void enterMarks() { 
    printf("Enter marks: "); 
    scanf("%d", &marks); 
} 
void giveGraceMarks() { 
    if (marks >= 33 && marks < 35) { 
        marks = marks + 5;   // grace only if between 33 and 34 
    } 
} 
void applyPenalty() { 
    // late submission of assignment 
    marks = marks - 10; 
} 
void printResult() { 
    printf("Final marks = %d\n", marks); 
} 
//Case 1 – grace marks first, then penalty- 
int main() { 
    enterMarks();      // marks = 34 
    giveGraceMarks();  // condition true → 39 
    applyPenalty();    // 39 - 10 = 29 
    printResult();     // 29 
    return 0; 
} 
