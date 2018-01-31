#include "score_manage.h"

bool sortCompare_student_num(const sutuent a, const sutuent b);
bool sortCompare_score(const sutuent a, const sutuent b);
bool sortCompare_name(const sutuent a, const sutuent b);


char list::make_rank(int score){
  char rank = 'F';

  switch(score/10){
    case 10:
      rank = 'A';
      break;
    case 9:
      rank = 'A';
      break;
    case 8:
      rank = 'B';
      break;
    case 7:
      rank = 'C';
      break;
    case 6:
      rank = 'D';
      break;
    default :
      rank = 'F';
  }
  

  return rank;
}

void list::printType(){
  char chose = 0;

  cout << "출력 타입 선택 (0 : 파일/ 그외 : Display) : ";  
  cin >> chose;  
  cout << endl; 

  if(chose == '0'){
    fileDisplay();
  }else{
    display();
  }

}



void list::display() {

  int list_num = 0;
  vector<sutuent>::iterator num;

  cout <<"|"<< "번호" << "\t|"<< "학번" << "\t|" << "이름" << "\t|" << "점수" << "\t|" << "학점" << "\t|" << endl;
  
  for(num = slist.begin(); num < slist.end(); num++, list_num++){
    cout << "|"<< list_num << "\t|"<< slist[list_num].student_num << "\t|" << slist[list_num].name << "\t|" << slist[list_num].score << "\t|" << slist[list_num].score_rank << "\t|" << endl; 
  }

}


void list::fileDisplay(){

  ofstream file("Student_list.txt");

  int list_num = 0;
  vector<sutuent>::iterator num;

  file <<"|"<< "번호" << "\t|"<< "학번" << "\t|" << "이름" << "\t|" << "점수" << "\t|" << "학점" << "\t|" << endl;
  
  for(num = slist.begin(); num < slist.end(); num++, list_num++){
    file << "|"<< list_num << "\t|"<< slist[list_num].student_num << "\t|" << slist[list_num].name << "\t|" << slist[list_num].score << "\t|" << slist[list_num].score_rank << "\t|" << endl; 
  }

  file.close();
}


void list::createType(){
 char chose = 0;

  cout << "입력 타입 선택 (0 : 파일/ 그외 : Display) : ";  
  cin >> chose;  
  cout << endl; 

  if(chose == '0'){
    fileCreate();
  }else{

    inputCreate();
  }

}

void list::inputCreate(){
  int student_num, score;
  string name;

  cout << "학번 : ";  cin >> student_num;
  cout << "이름 : ";  cin >> name;
  cout << "점수 : ";  cin >> score;  cout << endl; 
  
  create(student_num, name, score);
}


void list::create(int new_student_num, string new_name, int new_score) {

  sutuent temp;
  temp.name = new_name;
  temp.student_num = new_student_num;
  temp.score = new_score;
  temp.score_rank = make_rank(new_score);   

  slist.push_back(temp);
}

void list::fileCreate(){

  char readstring[100]={0,};
  char *token;
  int student_num, score;
  string name;

  ifstream file("sample_list.txt", ios::in);  

  file.getline(readstring, 100);        // 첫줄 버림 - 목록 메뉴

  while( 0 == file.eof()){

    file.getline(readstring, 100);
    //cout << readstring << endl;    

    token = strtok(readstring,"\t|");

    if(token != NULL){                 // 아래 for -> while(token != NULL){ > error
    
      for(int i=0; i<4; i++){

        token = strtok(NULL,"\t|");
        
        switch(i){
          case 0:
            student_num = atoi(token);
            break;
          case 1:
            name = token;
            break;
          case 2:
            score = atoi(token);
            break;
          case 3: // 학점(A~F)
            break;
          default:
            break;
        }
      }
      create(student_num, name, score);

    }
                      
  } 

  file.close();
}


void list::retouch(int list_num){

  int student_new_num = 0;
  vector<sutuent>::iterator num;

  int size = slist.end() - slist.begin();        // list num = size-1
  //cout << size << endl;


  if(list_num < 0 || list_num > (size-1)){
    cout << "> error : 해당 번호의 학생이 없습니다" <<endl<<endl;
    return;
  }
 
  cout << "수정할 학생의 정보" << endl;
  cout << "|"<< list_num << " : "<< slist[list_num].student_num << "\t|" << slist[list_num].name << "\t|" << slist[list_num].score << "\t|" << slist[list_num].score_rank << "\t|" << endl;
  
  cout << "수정할 학생의 정보를 입력해 주세요 (학번에 0 을 입력시 취소됩니다.)"<< endl; 
  cout << "학번 : ";  cin >> student_new_num;
  
  if(student_new_num == 0){
    cout << "> 취소하였습니다"<< endl << endl; 
    return;
  }

  slist[list_num].student_num = student_new_num; 
  cout << "이름 : ";  cin >> slist[list_num].name;
  cout << "점수 : ";  cin >> slist[list_num].score; 
  slist[list_num].score_rank = make_rank(slist[list_num].score);   
  
}


bool sortCompare_student_num(const sutuent a, const sutuent b)
{
    return a.student_num < b.student_num;    // 학번은 작은수부터
}

bool sortCompare_score(const sutuent a, const sutuent b)
{
    return a.score > b.score;                // 점수는 큰수부터
}

bool sortCompare_name(const sutuent a, const sutuent b)
{
    return a.name < b.name;
}


void list::list_sort(){
  
  int Compare = 1;

  cout << "정렬 기준을 선택하십시오(1:학번/2:이름/3:점수) : ";  
  cin >> Compare;

   switch(Compare){
      case 1: 
        sort(slist.begin(), slist.end(), sortCompare_student_num);
        break;
      case 2: 
        sort(slist.begin(), slist.end(), sortCompare_name);
        break;
      case 3: 
        sort(slist.begin(), slist.end(), sortCompare_score);
        break;
      default :
        cout << "없는 항목입니다";
    }
}


void list::search(){
  // 검색 시스템 제작
}


void list::del(int list_num){

  vector<sutuent>::iterator num = slist.begin();

  slist.erase(num + list_num);

}


void list::del_all(){

  slist.clear();

}

