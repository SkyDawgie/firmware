#pragma once
#include "SinglePortModule.h"

/**
 * A simple example module that just replies with "Message received" to any message it receives.
 */
class MyModule_1 : public SinglePortModule
{
  public:
    /** Constructor
     * name is for debugging output
     */
    MyModule_1() : SinglePortModule("reply", meshtastic_PortNum_PRIVATE_APP) {}

  protected:
    /** For reply module we do all of our processing in the (normally optional)
     * want_replies handling
     */
    virtual meshtastic_MeshPacket *allocReply() override;
};
