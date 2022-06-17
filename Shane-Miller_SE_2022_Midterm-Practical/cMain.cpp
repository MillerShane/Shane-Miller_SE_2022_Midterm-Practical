#include "cMain.h"
#include<stdlib.h>
#include <time.h>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

wxEND_EVENT_TABLE()

int cMain::randGen() 
{
	int answer;
	srand(time(NULL));

	int rng = rand() % 100 + 1;
	answer = rng;
	return answer;;
}

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Midterm Practical -- Shane Miller -- SE 2022", wxPoint(400, 400), wxSize(865, 170))
{
	int rng = randGen();
	 



	button1 = new wxButton(this, wxID_ANY, aFactory1(rng), wxPoint(10, 70), wxSize(200, 50));
	button2 = new wxButton(this, wxID_ANY, aFactory2(rng), wxPoint(220, 70), wxSize(200, 50));
	button3 = new wxButton(this, wxID_ANY, aFactory3(rng), wxPoint(430, 70), wxSize(200, 50));
	button4 = new wxButton(this, wxID_ANY, aFactory4(rng), wxPoint(640, 70), wxSize(200, 50));

	mainText = new wxTextCtrl(this, wxID_ANY, qFactory(rng) , wxPoint(10, 10), wxSize(830, 50), wxTE_READONLY);



	button1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButton1, this);
	button2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButton2, this);
	button3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButton3, this);
	button4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButton4, this);


	SetMinSize(GetSize());
	SetMaxSize(GetSize());
}

std::string cMain::qFactory(int r) 
{

	std::string question;

	if (r <= 25) { question = "What year was A New Hope released?"; }
	else if (r > 25 && r <= 50) { question = "Which actor is the only one who's appeared in every single Star Wars movie to date?"; }
	else if (r > 50 && r <= 75) { question = "In which film does Luke find out Darth Vader is his father?"; }
	else { question = "Luke Skywalker was raised on which planet?"; }


	return question;
}

//Answers

std::string cMain::aFactory1(int r)
{

	std::string answer;

	if (r <= 25) { answer = "1976"; }
	else if (r > 25 && r <= 50) { answer = "Mark Hamil"; }
	else if (r > 50 && r <= 75) { answer = "A New Hope"; }
	else { answer = "Hoth"; }


	return answer;
}

std::string cMain::aFactory2(int r)
{

	std::string answer;

	if (r <= 25) { answer = "1977"; }
	else if (r > 25 && r <= 50) { answer = "Anthony Daniels"; }
	else if (r > 50 && r <= 75) { answer = "The Empire Strikes Back"; }
	else { answer = "Tatooine"; }


	return answer;
}

std::string cMain::aFactory3(int r)
{

	std::string answer;

	if (r <= 25) { answer = "1978"; }
	else if (r > 25 && r <= 50) { answer = "Harrison Ford"; }
	else if (r > 50 && r <= 75) { answer = "Return of the Jedi"; }
	else { answer = "Alderaan"; }


	return answer;
}

std::string cMain::aFactory4(int r)
{

	std::string answer;

	if (r <= 25) { answer = "1979"; }
	else if (r > 25 && r <= 50) { answer = "Carrie Fisher"; }
	else if (r > 50 && r <= 75) { answer = "Attack of the Clones"; }
	else { answer = "Jakku"; }


	return answer;
}





cMain :: ~cMain() 
{
	delete button1, button2, button3, button4;

}

void cMain::OnButton1(wxCommandEvent& evt)
{

	mainText->Clear();


	mainText->AppendText("Incorrect!");

}

void cMain::OnButton2(wxCommandEvent& evt)
{


	mainText->Clear();


	mainText->AppendText("Correct!");

}
void cMain::OnButton3(wxCommandEvent& evt)
{


	mainText->Clear();


	mainText->AppendText("Incorrect!");

}
void cMain::OnButton4(wxCommandEvent& evt)
{


	mainText->Clear();


	mainText->AppendText("Incorrect!");

}

