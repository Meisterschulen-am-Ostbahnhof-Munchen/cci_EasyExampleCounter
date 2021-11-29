/* Example test application for testable component.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <stdio.h>
#include <string.h>
#include "unity.h"

static void print_banner(const char* text);

extern "C" void app_main(void)
{
    /* These are the different ways of running registered tests.
     * In practice, only one of them is usually needed.
     *
     * UNITY_BEGIN() and UNITY_END() calls tell Unity to print a summary
     * (number of tests executed/failed/ignored) of tests executed between these calls.
     */
    print_banner("Executing one test by its name");
    UNITY_BEGIN();
    unity_run_test_by_name("init");
    unity_run_test_by_name("int8_t");
    unity_run_test_by_name("int16_t");
    unity_run_test_by_name("int32_t");
    unity_run_test_by_name("int64_t");
    unity_run_test_by_name("uint8_t");
    unity_run_test_by_name("uint16_t");
    unity_run_test_by_name("uint32_t");
    unity_run_test_by_name("uint64_t");
    unity_run_test_by_name("string");
    UNITY_END();


}

static void print_banner(const char* text)
{
    printf("\n#### %s #####\n\n", text);
}
