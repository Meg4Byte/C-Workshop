#include "semafor.hpp"


Lockheart :: Lockheart()
{
	state = ISKLJUCENA;
	temperatura = MIN_TEMP;
}

Lockheart :: ~Lockheart()
{
	cout<<"HEY POZVAO SE DESTRUKTOR"<<endl;
}

bool Lockheart::isIskljuci()
{
	if (state == UKLJUCENA)
	{
		state = ISKLJUCENA;
		temperatura = MIN_TEMP;
		return true;
	}

	else
	{
		return false;
	}
}

bool Lockheart::isUkljuci()
{
	if (state == ISKLJUCENA)
	{
		state = UKLJUCENA;
		temperatura += INCREMENT;
	}

	else
	{
		return false;
	}
}

bool Lockheart::isPokvari()
{
		if (state != POKVARENA)
		{
			state = POKVARENA;
			temperatura = MIN_TEMP;
			return true;
		}

		else
		{
			return false;
		}
}

bool Lockheart::isPopravi()
{
		if (state == POKVARENA)
		{
			state = ISKLJUCENA;
			temperatura = MIN_TEMP;
			return true;
		}

		else
		{
			return false;
		}
}

bool Lockheart::isPojacaj()
{
		if (state == UKLJUCENA && (temperatura < MAX_TEMP))
		{
			temperatura+=INCREMENT;
			return true;
		}

		else
		{
			return false;
		}
}

bool Lockheart::isSmanji()
{
		if (state == UKLJUCENA && temperatura > MIN_TEMP)
		{
			temperatura-=INCREMENT;
			return true;
		}

		else
		{
			return false;
		}
}

StanjeRerne Lockheart::getTrenutnoStanje() const
{
	return state;
}

int Lockheart::getTemperatura() const
{
		return temperatura;
}



