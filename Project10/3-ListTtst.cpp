#include <iostream>
using namespace std;

#include "3-ListT.h"

int main()
{
  cout << "---------------------------------------------" << endl;
  cout << "-----------------Static Test-----------------" << endl << endl;
  //Use of a static list 
  ListT lst;
  
  /*
  //IsEmpty() Static Test 1
  cout << "IsEmpty() Static Test 1 -- Should Return 1: " << lst.IsEmpty() << endl << endl;
  */
  
  /*
  //Fill the List - Put Item H Test 
  cout << "PutItemH() & Print() Static Test--Should Return '2 1 0 2 1 0 2 1 0': " << endl;
  for (int i = 0; i < 9; i++) 
  {
    lst.PutItemH(i%3);
  }
  lst.Print();
  cout << endl;
  */
  
  /*
  //IsEmpty() Static Test 2
  cout << "IsEmpty() Static Test 2 -- Should Return 0: " << lst.IsEmpty() << endl << endl;
  */
  
  /*
  //GetLength() Static Test
  cout << "GetLength() Static Test -- Should Return 9: " << lst.GetLength() << endl << endl;
  */
 
  /*
  //GetItemH() Static Test 
  cout << "GetItemH() Static Test -- Should Return 2: " << lst.GetItemH()  << endl << endl;
  */
  
  /*
   //PutItemT() Static Test 
  cout << "PutItemT() Static Test -- input set to put '5' at end of list -- Should Return with 5 at end of list:" << endl << endl;
  lst.PutItemT(5);
  lst.Print();
  cout << endl;
  */
  
  /*
  //GetItemT() Static Test 
  cout << "GetItemT() Static Test -- Should Return 5: " << lst.GetItemT()  << endl << endl;
  */
  
  /*
  //FindItem() Static Test 
  cout << "FindItem() Static Test -- input set to find '2' -- Should Return 3 instances:" << lst.FindItem(2) << endl << endl;
  */
  
  /*
  //DeleteItem() Static Test 
  cout << "DeleteItem() Static Test -- input set to remove targets of 2 -- Should Return without 2:" << endl << endl;
  lst.DeleteItem(2);
  lst.Print();
  cout << endl;
  */
  
  /*
  //DeleteItemH() Static Test 
  cout << "DeleteItemH() Static Test -- Should Return list without the first 1:" << endl << endl;
  lst.DeleteItemH();
  lst.Print();
  cout << endl;
  */
  
  /*
  //DeleteItemT() Static Test 1
  cout << "DeleteItemT() Static Test-- Should Return list without last 5:" << endl << endl;
  lst.DeleteItemT();
  lst.Print();
  cout << endl;  
  */

  //Use of a dynamic list
  cout << "---------------------------------------------" << endl;
  cout << "----------------Dynamic Test-----------------" << endl << endl;
  
  ListT* lst1 = new ListT;
   
  /*
  //IsEmpty() Dynamic Test 1
  cout << "IsEmpty() Dynamic Test 1 -- Should Return 1: " << lst1->IsEmpty() << endl << endl;
  */
  
  /*
  //Fill the List - Put Item H Test 
  cout << "PutItemH() & Print() Dynamic Test--Should Return '20 10 0 20 10 0 20 10 0': " << endl;
  for (int i = 0; i < 9; i++) 
  {
    lst1->PutItemH((i%3)*10);
  }
  lst1->Print();
  cout << endl;
  */
  
  /*
  //IsEmpty() Dynamic Test 2
  cout << "IsEmpty() Dynamic Test 2 -- Should Return 0: " << lst1->IsEmpty() << endl << endl;
  */
  
  /*
  //GetLength() Dynamic Test
  cout << "GetLength() Dynamic Test -- Should Return 9: " << lst1->GetLength() << endl << endl;
  */
 
  /*
  //GetItemH() Dynamic Test 
  cout << "GetItemH() Dynamic Test -- Should Return 20: " << lst1->GetItemH()  << endl << endl;
  */
  
  /*
  //PutItemT() Dynamic Test 
  cout << "PutItemT() Dynamic Test -- input set to put '5' at end of list -- Should Return with 5 at end of list:" << endl << endl;
  lst1->PutItemT(5);
  lst1->Print();
  cout << endl;
  */
  
  /*
  //GetItemT() Dynamic Test 
  cout << "GetItemT() Dynamic Test -- Should Return 5: " << lst1->GetItemT()  << endl << endl;
  */
  
  /*
  //FindItem() Dynamic Test 
  cout << "FindItem() Dynamic Test -- input set to find '20' -- Should Return 3 instances:" << lst1->FindItem(20) << endl << endl;
  */
  
  /*
  //DeleteItem() Dynamic Test 
  cout << "DeleteItem() Dynamic Test -- input set to remove targets of 20 -- Should Return without 20:" << endl << endl;
  lst1->DeleteItem(20);
  lst1->Print();
  cout << endl;
  */
  
  /*
  //DeleteItemH() Dynamic Test 
  cout << "DeleteItemH() Dynamic Test -- Should Return list without the first 10:" << endl << endl;
  lst1->DeleteItemH();
  lst1->Print();
  cout << endl;
  */
  
  /*
  //DeleteItemT() Dynamic Test 1
  cout << "DeleteItemT() Dynamic Test-- Should Return list without last 5:" << endl << endl;
  lst1->DeleteItemT();
  lst1->Print();
  cout << endl;  
  */
 
  delete lst1; //necessary to invoke destructor on dynamic list
  cout << endl;
  
  return 0;
}
