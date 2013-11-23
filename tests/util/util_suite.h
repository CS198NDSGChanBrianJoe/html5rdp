
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is libguac.
 *
 * The Initial Developer of the Original Code is
 * Michael Jumper.
 * Portions created by the Initial Developer are Copyright (C) 2010
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#ifndef _GUAC_TEST_UTIL_SUITE_H
#define _GUAC_TEST_UTIL_SUITE_H

/**
 * Test suite containing unit tests for utility functions built into libguac.
 * These utility functions are included for convenience rather as integral
 * requirements of the core.
 *
 * @file util_suite.h
 */


/**
 * A single Unicode character encoded as one byte with UTF-8.
 */
#define UTF8_1b "g"

/**
 * A single Unicode character encoded as two bytes with UTF-8.
 */
#define UTF8_2b "\xc4\xa3"

/**
 * A single Unicode character encoded as three bytes with UTF-8.
 */
#define UTF8_3b "\xe7\x8a\xac"

/**
 * A single Unicode character encoded as four bytes with UTF-8.
 */
#define UTF8_4b "\xf0\x90\x84\xa3"

/**
 * Registers the utility test suite with CUnit.
 */
int register_util_suite();

/**
 * Unit test for the guac_pool structure and related functions. The guac_pool
 * structure provides a consistent source of pooled integers. This unit test
 * checks that the associated functions behave as documented (returning
 * integers in the proper order, allocating new integers as necessary, etc.).
 */
void test_guac_pool();

/**
 * Unit test for libguac's Unicode convenience functions. This test checks that
 * the functions provided for determining string length, character length, and
 * for reading and writing UTF-8 behave as specified in the documentation.
 */
void test_guac_unicode();

#endif

