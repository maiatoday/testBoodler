#include "SoundMachine.h"

SoundMachine::SoundMachine() : ofxTCPClient()
{
    //ctor
    m_port = 31863;
    m_ip = "127.0.0.1";
    setup(m_ip, m_port, false);
}

SoundMachine::~SoundMachine()
{
    //dtor
}


void SoundMachine::sendEvent(enum eSoundEventIds _id)
{
    string sendString = "";
    switch (_id) {
    case SOUND_EVENT_START:
        sendString = "start\n";
        break;
    case SOUND_EVENT_SOMEONE_THERE:
        sendString = "there\n";
        break;
    case SOUND_EVENT_NOONE_THERE:
        sendString = "gone\n";
        break;
    case SOUND_EVENT_STOP:
        sendString = "stop\n";
        break;
    }
    if (isConnected()) {
        send(sendString);
        printf("sound event %s \n", sendString.c_str());
    } else {
        setup(m_ip, m_port, false);
        printf("Couldn't send sound event %s \n", sendString.c_str());
    }
}
