//Project reading/writing to a file and writing the functions inorder to help user to get the correct grammer points like Le complément d'objet indirect et direct/ this program is in the process of completion
// Written by: Audrey Rahimi
//September 2020



#include <iostream> //for cin cout
#include <string> //for string
#include <fstream>  // input/out put file stream class



using namespace std;

int main()
{
int exit=1;
while (exit!=0)    // help user end the program or not
{
	
	string word; //variable stores info of the file one by one
	string verb;
	string object;
	
	
	int EXITCODE=1;        // variable for big loop
	int found=1;  // variable for if not founded 
	
	while(EXITCODE==1)    //for exit or continue the program from big loop
	{

	ifstream myfile1 ("Verb Avec Préposition à.txt", ios::in) ; // for reading from the file, if stream for input file stream class 

 // *****  *****// check if the file open or not
 
 if(!myfile1){    // In the case, if the file does not open
    	cout<<"Sorry! Could not open file. Program ending ..."<< endl <<"Program ended with exit code: ";}
//    	exit(0);}
    	
    	
    	cout<<"Which verb would you like to check? (no spaces and no preposition): " ;
		cin>>verb;
		int found=1;  // variable for if not found
    	
    	while(!myfile1.eof())        // eof always test for end-of-file                 // Loop for search 
    	{	    	 
	    	myfile1>>word; //read and inpput the first word of each line in the variable                 
		  
				  
	if (word==verb )   
		  {	      
		   cout <<"verb  " << verb << "  COI  "<<endl;
		   cout<< "Thank you for using this program"<<endl;
		   found=0;    // It becomes 0 when it maches, if not it goes to the next if: if (found==1) 
		  }
		  
	    }
myfile1.close();

if (found==1)       //check for  if not found
		{
		string verb ;	
	 	cout<<"The verb is not in the list, please try again to make it in the NewVerb.dat file :  ";
	    cin>>verb;
	        ofstream myfile2 ("NewVerb.dat", ios::out | ios::app) ;   //ofstream: output file stream class, used to add and write new verb in the file
		 
		 
            if(!myfile2)
             {cout<<"The wrong file"<<endl;
              cin>>exit;
             } 	
    	
    	myfile2<<endl<<verb<<"	 "<<verb;  //to enter new data
 			myfile2.close();
 			
 			cout<< "It has been written into the file Newverb.dat successfully "<<endl<<endl;
 		//	cout<<"Thank you for using this peogram"<<endl<<endl;
			
	    }
	     
	     string L;
	     int N;
	     cout<< "Please enetr the object:  " << object<<endl;
	     cin>>object;
	     N=object.length()-1;
	     
	     
	     string LL;
	     LL=verb.substr(0,1);
	     
	     if (object.substr(N)=="e")  {
	     	
	     	
		cout<< "for the verb  "<< verb<< " with  " << object <<" always use C.O.D: LA for female object" << endl;
		cout<< "The correct form is" << endl;
		cout<< "la  " << verb<< endl ;
		
		
		    if ((LL == "e" )||(LL =="o")||(LL =="u")||(LL =="i")||(LL =="a")){
			
			    cout<<"l'"<<verb <<endl;}
		
	}
		 
		
		else 
		{
		
		cout<< "for the verb  "<< verb<< " with  " << object <<" always use C.O.D le for male object" << endl;
		cout<< "The correct form is" << endl;
		cout<< "le  " << verb<<endl ;
			if ((LL == "e" )||(LL =="o")||(LL =="u")||(LL =="i")||(LL =="a")){
			
			    cout<<"l'"<<verb <<endl;}
		
		          
}
	}

	     cout<<endl;
	    
    
	    
	cout<<"(0 for exit) - (1 else to continue)"<<endl;
	cout<<"Program ended with exit code: ";
	cin>>EXITCODE;
	
}
	
    	return 0;
}
	
