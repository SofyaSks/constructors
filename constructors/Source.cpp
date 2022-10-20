#include <iostream>
#include <Windows.h>
#include <iomanip>

#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;


class Student {
public:
    //srand(time(NULL));
    /*Student() { 
        FN = "";
        LN = "";
        age = 18;
        average = 0;
        arr_score[3] = {};
    }*/

    Student(string fn = "Ella", string ln = "Snow", int age_ = 18, double avg = 0) { // конструктор с параметрами по умолчанию
        FN = fn;
        LN = ln;
        age = age_;

    }

    void SearchAVG() {
      double sum = 0;
      for (int i = 0; i < 3; i++)
      {
                arr_score[i] = rand() % 12 + 1;
      }
      for (int i = 0; i < 3; i++) {
            sum += arr_score[i];
      }
          average = (double)sum / 3.0;
    }

 /*   Student(string fn = "Katya", int age_ = 45) {
        FN = fn;
        age = age_;
    }*/
    

    void Print() {
        cout << FN << " " << LN << " " << age << " ";
        for (int i = 0; i < 3; i++)
        {
            cout << arr_score[i] << " ";
        }
        cout << average << endl;
    }

   /* double getAVG() {
        double avg = 0;
        for (int i = 0; i < 3; i++)
        {
            avg += arr_score[i];
        }
        avg /= 3;
        return avg;
    }*/

  /*  void setScore() {
        for (int i = 0; i < 3; i++)
        {
            arr_score[i] = rand() % 12 + 1;
        }
    }*/

   /* void setAVG() {
        average = getAVG();
    }*/



private:
    string FN;
    string LN;
    int age;
    int arr_score[3] = {};
    double average;


};



void main()
{
    srand(time(NULL));

    Student st1;
   // st1.setScore();
   // st1.setAVG();
    st1.SearchAVG();
    st1.Print();
    

}