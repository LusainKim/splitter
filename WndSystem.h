#pragma once

#define g_pSystem	CWndSystem::Instance()

class CWndSystem : public CBaseWindow,
				   public CTimeManager
{
public:
	int m_Score;
	IProcess* m_pCurProcess;
	CSoundManager* m_pSoundManager;
	CGdi* m_pGdi;
	FMOD::Channel* m_pChannel;

	static CWndSystem* instance;
	float m_abc;

public:
	CWndSystem();
	~CWndSystem();

	bool Initialize();
	void Terminate();
	void Update();
	void Run();
	void ChangeProcess(IProcess::eProcessType eType);
	void KeyboardHandler();

	static CWndSystem* Instance()
	{
		if (instance == NULL)
			instance = new CWndSystem();
		return instance;
	}
};