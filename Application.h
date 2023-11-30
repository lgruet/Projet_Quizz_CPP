#include "Question.h"

using namespace std;

class Application{
    private :
    Question qst_tab [5];
    int score;
    bool ready; // Indique si le joueur est prêt à jouer

    public :
    //Constructeur
    Application();

    //renvoie une question aléatoire
    Question Question_Random();
    
    //Incrémente 
    int Increment_Score();

    void Init_Jeu();

    void Fin_Jeu();

    void Init_Application();
    void Run_Application();

};