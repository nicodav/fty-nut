#ifndef __ALERT_DEVICE_LIST
#define __ALERT_DEVICE_LIST

#include "agent_nut_library.h"
#include "alert_device.h"


class Devices {
 public:
    void update ();
    void publishAlerts (mlm_client_t *client); 
    void publishRules (mlm_client_t *client);

    // friend function for unit-testing
    friend void alert_actor_test (bool verbose);
 private:
    std::map <std::string, Device>  _devices;

    void updateDeviceList(nut::TcpClient& nutClient);
    void updateDevices(nut::TcpClient& nutClient);
};
    
#endif // __ALERT_DEVICE_LIST