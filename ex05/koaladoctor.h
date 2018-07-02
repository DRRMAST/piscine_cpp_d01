#ifndef KOALADOCTOR_H
#define KOALADOCTOR_H
class KoalaDoctor
{
	private:
		std::string name;
		int work_flag;
	public:
		KoalaDoctor(std::string name);
		std::string getName();
		void diagnose(SickKoala *patient);
		void timeCheck();
};
#endif
