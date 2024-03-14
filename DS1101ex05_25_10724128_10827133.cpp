// 10724128 吳宇哲 10827133 鄧梓岑
// 【工具】–【編譯選項】–【編譯器】勾選【編譯時加入以下命令】
// 加入【-std=c++11】 ，即可運作。

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <new>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std ;
int depth = 0 ;
int time1 = 0 ;
struct TreeNode{
    int ID;
    string name ;
    string subject_num ;
    string subject_name ;
    string day ;
    string day2 ;
    string level ;
    string level2 ;
    int student_num ;
    int teacher_num ;
    int graduate_num ;
    string city_name ;
    string city_num ;
    string type ;
    int type_num ;
    TreeNode *left = NULL;
    TreeNode *right= NULL;
};

class BT{


public:
    int size;
    TreeNode *BTS1  = new TreeNode;
    TreeNode *work1 ;
    TreeNode *BTS2  = new TreeNode;
    TreeNode *work2 = new TreeNode;
    TreeNode *input ;
public:
    BT():size(0){};
    void firstNode( TreeNode temp);
    int depth( TreeNode *temp );
    void printHight();
    void insertGraduate( TreeNode temp);
    void insertSchoolName( TreeNode temp);
};

void BT::insertGraduate( TreeNode temp){
    work1 = BTS1 ;
    input = new TreeNode ;
    input ->ID = temp.ID ;
    input->name  = temp.name ;
    input->subject_num  = temp.subject_num ;
    input->subject_name  = temp.subject_name ;
    input->day  = temp.day ;
    input->day2 = temp.day2  ;
    input->level  = temp.level ;
    input->level2  = temp.level2 ;
    input->student_num  = temp.student_num ;
    input->teacher_num  = temp.teacher_num ;
    input->graduate_num = temp.graduate_num  ;
    input->city_name  = temp.city_name ;
    input->city_num  = temp.city_num ;
    input->type = temp.type  ;
    input->type_num = temp.type_num  ;
    input -> right = NULL ;
    input -> left = NULL ;
    while ( 1 )  {

        if ( (work1-> graduate_num > temp.graduate_num) && (work1 -> left != NULL)) {
            work1 = work1 -> left ;
        }
        else if ( (work1-> graduate_num > temp.graduate_num) && (work1 -> left == NULL)) {
            work1 -> left = input ;
            break;
        }
        else if (( work1-> graduate_num <= temp.graduate_num) && (work1 -> right != NULL)) {
            work1 = work1 -> right ;

        }
        else if ( (work1-> graduate_num <= temp.graduate_num) && (work1 -> right == NULL)) {
            work1 -> right = input ;
            break;
        }
    }
}

void BT::insertSchoolName( TreeNode temp){
    work2 = BTS2 ;
    input = new TreeNode ;
    input ->ID = temp.ID ;
    input->name  = temp.name ;
    input->subject_num  = temp.subject_num ;
    input->subject_name  = temp.subject_name ;
    input->day  = temp.day ;
    input->day2 = temp.day2  ;
    input->level  = temp.level ;
    input->level2  = temp.level2 ;
    input->student_num  = temp.student_num ;
    input->teacher_num  = temp.teacher_num ;
    input->graduate_num = temp.graduate_num  ;
    input->city_name  = temp.city_name ;
    input->city_num  = temp.city_num ;
    input->type = temp.type  ;
    input->type_num = temp.type_num  ;
    input -> right = NULL ;
    input -> left = NULL ;
    while ( 1 )  {


        if ( (work2-> name > temp.name) && (work2 -> left != NULL)) {
            work2 = work2 -> left ;
        }
        else if ( (work2-> name > temp.name) && (work2 -> left == NULL)) {
            work2 -> left = input ;
            break;
        }
        else if (( work2-> name <= temp.name) && (work2 -> right != NULL)) {
            work2 = work2 -> right ;

        }
        else if ( (work2-> name <= temp.name) && (work2 -> right == NULL)) {
            work2 -> right = input ;
            break;
        }
    }
}

int  BT::depth(  TreeNode *work)  {

        int i = 0, m = 0;
    if( work == NULL  )
      return 0;
    else{
        m = depth( work->left  );
        i = depth( work->right  );
         if (  m > i )
          return m + 1;
         else
         return i + 1;

    }
}

void  BT::printHight( )  {
    work1 = BTS1 ;
    work2 = BTS2 ;
    int depthNum = depth( work1 ) ;
    cout << "Tree height {Number of graduates} = " << depthNum << endl ;
    depthNum = depth( work2 ) ;
    cout << "Tree height {School name} = " << depthNum << endl ;
}

