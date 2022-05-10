#include "Spielstein.h"

void Spielstein::init() {
	//IHR CODE / TEILVORLAGE
	switch (typ)
	{
	case SPIELSTEIN_Z2:
	{
		name = "Z2";
		farbe = HINTERGRUND_BLAU;
		felder[0][0].push_back(Position(2, 0));//__#_
		felder[0][0].push_back(Position(1, 1));//_##_
		felder[0][0].push_back(Position(2, 1));//_#__
		felder[0][0].push_back(Position(1, 2));//____

		felder[0][1].push_back(Position(1, 1));//____
		felder[0][1].push_back(Position(2, 1));//_##_
		felder[0][1].push_back(Position(2, 2));//__##
		felder[0][1].push_back(Position(3, 2));//____

		felder[0][2].push_back(Position(2, 0));//__#_
		felder[0][2].push_back(Position(1, 1));//_##_
		felder[0][2].push_back(Position(2, 1));//_#__
		felder[0][2].push_back(Position(1, 2));//____

		felder[0][3].push_back(Position(1, 1));//____
		felder[0][3].push_back(Position(2, 1));//_##_
		felder[0][3].push_back(Position(2, 2));//__##
		felder[0][3].push_back(Position(3, 2));//____

		felder[1][0].push_back(Position(1, 0));//_#__
		felder[1][0].push_back(Position(1, 1));//_##_
		felder[1][0].push_back(Position(2, 1));//__#_
		felder[1][0].push_back(Position(2, 2));//____

		felder[1][1].push_back(Position(2, 1));//____
		felder[1][1].push_back(Position(3, 1));//__##
		felder[1][1].push_back(Position(1, 2));//_##_
		felder[1][1].push_back(Position(2, 2));//____

		felder[1][2].push_back(Position(1, 0));//_#__
		felder[1][2].push_back(Position(1, 1));//_##_
		felder[1][2].push_back(Position(2, 1));//__#_
		felder[1][2].push_back(Position(2, 2));//____

		felder[1][3].push_back(Position(2, 1));//____
		felder[1][3].push_back(Position(3, 1));//__##
		felder[1][3].push_back(Position(1, 2));//_##_
		felder[1][3].push_back(Position(2, 2));//____
		break;
	}
	case SPIELSTEIN_Z3:
	{
		name = "Z3";
		farbe = HINTERGRUND_HELL_BLAU;
		felder[0][0].push_back(Position(2, 0));//__#_
		felder[0][0].push_back(Position(0, 1));//###_
		felder[0][0].push_back(Position(1, 1));//#___
		felder[0][0].push_back(Position(2, 1));//____
		felder[0][0].push_back(Position(0, 2));//____


		felder[0][1].push_back(Position(1, 1));//____
		felder[0][1].push_back(Position(2, 1));//_##_
		felder[0][1].push_back(Position(2, 2));//__#_
		felder[0][1].push_back(Position(2, 3));//__##
		felder[0][1].push_back(Position(3, 3));//____

		felder[0][2].push_back(Position(2, 0));//__#_
		felder[0][2].push_back(Position(0, 1));//###_
		felder[0][2].push_back(Position(1, 1));//#___
		felder[0][2].push_back(Position(2, 1));//____
		felder[0][2].push_back(Position(1, 2));//____

		felder[0][3].push_back(Position(1, 1));//____
		felder[0][3].push_back(Position(2, 1));//_##_
		felder[0][3].push_back(Position(2, 2));//__#_
		felder[0][3].push_back(Position(2, 3));//__##
		felder[0][3].push_back(Position(3, 3));//____

		felder[1][0].push_back(Position(1, 0));//_#__
		felder[1][0].push_back(Position(1, 1));//_###
		felder[1][0].push_back(Position(2, 1));//___#
		felder[1][0].push_back(Position(3, 1));//____
		felder[1][0].push_back(Position(3, 2));//____

		felder[1][1].push_back(Position(2, 1));//____
		felder[1][1].push_back(Position(3, 1));//__##
		felder[1][1].push_back(Position(2, 2));//__#_
		felder[1][1].push_back(Position(2, 3));//_##_
		felder[1][1].push_back(Position(1, 3));//____

		felder[1][2].push_back(Position(1, 0));//_#__
		felder[1][2].push_back(Position(1, 1));//_###
		felder[1][2].push_back(Position(2, 1));//___#
		felder[1][2].push_back(Position(3, 1));//____
		felder[1][2].push_back(Position(3, 2));//____

		felder[1][3].push_back(Position(2, 1));//____
		felder[1][3].push_back(Position(3, 1));//__##
		felder[1][3].push_back(Position(2, 2));//__#_
		felder[1][3].push_back(Position(2, 3));//_##_
		felder[1][3].push_back(Position(1, 3));//____
		
		break;
	}
	case SPIELSTEIN_L2:
	{
		name = "L2";
		farbe = HINTERGRUND_CYAN;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(1, 1));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(0, 1));//#_
		felder[0][1].push_back(Position(1, 1));//##__

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));//#_

		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(1, 1));//##__

		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(1, 0));//##__
		felder[1][1].push_back(Position(0, 1));//#_

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));//#_

		felder[1][3].push_back(Position(1, 0));
		felder[1][3].push_back(Position(0, 1));//#_
		felder[1][3].push_back(Position(1, 1));//##__

		break;
	}
	case SPIELSTEIN_L3:
	{
		name = "L3";
		farbe = HINTERGRUND_HELL_GRUEN;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_
		felder[0][0].push_back(Position(1, 2));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(1, 1));//###_
		felder[0][1].push_back(Position(1, 2));//__

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//###
		felder[0][3].push_back(Position(2, 0));//_#
		felder[0][3].push_back(Position(2, 1));

		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(1, 2));//##__

		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(0, 1));//###_
		felder[1][1].push_back(Position(0, 2));//#_
		felder[1][1].push_back(Position(2, 0));//__

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));//#_

		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(0, 1));//_#
		felder[1][3].push_back(Position(1, 1));//###_
		felder[1][3].push_back(Position(2, 1));
		
		break;
	}
	case SPIELSTEIN_L4:
	{
		name = "L4";
		farbe = HINTERGRUND_HELL_LILA;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(1, 2));//#_
		felder[0][0].push_back(Position(0, 3));//#_
		felder[0][0].push_back(Position(1, 3));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(1, 1));//####
		felder[0][1].push_back(Position(1, 2));//__
		felder[0][1].push_back(Position(1, 3));

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_
		felder[0][2].push_back(Position(0, 3));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//####
		felder[0][3].push_back(Position(2, 0));//_#
		felder[0][3].push_back(Position(3, 0));
		felder[0][3].push_back(Position(2, 1));

		felder[1][0].push_back(Position(0, 0));//#
		felder[1][0].push_back(Position(0, 1));
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(0, 3));//#_
		felder[1][0].push_back(Position(1, 3));//##__

		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(0, 1));//####
		felder[1][1].push_back(Position(0, 2));//#_
		felder[1][1].push_back(Position(0, 3));
		felder[1][1].push_back(Position(2, 0));//__

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));//#_
		felder[1][2].push_back(Position(1, 3));//#_

		felder[1][3].push_back(Position(3, 0));
		felder[1][3].push_back(Position(0, 1));//_#
		felder[1][3].push_back(Position(1, 1));//####
		felder[1][3].push_back(Position(2, 1));
		felder[1][3].push_back(Position(3, 1));

		

		break;
	}
	case SPIELSTEIN_I2:
	{
		name = "I2";
		farbe = HINTERGRUND_LILA;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_

		felder[0][1].push_back(Position(0, 0));//##__
		felder[0][1].push_back(Position(1, 0));//__

		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//__

		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_

		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//__

		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_

		felder[1][3].push_back(Position(0, 0));//##__
		felder[1][3].push_back(Position(1, 0));//__

		
		break;
	}
	case SPIELSTEIN_I3:
	{
		name = "I3";
		farbe = HINTERGRUND_HELL_BLAU;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_

		felder[0][1].push_back(Position(0, 0));//###_
		felder[0][1].push_back(Position(1, 0));//__
		felder[0][1].push_back(Position(2, 0));

		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_

		felder[0][3].push_back(Position(0, 0));//###_
		felder[0][3].push_back(Position(1, 0));//__
		felder[0][3].push_back(Position(2, 0));


		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_


		felder[1][1].push_back(Position(0, 0));//###_
		felder[1][1].push_back(Position(1, 0));//__
		felder[1][1].push_back(Position(2, 0));


		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(0, 2));//#_


		felder[1][3].push_back(Position(0, 0));//###_
		felder[1][3].push_back(Position(1, 0));//__
		felder[1][3].push_back(Position(2, 0));
		
		break;
	}
	case SPIELSTEIN_I4:
	{
		name = "I4";
		farbe = HINTERGRUND_HELL_GRAU;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_
		felder[0][0].push_back(Position(0, 3));//#_

		felder[0][1].push_back(Position(0, 0));//####
		felder[0][1].push_back(Position(1, 0));//__
		felder[0][1].push_back(Position(2, 0));
		felder[0][1].push_back(Position(3, 0));

		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_
		felder[0][2].push_back(Position(0, 3));//#_

		felder[0][3].push_back(Position(0, 0));//####
		felder[0][3].push_back(Position(1, 0));//__
		felder[0][3].push_back(Position(2, 0));
		felder[0][3].push_back(Position(3, 0));

		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(0, 3));//#_

		felder[1][1].push_back(Position(0, 0));//####
		felder[1][1].push_back(Position(1, 0));//__
		felder[1][1].push_back(Position(2, 0));
		felder[1][1].push_back(Position(3, 0));

		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(0, 2));//#_
		felder[1][2].push_back(Position(0, 3));//#_

		felder[1][3].push_back(Position(0, 0));//####
		felder[1][3].push_back(Position(1, 0));//__
		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(3, 0));
		break;
	}
	case SPIELSTEIN_Q:
	{
		name = "Q";
		farbe = HINTERGRUND_ROT;
		felder[0][0].push_back(Position(0, 0));//##__
		felder[0][0].push_back(Position(1, 0));//##__
		felder[0][0].push_back(Position(0, 1));
		felder[0][0].push_back(Position(1, 0));

		felder[0][1].push_back(Position(0, 0));//##__
		felder[0][1].push_back(Position(1, 0));//##__
		felder[0][1].push_back(Position(0, 1));
		felder[0][1].push_back(Position(1, 0));

		felder[0][2].push_back(Position(0, 0));//##__
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));
		felder[0][2].push_back(Position(1, 1));

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));

		felder[1][0].push_back(Position(0, 0));//##__
		felder[1][0].push_back(Position(1, 0));//##__
		felder[1][0].push_back(Position(0, 1));
		felder[1][0].push_back(Position(1, 1));

		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//##__
		felder[1][1].push_back(Position(0, 1));
		felder[1][1].push_back(Position(1, 1));

		felder[1][2].push_back(Position(0, 0));//##__
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));
		felder[1][2].push_back(Position(1, 1));

		felder[1][3].push_back(Position(0, 0));//##__
		felder[1][3].push_back(Position(1, 0));//##__
		felder[1][3].push_back(Position(0, 1));
		felder[1][3].push_back(Position(1, 1));

		
		break;
	}
	case SPIELSTEIN_QPLUS: //GECHECKT
	{
		name = "QPLUS";
		farbe = HINTERGRUND_GRUEN;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//##__
		felder[0][0].push_back(Position(1, 1));//##__
		felder[0][0].push_back(Position(0, 2));
		felder[0][0].push_back(Position(1, 2));


		felder[0][1].push_back(Position(0, 0));//###_
		felder[0][1].push_back(Position(1, 0));//##__
		felder[0][1].push_back(Position(2, 0));
		felder[0][1].push_back(Position(0, 1));
		felder[0][1].push_back(Position(1, 1));

		felder[0][2].push_back(Position(0, 0));//##__
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(1, 1));
		felder[0][2].push_back(Position(1, 2));


		felder[0][3].push_back(Position(1, 0));//##_
		felder[0][3].push_back(Position(2, 0));//###__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));
		felder[0][3].push_back(Position(2, 1));


		felder[1][0].push_back(Position(1, 0));//#_
		felder[1][0].push_back(Position(0, 1));//##__
		felder[1][0].push_back(Position(1, 1));//##__
		felder[1][0].push_back(Position(0, 2));
		felder[1][0].push_back(Position(1, 2));

		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//###_
		felder[1][1].push_back(Position(0, 1));
		felder[1][1].push_back(Position(1, 1));
		felder[1][1].push_back(Position(2, 1));


		felder[1][2].push_back(Position(0, 0));//##__
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(1, 1));
		felder[1][2].push_back(Position(1, 2));


		felder[1][3].push_back(Position(0, 0));//###__
		felder[1][3].push_back(Position(1, 0));//##_
		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(1, 1));
		felder[1][3].push_back(Position(2, 1));
		break;
	}
	case SPIELSTEIN_T:
	{
		name = "T";
		farbe = HINTERGRUND_HELL_GELB;
		felder[0][0].push_back(Position(1, 0));//#_
		felder[0][0].push_back(Position(0, 1));//###_
		felder[0][0].push_back(Position(1, 1));
		felder[0][0].push_back(Position(2, 1));

		felder[0][1].push_back(Position(0, 0));//#_
		felder[0][1].push_back(Position(0, 1));//##__
		felder[0][1].push_back(Position(1, 1));//#
		felder[0][1].push_back(Position(2, 0));

		felder[0][2].push_back(Position(1, 0));//###_
		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(1, 1));
		felder[0][2].push_back(Position(2, 0));

		felder[0][3].push_back(Position(1, 0));//#_
		felder[0][3].push_back(Position(0, 1));//##__
		felder[0][3].push_back(Position(1, 1));//#_
		felder[0][3].push_back(Position(1, 2));

		felder[1][0].push_back(Position(1, 0));//#_
		felder[1][0].push_back(Position(0, 1));//###_
		felder[1][0].push_back(Position(1, 1));
		felder[1][0].push_back(Position(2, 1));

		felder[1][1].push_back(Position(0, 0));//#_
		felder[1][1].push_back(Position(0, 1));//##__
		felder[1][1].push_back(Position(1, 1));//#
		felder[1][1].push_back(Position(2, 0));

		felder[1][2].push_back(Position(1, 0));//###_
		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(1, 1));
		felder[1][2].push_back(Position(2, 0));

		felder[1][2].push_back(Position(1, 0));//#_
		felder[1][2].push_back(Position(0, 1));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));

		
		break;
	}
	case SPIELSTEIN_TPLUS:
	{name = "TPLUS";
	farbe = HINTERGRUND_HELL_ROT;
	felder[0][0].push_back(Position(1, 0));//#_
	felder[0][0].push_back(Position(0, 1));//####
	felder[0][0].push_back(Position(1, 1));
	felder[0][0].push_back(Position(2, 1));
	felder[0][0].push_back(Position(3, 1));

	felder[0][1].push_back(Position(0, 0));//#_
	felder[0][1].push_back(Position(0, 1));//##__
	felder[0][1].push_back(Position(1, 1));//#
	felder[0][1].push_back(Position(0, 2));//#
	felder[0][1].push_back(Position(0, 3));

	felder[0][2].push_back(Position(0, 0));//####_
	felder[0][2].push_back(Position(1, 0));//_#_
	felder[0][2].push_back(Position(2, 0));
	felder[0][2].push_back(Position(3, 0));
	felder[0][2].push_back(Position(2, 1));

	felder[0][3].push_back(Position(1, 0));//#_
	felder[0][3].push_back(Position(1, 1));//#_
	felder[0][3].push_back(Position(0, 2));//##__
	felder[0][3].push_back(Position(1, 2));//#_
	felder[0][3].push_back(Position(1, 3));

	felder[1][0].push_back(Position(2, 0));//_#
	felder[1][0].push_back(Position(0, 1));//####
	felder[1][0].push_back(Position(1, 1));
	felder[1][0].push_back(Position(2, 1));
	felder[1][0].push_back(Position(3, 1));

	felder[1][1].push_back(Position(0, 0));//#_
	felder[1][1].push_back(Position(0, 1));//#_
	felder[1][1].push_back(Position(0, 2));//##
	felder[1][1].push_back(Position(1, 2));//#
	felder[1][1].push_back(Position(0, 3));

	felder[1][2].push_back(Position(0, 0));//####_
	felder[1][2].push_back(Position(1, 0));//#__
	felder[1][2].push_back(Position(2, 0));
	felder[1][2].push_back(Position(3, 0));
	felder[1][2].push_back(Position(1, 1));

	felder[1][3].push_back(Position(1, 0));//#_
	felder[1][3].push_back(Position(0, 1));//##__
	felder[1][3].push_back(Position(1, 1));//#_
	felder[1][3].push_back(Position(1, 2));//#_
	felder[1][3].push_back(Position(1, 3));
		
		break;
	}
	case SPIELSTEIN_FREI:
	{
		name = "FREI";
		farbe = HINTERGRUND_HELL_GRAU;
		break;
	}
	case SPIELSTEIN_LOESUNG:
	{
		name = "LOESUNG";
		farbe = HINTERGRUND_HELL_WEISS;
		break;
	}
	default:
		break;
	}
}
void Spielstein::zeichne()
{
	Cursor::setze_Farbe(farbe);
	int offset_x = this->position.getX();
	int offset_y = this->position.getY();
	
			if (felder[seite][orientierung].size() == 2) {
				for (int j = 0; j < 3; j++) {
					Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
				}
			}
			else if (felder[seite][orientierung].size() == 3) {
				for (int j = 0; j < 3; j++) {
					Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
				}
			}
			else if (felder[seite][orientierung].size() == 4) {
				for (int j = 0; j < 4; j++) {
					Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
				}
			}
			else if (felder[seite][orientierung].size() == 5) {
				for (int j = 0; j < 5; j++) {
					Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
				}
			}
			
	
}
void Spielstein::loesche()
{
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
	int offset_x = this->position.getX();
	int offset_y = this->position.getY();
	if (felder[seite][orientierung].size() == 2) {
		for (int j = 0; j < 2; j++) {
			Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
		}
	}
	else if (felder[seite][orientierung].size() == 3) {
		for (int j = 0; j < 3; j++) {
			Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
		}
	}
	else if (felder[seite][orientierung].size() == 4) {
		for (int j = 0; j < 4; j++) {
			Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
		}
	}
	else if (felder[seite][orientierung].size() == 5) {
		for (int j = 0; j < 5; j++) {
			Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
		}
	}
}
void Spielstein::bewegen(int richtung)
{

	int offset_x = this->position.getX();
	int offset_y = this->position.getY();
	//go up
	if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH) {
		
			if (felder[seite][orientierung].size() == 2) {
				for (int j = 0; j < 2; j++) {
					felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() - 1) };
				}
			}
			else if (felder[seite][orientierung].size() == 3) {
				for (int j = 0; j < 3; j++) {
					felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() - 1) };
				}
			}
			else if (felder[seite][orientierung].size() == 4) {
				for (int j = 0; j < 4; j++) {
					felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() - 1) };
				}
			}
			else if (felder[seite][orientierung].size() == 5) {
				for (int j = 0; j < 5; j++) {
					felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() - 1) };
				}
			}

	}

	//go down 
	else if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER) {

		if (felder[seite][orientierung].size() == 2) {
			for (int j = 0; j < 2; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() + 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 3) {
			for (int j = 0; j < 3; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() + 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 4) {
			for (int j = 0; j < 4; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() + 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 5) {
			for (int j = 0; j < 5; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() ,felder[seite][orientierung][j].getY() + 1) };
			}
		}

	}

	//go right
	else if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS) {

		if (felder[seite][orientierung].size() == 2) {
			for (int j = 0; j < 2; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() +1 ,felder[seite][orientierung][j].getY()) };
			}
		}
		else if (felder[seite][orientierung].size() == 3) {
			for (int j = 0; j < 3; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() + 1 ,felder[seite][orientierung][j].getY() - 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 4) {
			for (int j = 0; j < 4; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() + 1 ,felder[seite][orientierung][j].getY() - 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 5) {
			for (int j = 0; j < 5; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() + 1 ,felder[seite][orientierung][j].getY() - 1) };
			}
		}

	}

	//go left
	else if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS) {

		if (felder[seite][orientierung].size() == 2) {
			for (int j = 0; j < 2; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() - 1 ,felder[seite][orientierung][j].getY() - 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 3) {
			for (int j = 0; j < 3; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() - 1 ,felder[seite][orientierung][j].getY() - 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 4) {
			for (int j = 0; j < 4; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() - 1 ,felder[seite][orientierung][j].getY() - 1) };
			}
		}
		else if (felder[seite][orientierung].size() == 5) {
			for (int j = 0; j < 5; j++) {
				felder[seite][orientierung][j] = { Position(felder[seite][orientierung][j].getX() - 1 ,felder[seite][orientierung][j].getY() - 1) };
			}
		}

	}
}

//Inkrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_rechts()
{
	if (this->orientierung >= 0 && this->orientierung <= 3) {

		this->orientierung += 1; 
	}
}

//Dekrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_links()
{
	if (this->orientierung >= 0 && this->orientierung <= 3) {

		this->orientierung -= 1;
	}
}

//Inkrementiert das Attribut seite um 1, wobei stets Werte zwischen 0 und 1 angenommen werden.
void Spielstein::flip()
{
	if (this->seite == 0) {

		this->seite = 1;
	}
	else if (this->seite == 1) {

		this->seite = 0;
	}
}

//Gibt den felder Vektor der aktuellen Lage des Spielsteins zurück.
std::vector<Position>* Spielstein::getPositionen()
{
	this->seite = seite; 
	this->orientierung = orientierung; 

	return &this->felder[this->seite][this->orientierung];
}

//Durchläuft den felder Vektor des Spielsteins in aktueller Lage.
//Gibt true zurück, falls die übergebene Position innerhalb des Spielsteines liegt.
//Ansonsten wird false zurückgegeben.
bool Spielstein::innerhalb(Position pos) const
{


		for (unsigned int i = 0; i < this->felder[this->seite][this->orientierung].size(); i++) {
			if (this->felder[seite][orientierung][i] == pos) {
				return true;
				break;
			}
			else {
				return false; 
			}
		}
	
	
	
	/*else if (felder[seite][orientierung].size() == 3) {
		for (int i = 0; i < 3; i++) {
			if (this->felder[seite][orientierung][i] == pos)
				return true;
			break;
		}
	}
	else if (felder[seite][orientierung].size() == 4) {
		for (int i = 0; i < 4; i++) {
			if (this->felder[seite][orientierung][i] == pos)
				return true;
			break;
		}
	}
	else if (felder[seite][orientierung].size() == 5) {
		for (int i = 0; i < 5; i++) {
			if (this->felder[seite][orientierung][i] == pos)
				return true;
			break;
		}
	}*/
	
}

