
#include "CppUTest/TestHarness.h"
#include "filezilla.h"
#include "aboutdialog.h"

TEST_GROUP(AboutDialog)
{
};

TEST(AboutDialog, fail)
{
	CAboutDialog dialog;
	FAIL("FAIL");
}
