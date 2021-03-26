

class SIBPolice_Door_1_1 extends CarDoor {};
class SIBPolice_Door_1_2 extends CarDoor {};
class SIBPolice_Door_2_1 extends CarDoor {};
class SIBPolice_Door_2_2 extends CarDoor {};


class HeliSIB_police_base extends HeliSIB_middle
{

	
	override void creat_InInventory_heli()
	{
		
		if(IsKindOf("Helipolice_swat_SIB5"))
		{
			GetInventory().CreateInInventory( "SIBPolice_Door_1_1_swat" );
			GetInventory().CreateInInventory( "SIBPolice_Door_1_2_swat" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_1_swat" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_2_swat" );
			return;
		}
		if(IsKindOf("Helipolice_SIB4"))
		{
			GetInventory().CreateInInventory( "SIBPolice_Door_1_1" );
			GetInventory().CreateInInventory( "SIBPolice_Door_1_2" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_1" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_2" );
			return;
		}

		super.creat_InInventory_heli();
	};



	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "SIBPolice_Door_1_1";
			break;
		case 1:
			return "SIBPolice_Door_2_1";
			break;
		case 2:
			return "SIBPolice_Door_1_2";
			break;
		case 3:
			return "SIBPolice_Door_2_2";
			break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	


	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;

		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor )return CarDoorState.DOORS_MISSING;
		
		switch( slotType )
		{
		case "SIBPolice_Door_1_1":
			if ( GetAnimationPhase("DoorsDriver") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBPolice_Door_2_1":
			if ( GetAnimationPhase("DoorsCoDriver") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBPolice_Door_1_2":
			if ( GetAnimationPhase("DoorsCargo1") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBPolice_Door_2_2":
			if ( GetAnimationPhase("DoorsCargo2") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;
			break;
			
			
			
		}

		return CarDoorState.DOORS_MISSING;
	}
	

	

	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			if ( GetCarDoorsState( "SIBPolice_Door_1_1" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;
			
		case 1:
			if ( GetCarDoorsState( "SIBPolice_Door_2_1" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;

		case 2:
			if ( GetCarDoorsState( "SIBPolice_Door_1_2" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;

		case 3:
			if ( GetCarDoorsState( "SIBPolice_Door_2_2" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;
		}

		return false;
	}
	
	


};

class Helipolice_SIB4 extends HeliSIB_police_base{};
class Helipolice_swat_SIB5 extends HeliSIB_police_base{};
