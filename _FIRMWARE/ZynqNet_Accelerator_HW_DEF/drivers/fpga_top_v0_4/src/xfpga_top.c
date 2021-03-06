// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xfpga_top.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XFpga_top_CfgInitialize(XFpga_top *InstancePtr, XFpga_top_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilite_BaseAddress = ConfigPtr->Axilite_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XFpga_top_Start(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_AP_CTRL) & 0x80;
    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_AP_CTRL, Data | 0x01);
}

u32 XFpga_top_IsDone(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XFpga_top_IsIdle(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XFpga_top_IsReady(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XFpga_top_EnableAutoRestart(XFpga_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_AP_CTRL, 0x80);
}

void XFpga_top_DisableAutoRestart(XFpga_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_AP_CTRL, 0);
}

void XFpga_top_Set_layer_width_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_WIDTH_V_DATA, Data);
}

u32 XFpga_top_Get_layer_width_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_WIDTH_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_height_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_HEIGHT_V_DATA, Data);
}

u32 XFpga_top_Get_layer_height_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_HEIGHT_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_channels_in_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_CHANNELS_IN_V_DATA, Data);
}

u32 XFpga_top_Get_layer_channels_in_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_CHANNELS_IN_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_channels_out_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_CHANNELS_OUT_V_DATA, Data);
}

u32 XFpga_top_Get_layer_channels_out_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_CHANNELS_OUT_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_kernel_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_KERNEL_V_DATA, Data);
}

u32 XFpga_top_Get_layer_kernel_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_KERNEL_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_stride_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_STRIDE_V_DATA, Data);
}

u32 XFpga_top_Get_layer_stride_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_STRIDE_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_pad(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_PAD_DATA, Data);
}

u32 XFpga_top_Get_layer_pad(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_PAD_DATA);
    return Data;
}

void XFpga_top_Set_layer_relu(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_RELU_DATA, Data);
}

u32 XFpga_top_Get_layer_relu(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_RELU_DATA);
    return Data;
}

void XFpga_top_Set_layer_is_first_split_layer(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_IS_FIRST_SPLIT_LAYER_DATA, Data);
}

u32 XFpga_top_Get_layer_is_first_split_layer(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_IS_FIRST_SPLIT_LAYER_DATA);
    return Data;
}

void XFpga_top_Set_layer_is_second_split_layer(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_IS_SECOND_SPLIT_LAYER_DATA, Data);
}

u32 XFpga_top_Get_layer_is_second_split_layer(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_IS_SECOND_SPLIT_LAYER_DATA);
    return Data;
}

void XFpga_top_Set_layer_global_pool(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_GLOBAL_POOL_DATA, Data);
}

u32 XFpga_top_Get_layer_global_pool(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_GLOBAL_POOL_DATA);
    return Data;
}

void XFpga_top_Set_layer_mem_addr_input_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_MEM_ADDR_INPUT_V_DATA, Data);
}

u32 XFpga_top_Get_layer_mem_addr_input_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_MEM_ADDR_INPUT_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_mem_addr_output_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_MEM_ADDR_OUTPUT_V_DATA, Data);
}

u32 XFpga_top_Get_layer_mem_addr_output_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_MEM_ADDR_OUTPUT_V_DATA);
    return Data;
}

void XFpga_top_Set_layer_mem_addr_weights_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_MEM_ADDR_WEIGHTS_V_DATA, Data);
}

u32 XFpga_top_Get_layer_mem_addr_weights_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_LAYER_MEM_ADDR_WEIGHTS_V_DATA);
    return Data;
}

void XFpga_top_Set_SHARED_DRAM(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_SHARED_DRAM_DATA, Data);
}

u32 XFpga_top_Get_SHARED_DRAM(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_SHARED_DRAM_DATA);
    return Data;
}

void XFpga_top_Set_weights_offset(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_WEIGHTS_OFFSET_DATA, Data);
}

u32 XFpga_top_Get_weights_offset(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_WEIGHTS_OFFSET_DATA);
    return Data;
}

void XFpga_top_Set_num_weights_V(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_NUM_WEIGHTS_V_DATA, Data);
}

u32 XFpga_top_Get_num_weights_V(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_NUM_WEIGHTS_V_DATA);
    return Data;
}

void XFpga_top_Set_input_offset(XFpga_top *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_INPUT_OFFSET_DATA, Data);
}

u32 XFpga_top_Get_input_offset(XFpga_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_INPUT_OFFSET_DATA);
    return Data;
}

u32 XFpga_top_Get_layer_name_BaseAddress(XFpga_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilite_BaseAddress + XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE);
}

u32 XFpga_top_Get_layer_name_HighAddress(XFpga_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilite_BaseAddress + XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_HIGH);
}

u32 XFpga_top_Get_layer_name_TotalBytes(XFpga_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_HIGH - XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + 1);
}

u32 XFpga_top_Get_layer_name_BitWidth(XFpga_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFPGA_TOP_AXILITE_WIDTH_LAYER_NAME;
}

u32 XFpga_top_Get_layer_name_Depth(XFpga_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFPGA_TOP_AXILITE_DEPTH_LAYER_NAME;
}

u32 XFpga_top_Write_layer_name_Words(XFpga_top *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_HIGH - XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilite_BaseAddress + XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XFpga_top_Read_layer_name_Words(XFpga_top *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_HIGH - XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilite_BaseAddress + XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + (offset + i)*4);
    }
    return length;
}

u32 XFpga_top_Write_layer_name_Bytes(XFpga_top *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_HIGH - XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilite_BaseAddress + XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XFpga_top_Read_layer_name_Bytes(XFpga_top *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_HIGH - XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilite_BaseAddress + XFPGA_TOP_AXILITE_ADDR_LAYER_NAME_BASE + offset + i);
    }
    return length;
}

void XFpga_top_InterruptGlobalEnable(XFpga_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_GIE, 1);
}

void XFpga_top_InterruptGlobalDisable(XFpga_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_GIE, 0);
}

void XFpga_top_InterruptEnable(XFpga_top *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_IER);
    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_IER, Register | Mask);
}

void XFpga_top_InterruptDisable(XFpga_top *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_IER);
    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_IER, Register & (~Mask));
}

void XFpga_top_InterruptClear(XFpga_top *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XFpga_top_WriteReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_ISR, Mask);
}

u32 XFpga_top_InterruptGetEnabled(XFpga_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_IER);
}

u32 XFpga_top_InterruptGetStatus(XFpga_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XFpga_top_ReadReg(InstancePtr->Axilite_BaseAddress, XFPGA_TOP_AXILITE_ADDR_ISR);
}

