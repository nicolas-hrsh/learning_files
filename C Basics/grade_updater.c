// Scope: This project is supposed to provide professors to easily upload grades of students to their portal, including conversion from numbers to grade or Grade to numbers(range)

// Lesson Learnt: If an array is dynamically allocated, it decays into a pointer when passed to functions, and `sizeof` only gives the size of the pointer (not the array). The original array size is not stored in memory, so `sizeof` can't determine it.



#include <stdio.h>

void gradePrinter(int list[], int student_count){
    // func to diplay the saved result:
    
    for (int student = 1; student <= student_count; student++){
        printf(" Roll number: %d Grade: %d\n", student, list[student-1]);
    }
 

}


int main(){


    printf("Welcome to the grade uploader portal. \n   Input student count: ");
    int total_students;
    scanf("%d", &total_students);

    int roll_numbers[total_students];

    for (int roll_number = 1; roll_number <= total_students; roll_number++ ){
        printf("Enter score for student %d: ", roll_number);
        scanf("%d", &roll_numbers[roll_number-1] ); // stores score for roll number x to index x-1.
    }
    printf("Scores submitted successfully! \n Press 1 to review scores. \nPress 2 to save them.");
    int temp_var;
    scanf("%d",&temp_var);

    if (temp_var == 1){
        // Shows user stored data.
        gradePrinter(roll_numbers, total_students);

    }
    else{
        // Save data and exit!
        printf("Scores uploaded successfully!");
    }






    return 0;
}