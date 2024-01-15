//Television.h
class Television {
	//Attributs
	private:
		int chaine;
		bool estAllumee;
		string marque;
		int volume;
	//Methodes
	public:
		void Allumer();
		void Eteindre();
		void SetVolume(int vol);
		void ChangeDeChaine(int c);
		void GetVomume();
		//constructeur
		Television(string marque);


};