void BT::firstNode( TreeNode temp){
    BTS1 ->ID = temp.ID ;
    BTS1->name  = temp.name ;
    BTS1->subject_num  = temp.subject_num ;
    BTS1->subject_name  = temp.subject_name ;
    BTS1->day  = temp.day ;
    BTS1->day2 = temp.day2  ;
    BTS1->level  = temp.level ;
    BTS1->level2  = temp.level2 ;
    BTS1->student_num  = temp.student_num ;
    BTS1->teacher_num  = temp.teacher_num ;
    BTS1->graduate_num = temp.graduate_num  ;
    BTS1->city_name  = temp.city_name ;
    BTS1->city_num  = temp.city_num ;
    BTS1->type = temp.type  ;
    BTS1->type_num = temp.type_num  ;
    BTS1 -> right = NULL ;
    BTS1 -> left = NULL ;
    BTS2 ->ID = temp.ID ;
    BTS2->name  = temp.name ;
    BTS2->subject_num  = temp.subject_num ;
    BTS2->subject_name  = temp.subject_name ;
    BTS2->day  = temp.day ;
    BTS2->day2 = temp.day2  ;
    BTS2->level  = temp.level ;
    BTS2->level2  = temp.level2 ;
    BTS2->student_num  = temp.student_num ;
    BTS2->teacher_num  = temp.teacher_num ;
    BTS2->graduate_num = temp.graduate_num  ;
    BTS2->city_name  = temp.city_name ;
    BTS2->city_num  = temp.city_num ;
    BTS2->type = temp.type  ;
    BTS2->type_num = temp.type_num  ;
    BTS2 -> right = NULL ;
    BTS2 -> left = NULL ;

}

int getNum() {
	int temp ;
	string inputS ;
	bool isNum ;

	do {
		cin >> inputS ;
		isNum = true ;
		for ( int i = 0; ( i < inputS.length()) && ( isNum ) ; i++ )
		  if( ( inputS[i] > '9') || ( inputS[i] < '0') )
		    isNum = false ;
		if ( !isNum )
		  continue ;
		temp = strtoul( inputS.c_str(), NULL, 10 ) ;

		  break ;


	} while( true );// end do-while

	return temp ;
} // getNum()

class mission{
private:
    TreeNode temp;
    string line1 ;
    string line2 ;
    string line3 ;
    vector<struct TreeNode> tree ;
public:
     BT BTree ;
    mission(){};
    void readTheFile() ;
    void traversal(int graduate,TreeNode *p) ;
    void traversal1(string name,TreeNode *p) ;
    void printRight(TreeNode *p) ;
};

void mission:: traversal(int graduate,TreeNode *p)
{
    if (!p) return;
    else if(   graduate <=  p->graduate_num ){
             cout << "[" << time1+1 << "]\t "<<p ->name << "\t" <<  p ->subject_name << "\t" << p->day << " " << p->day2 << "\t" << p->level << " " << p->level2 << "\t" << p->student_num<< "\t" << p->teacher_num << "\t" << p->graduate_num<< endl;
            time1++ ;
            printRight ( p -> right) ;
             traversal(graduate,p->left);
    }
    else if ( graduate > p->graduate_num ) {
            traversal(graduate,p->right);
    }

}

void mission:: traversal1(string name,TreeNode *p)
{
    if (!p) return;
    else if(   name ==  p->name ){
             cout << "[" << time1+1 << "]\t "<<p ->name << "\t" <<  p ->subject_name << "\t" << p->day << " " << p->day2 << "\t" << p->level << " " << p->level2 << "\t" << p->student_num<< "\t" << p->teacher_num << "\t" << p->graduate_num<< endl;
            time1++ ;
             traversal1(name,p->right);
    }
    else if(   name < p->name ){
             traversal1(name,p->left);
    }
    else if(   name > p->name ){
            traversal1(name,p->right);
    }
}

void mission:: printRight( TreeNode *p)
{
    if (!p) return;

    else {
            printRight(p->left); // 次輸出左子樹
            cout << "[" << time1+1 << "]\t "<<p ->name << "\t" <<  p ->subject_name << "\t" << p->day << " " << p->day2 << "\t" << p->level << " " << p->level2 << "\t" << p->student_num<< "\t" << p->teacher_num << "\t" << p->graduate_num<< endl;    // 先輸出樹根
            time1++ ;
            printRight(p->right);// 後輸出右子樹
    }



}

