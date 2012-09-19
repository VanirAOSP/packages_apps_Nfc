/*
 * Copyright (C) 2010 The Android Open Source Project
 * Copyright (C) 2012 Broadcom Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once


namespace android
{
    extern jmethodID gCachedNfcManagerNotifyNdefMessageListeners;
    extern jmethodID gCachedNfcManagerNotifyTransactionListeners;
    extern jmethodID gCachedNfcManagerNotifyLlcpLinkActivation;
    extern jmethodID gCachedNfcManagerNotifyLlcpLinkDeactivated;
    extern jmethodID gCachedNfcManagerNotifySeFieldActivated;
    extern jmethodID gCachedNfcManagerNotifySeFieldDeactivated;

    extern const char* gNativeP2pDeviceClassName;
    extern const char* gNativeLlcpServiceSocketClassName;
    extern const char* gNativeLlcpConnectionlessSocketClassName;
    extern const char* gNativeLlcpSocketClassName;
    extern const char* gNativeNfcTagClassName;
    extern const char* gNativeNfcManagerClassName;
    extern const char* gNativeNfcSecureElementClassName;
}