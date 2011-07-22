#ifndef SOUNDMACHINE_H
#define SOUNDMACHINE_H

#include <ofxTCPClient.h>

enum eSoundEventIds {
    SOUND_EVENT_START,
    SOUND_EVENT_SOMEONE_THERE,
    SOUND_EVENT_NOONE_THERE,
    SOUND_EVENT_STOP
};

class SoundMachine : public ofxTCPClient
{
    public:
        SoundMachine();
        virtual ~SoundMachine();
        unsigned int Getport() { return m_port; }
        void Setport(unsigned int val) { m_port = val; }
        string Getip() { return m_ip; }
        void Setip(string val) { m_ip = val; }
        void sendEvent(enum eSoundEventIds _id);
    protected:
    private:
        unsigned int m_port;
        string m_ip;
};

#endif // SOUNDMACHINE_H