void mission::readTheFile() { // 讀檔
    int input = 1 , number = 0 ;
    vector<struct TreeNode> TreeTemp ;
    string name_input ;
    string subject_name_input ;
    string day2_input ;
    string level2_input ;
    string city_name_input ;
    char day_input ;
    char level_input ;
    TreeNode read_temp ;
    bool first = true ;
    int count = 0 ;
  	cout << endl << "Input a file number (e.g., 501, 502, ...):  " ;
  	input = getNum() ; // 讀入檔名
  	string inputString = to_string( input ) ; // 將int檔名轉成string
  	fstream theFile;

  	theFile.open( "input"+inputString+".txt" ); // 開啟指定檔案

  	if ( theFile.is_open() ) { // 如果有打開檔案
    	getline( theFile, line1 ) ;
    	getline( theFile, line2 ) ;
    	getline( theFile, line3 ) ;
    	while (theFile >> read_temp.ID ) {//>> read_temp.name >> read_temp.subject_name >> read_temp.day >> read_temp.day2 >> read_temp.level >> read_temp.level2 >> read_temp.student_num >> read_temp.teacher_num >> read_temp.graduate_num >> read_temp.city_name >> read_temp.type) {
            count ++ ;
    //        cout << read_temp.ID << " " ;//" " << read_temp.name << " " << read_temp.subject_name << " " << read_temp.day << " " << read_temp.day2 << " " << read_temp.level << " " << read_temp.level2 << " " << read_temp.student_num << " " << read_temp.teacher_num << " " << read_temp.graduate_num << " " << read_temp.city_name << " " << read_temp.type <<endl ;
            if (  theFile >>read_temp.name ) {
            }
            if (  theFile >>read_temp.subject_num ) {
            }
            if (  theFile >>read_temp.subject_name ) {
            }
            if (  theFile >>read_temp.day ) {
            }
            if (  theFile >>read_temp.day2 ) {
            }
            if (  theFile >>read_temp.level  ) {
            }
            if (  theFile >>read_temp.level2 ) {
            }
            if (  theFile >> read_temp.student_num ) {
            }
            if (  theFile >>read_temp.teacher_num ) {
            }
            if (  theFile >>read_temp.graduate_num ) {
            }
            if (  theFile >>read_temp.city_num ) {
            }
            if (  theFile >>read_temp.city_name ) {
            }
            if (  theFile >>read_temp.type_num) {
            }
            if (  theFile >>read_temp.type) {
            }

            TreeTemp.push_back(read_temp);
            number++ ;
            if ( first) {
                BTree.firstNode( read_temp ) ;
                first = false ;
            }
            else {
              BTree.insertGraduate(read_temp ) ;
              BTree.insertSchoolName( read_temp ) ;
            }


        }

        int i = 0 ;
        while( i < number ){
            cout << "[" << i+1 << "] " << "\t" ;
            cout << TreeTemp[i].name << '\t' ;
            cout << TreeTemp[i].subject_name << '\t' ;
            cout << TreeTemp[i].day << " " << TreeTemp[i].day2<< '\t' ;
            cout << TreeTemp[i].level << " " << TreeTemp[i].level2<< '\t' ;
            cout << TreeTemp[i].student_num << '\t' ;
            cout << TreeTemp[i].teacher_num << '\t' ;
            cout << TreeTemp[i].graduate_num << '\t' ;
            cout << endl ;
            i++ ;
        }
        BTree.printHight();
    	theFile.close();


    } // if
    else {
        cout << "input" +inputString + ".txt does not exist!" << endl ;
    }

} // readTheFile


int main(){
  mission m ;
  int g = 0 ;
  string s = "" ;
  int command = 0 ; // user command
  do {

  	cout << endl << "*** University Graduate Information System ***" ;
  	cout << endl << "* 0. Quit                                    *" ;
  	cout << endl << "* 1. Create Two Binary Search Trees          *" ;
  	cout << endl << "* 2. Search by Number of Graduates           *" ;
  	cout << endl << "* 3. Search by School Name                   *" ;
  	cout << endl << "**********************************************" ;
  	cout << endl << "Input a command( 0, 1, 2, 3 ) :" ;
  	cin >> command ; // get the command
  	switch(command){
		case 0 : break ; //跳出，結束

  		case 1 : //檢查中序式是否正確
            m.readTheFile() ;
            break ;
  		case 2 :
  		    cout << "Input the number of graduates: "  ;
  		    cin >> g ;
            m. traversal(g,m.BTree.BTS1) ;
            time1 =0 ;
  			break ;
  		case 3 :
  		    cout << "Input a school name: "  ;
  		    cin >> s ;
            m. traversal1(s,m.BTree.BTS2) ;
            time1 = 0 ;
  			break ;

  		default :
			cout << endl << "command does not exist !!" << endl ;
  			break ;

	} // end switch

  } while ( command != 0 ) ;

  system( "pause") ; // pause the display
  return 0 ;
}
