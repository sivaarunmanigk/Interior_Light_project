#include"sdk_project_config.h"
flexcan_state_t canState;
flexcan_msgbuff_t rxMsg;
flexcan_data_info_t rx_info = {.msg_id_type = FLEXCAN_MSG_ID_STD,.data_length = 1,.is_remote = false};
int main(void)
{
	CLOCK_DRV_Init(&clockMan1_InitConfig0);
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0,g_pin_mux_InitConfigArr0);
	FLEXCAN_DRV_Init(INST_FLEXCAN_CONFIG_1, &flexcanState0, &flexcanInitConfig0);
	flexcan_msgbuff_t rxData;
	FLEXCAN_DRV_ConfigRxMb(INST_FLEXCAN_CONFIG_1, 0, &canState,&flexcanInitConfig0);
	FLEXCAN_DRV_Receive(INST_FLEXCAN_CONFIG_1, 0, &rxData);


}
