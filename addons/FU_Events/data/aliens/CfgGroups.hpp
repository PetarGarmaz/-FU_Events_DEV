class CfgGroups {
	class East {
		class FU_Aliens {
			name="FU Aliens";
			
			class Infantry {
				name="Infantry";
				
				class FU_A_Squad {
					name="Squad";
					faction="FU_Aliens";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.5;
					side = 0;
					
					class Unit0 {
						position[]={0,0,0};
						rank="SERGEANT";
						vehicle="FU_A_SL";
						side = 0;
					};

					class Unit1	{
						position[]={0,2,0};
						rank="CORPORAL";
						vehicle="FU_A_Medic";
						side = 0;
					};

					class Unit2	{
						position[]={2,2,0};
						rank="PRIVATE";
						vehicle="FU_A_Medic";
						side = 0;
					};

					class Unit3	{
						position[]={2,0,0};
						rank="PRIVATE";
						vehicle="FU_A_Engineer";
						side = 0;
					};

					class Unit4	{
						position[]={2,-2,0};
						rank="PRIVATE";
						vehicle="FU_A_Engineer";
						side = 0;
					};

					class Unit5	{
						position[]={-2,2,0};
						rank="PRIVATE";
						vehicle="FU_A_Rifleman";
						side = 0;
					};

					class Unit6	{
						position[]={-2,-2,0};
						rank="PRIVATE";
						vehicle="FU_A_Rifleman";
						side = 0;
					};

					class Unit7	{
						position[]={-2,0,0};
						rank="PRIVATE";
						vehicle="FU_A_Rifleman";
						side = 0;
					};
				};

				class FU_A_Team {
					name="Team";
					faction="FU_Aliens";
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					rarityGroup=0.5;
					side = 0;
					
					class Unit0 {
						position[]={0,0,0};
						rank="SERGEANT";
						vehicle="FU_A_SL";
						side = 0;
					};

					class Unit1	{
						position[]={0,2,0};
						rank="CORPORAL";
						vehicle="FU_A_Medic";
						side = 0;
					};

					class Unit2	{
						position[]={2,0,0};
						rank="PRIVATE";
						vehicle="FU_A_Rifleman";
						side = 0;
					};

					class Unit3	{
						position[]={-2,0,0};
						rank="PRIVATE";
						vehicle="FU_A_Engineer";
						side = 0;
					};
				};

				class FU_A_Patrol {
					name="Patrol";
					faction="FU_Aliens";
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					rarityGroup=0.5;
					side = 0;

					class Unit0 {
						position[]={0,0,0};
						rank="SERGEANT";
						vehicle="FU_A_SL";
						side = 0;
					};

					class Unit1	{
						position[]={0,-2,0};
						rank="CORPORAL";
						vehicle="FU_A_Medic";
						side = 0;
					};
				};
			};
		};
	};
};