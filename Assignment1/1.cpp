#include <iostream>
#include <iomanip>
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int grade_math;
    int grade_physics;
    int grade_chemistry;
    std::cin >> grade_math >> grade_physics >> grade_chemistry;
    char letter_grade;
    std::string status_pass;
    double final_pct = (grade_math + grade_physics + grade_chemistry)/3.0;
    if (grade_math < 40 || grade_physics < 40 || grade_chemistry < 40) {
        letter_grade = 'F';
        status_pass = "Fail";
    }else {
        if (final_pct >= 90) {
            letter_grade = 'A';
            status_pass = "Pass";
        }else if (final_pct >= 80) {
            letter_grade = 'B';
            status_pass = "Pass";
        }else if (final_pct >= 70) {
            letter_grade = 'C';
            status_pass = "Pass";
        }else if (final_pct >= 60) {
            letter_grade = 'D';
            status_pass = "Pass";
        }else {
            letter_grade = 'F';
            status_pass = "Fail";
        }
    }
    std::cout << "Final Grade: " << std::fixed << std::setprecision(2) << final_pct << "%" << std::endl;
    std::cout << "Status: " << status_pass << std::endl;
    std::cout << "Letter Grade: " << letter_grade << std::endl;
    return 0;
}