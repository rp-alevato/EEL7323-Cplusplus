#ifndef CLOCK
#define CLOCK

class Clock {
	protected:
		unsigned int hour, min, sec;
		bool isPM;
	public:
		Clock (unsigned int hour, unsigned int min, unsigned int sec, bool isPM);
		~Clock();
		void setClock (unsigned int hour, unsigned int min, unsigned int sec, bool isPM);
		/** Get the 3 parameters */
		void readClock (unsigned int& hour, unsigned int& min, unsigned int& sec, bool& isPM);

		/** Advances the clock in one second */
		void advance ();
};

#endif		// CLOCK