//Gibt war zurück, falls sich der aufrufende und der übergebene Spielstein sich in mindestens einer Position überlappen.
bool Spielstein::ueberlapp(Spielstein& sp) 
{
		for (unsigned int i = 0; i < sp.felder[sp.seite][sp.orientierung].size(); i++) {
			for (unsigned int j = 0; j < this->felder[this->seite][this->orientierung].size(); j++) {
				if (sp.felder[sp.seite][sp.orientierung][i] == this->felder[this->seite][this->orientierung][j]) {
					return true;
					
				}
				else {
					return false;
					
				}
				

			}
		
		}
	   





}

//Addiert zwei Spielsteine in ihrer aktuellen Lage und gibt die Summe als neuen Spielstein zurück.
Spielstein Spielstein::operator+ (const Spielstein& rhs) const
{
	Spielstein summe(SPIELSTEIN_FREI);

	if (this->felder[this->seite][this->orientierung].size() == 2 || rhs.felder[rhs.seite][rhs.orientierung].size() == 2) {
		for (int i = 0; i < 2; i++) {
			summe.felder[seite][orientierung].push_back(this->felder[this->seite][this->orientierung][i] + rhs.felder[seite][orientierung][i]);
			return summe;
		}
	}
	else if (this->felder[this->seite][this->orientierung].size() == 3 || rhs.felder[rhs.seite][rhs.orientierung].size() == 3) {
		for (int i = 0; i < 3; i++) {
			summe.felder[seite][orientierung].push_back(this->felder[this->seite][this->orientierung][i] + rhs.felder[seite][orientierung][i]);
			return summe;
		}
	}
	else if (this->felder[this->seite][this->orientierung].size() == 4 || rhs.felder[rhs.seite][rhs.orientierung].size() == 4) {
		for (int i = 0; i < 4; i++) {
			summe.felder[seite][orientierung].push_back(this->felder[this->seite][this->orientierung][i] + rhs.felder[seite][orientierung][i]);
			return summe;
		}
	}
	else if (this->felder[this->seite][this->orientierung].size() == 5 || rhs.felder[rhs.seite][rhs.orientierung].size() == 5) {
		for (int i = 0; i < 5; i++) {
			summe.felder[seite][orientierung].push_back(this->felder[this->seite][this->orientierung][i] + rhs.felder[seite][orientierung][i]);
			return summe;
		}
	}
	
	
}
