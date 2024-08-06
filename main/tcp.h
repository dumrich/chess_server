#pragma once

#define PORT CONFIG_PORT
#define KEEPALIVE_IDLE CONFIG_KEEPALIVE_IDLE
#define KEEPALIVE_INTERVAL CONFIG_KEEPALIVE_INTERVAL
#define KEEPALIVE_COUNT CONFIG_KEEPALIVE_COUNT

#ifdef __cplusplus
extern "C" {
#endif

void tcp_server_task(void* pvParameters);
void do_retransmit(const int sock);

#ifdef __cplusplus
}
#endif
