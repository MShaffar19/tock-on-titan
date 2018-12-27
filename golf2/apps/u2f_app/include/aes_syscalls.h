// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TOCK_AES_H
#define TOCK_AES_H

#include <stdlib.h>

#define HOTEL_DRIVER_AES 0x40000

#define TOCK_AES_CMD_CHECK 0
#define TOCK_AES_CMD_SETUP 1
#define TOCK_AES_CMD_CRYPT 2
#define TOCK_AES_CMD_READ_DATA 3
#define TOCK_AES_CMD_FINISH 4
#define TOCK_AES_CMD_SET_ENCRYPT_MODE 5

#define TOCK_AES_ALLOW_KEY 0
#define TOCK_AES_ALLOW_INPUT 1
#define TOCK_AES_ALLOW_OUTPUT 2

#define TOCK_AES_SIZE_128 0
#define TOCK_AES_SIZE_192 1
#define TOCK_AES_SIZE_256 2

#define TOCK_AES_DECRYPT 0
#define TOCK_AES_ENCRYPT 1

#define TOCK_AES_DONE_CIPHER_INT 0
#define TOCK_AES_DONE_KEY_EXPANSION_INT 1
#define TOCK_AES_DONE_WIPE_SECRETS_INT 2

int tock_aes_setup(void *key, size_t len, int aes_size, int encrypt);
int tock_aes_crypt(void *data, size_t datalen, void *out, size_t outlen);
int tock_aes_finish();

#endif
