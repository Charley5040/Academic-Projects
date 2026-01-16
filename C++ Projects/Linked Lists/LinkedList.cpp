// Name: DAVID JAMES-NWOKOCHA
// Student Number: 200518242
// Date:27-03-2025

// Filename: LinkedList.cpp

// Note: This implementation of LinkedList is based on
// Chapter 4 of Bruno R. Preiss's Textbook:
// "Data Structures and Algorithms with Object-Oriented Design Patterns in C++"

#include "LinkedList.h"
#include <cassert>
#include <cstdlib>
using namespace std;

//---------------------------------------------------
//List Element Members
//---------------------------------------------------
ListElement::ListElement(int _datum, ListElement *_next) : datum(_datum), next(_next)
{
}

int ListElement::getDatum() const
{
  return datum;
}

ListElement const *ListElement::getNext() const
{
  return next;
}

//---------------------------------------------------
//LinkedList Members
//---------------------------------------------------
LinkedList::LinkedList() : head(0)
{
}

void LinkedList::insertItem(int item)
{
  ListElement *currPtr = head;
  ListElement *prevPtr = NULL; //prevPtr points to the element before currPtr in the list
  ListElement *newNodePtr;     // points to a new node

  while (currPtr != NULL && item > currPtr->datum)
  {
    prevPtr = currPtr;
    currPtr = currPtr->next;
  }

  newNodePtr = new ListElement(item, currPtr);

  if (prevPtr == NULL) // insert at the beginning
    head = newNodePtr;
  else
    prevPtr->next = newNodePtr;
}

void LinkedList::makeList()
{
  int number;
  ListElement *currPtr;
  ListElement *newNodePtr;

  cout << "Enter values for a linked list, one per line." << endl;
  cout << "Enter 999 to end the list." << endl;

  cin >> number;
  //Adding elements to end so that "next" will be NULL
  newNodePtr = new ListElement(number, NULL);
  head = newNodePtr; //assign head to the first Node
  currPtr = head;
  cin >> number;

  while (number != 999)
  {
    newNodePtr = new ListElement(number, NULL);
    currPtr->next = newNodePtr; //link the new node to list
    currPtr = newNodePtr;       //move the currPtr so it is at end of list
    cin >> number;
  }
}

void LinkedList::appendItem(int item)
{
  // REMOVE the cout statement on line 89
  // then write your code here!
  //Find the end of the list...
  //Set a current-pointer to the "head".
  ListElement* currPtr = head;
  //While current-pointer link member ("next") is not NULL
  while(currPtr->next!=NULL)
  //{
  //Set the current-pointer to the "next" node in the list.
  //}
    {
      currPtr = currPtr->next;
    }
  ////Now current-pointer points to the last node...
  //Create a new node initialized with the "item" and a NULL pointer.
  ListElement* newNodePtr = new ListElement(item,NULL);
  //Set the current-pointer link member ("next") to this new node.
	currPtr->next = newNodePtr;
}

void LinkedList::deleteItem(int item)
{
  // REMOVE the cout statement on line 96
  // then write your code here!
  if(head->datum==item){
    ListElement* deletePtr = head;
    head = head->next;
    delete deletePtr;
    deletePtr=NULL;
  }else{
    ListElement* prevPtr = head;
    while(prevPtr->next != NULL && prevPtr->next->datum != item){
      prevPtr = prevPtr->next;
    }
  if(prevPtr->next != NULL){
    ListElement* deletePtr = prevPtr->next;
    prevPtr->next=deletePtr->next;
    delete deletePtr;
    deletePtr=NULL;
  }else{
    cout<<"item not found"<<endl;
  }
 }
}

void LinkedList::printList()
{
  // REMOVE the cout statement on line 103
  // then write your code here!
  ListElement* currPtr = head;
  while(currPtr != NULL){
    cout<<currPtr->datum<<"->"<<endl;
    currPtr = currPtr->next;
  }
}