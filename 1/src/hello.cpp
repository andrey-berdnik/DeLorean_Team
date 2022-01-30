#include <cstdio>
#include <fstream>
#include <iostream>


void print_hello (void){
	
	std::ofstream fout("filename.txt");
	
	if(!fout.is_open()){
	
		std::cout<<"mistake in opening the file\n";
	
	}
	else{
	
		std::cout<<"filename.txt has been successfully created, you can check it out in your current directory\n";
	
	}

	int i=0;

	while (i<10){

       	fout<<"Hello world!\n";
       	i++;

}

	fout.close();
}
