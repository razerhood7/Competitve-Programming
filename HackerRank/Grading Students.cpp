vector<int> gradingStudents(vector<int> grades) {
    for(int i=0;i<grades.size();i++){
        int grade_selected = grades[i];
        if(grade_selected<38)
            continue;
        else {
            if ((grade_selected + 1)%5 == 0)
                grades[i] = grade_selected + 1;
            else if ((grade_selected + 2)%5 == 0)
                grades[i] = grade_selected + 2;
           
        }
    }
    return grades;
}
