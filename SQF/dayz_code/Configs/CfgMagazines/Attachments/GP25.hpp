class Attachment_GP25 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\z\addons\dayz_communityweapons\attachments\gp25\gp25.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\gp25\data\m_gp25_ca.paa";	
	displayName = $STR_DZ_ATT_GP25_NAME;
	descriptionShort = $STR_DZ_ATT_GP25_DESC;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};
