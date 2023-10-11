#ifndef WARP_STATE_COUNTER
#define WARP_STATE_COUNTER

// Defining custom indexes for the counter array
enum counters { PIPELINE_CYCLE, TOTAL, WAITING_DIVERGENCE,WAITING_CONTROL_HAZARD,WAITING_DATA_HAZARD, ISSUED, XALU_INT,XALU_SFU,XALU_TENSOR_CORE,XALU_SP,XALU_DP, XMEM, OTHER };

// Counter array size
#define NUM_COUNTERS (OTHER + 1)

// Declaring the counter array
extern unsigned long long warp_state_counters[NUM_COUNTERS];

#endif