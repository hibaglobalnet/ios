//
//  FileListDocumentProviderViewController.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 24/11/14.
//
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <UIKit/UIKit.h>
#import "SimpleFileListTableViewController.h"

@interface FileListDocumentProviderViewController : SimpleFileListTableViewController

//Notification to notify that the user has change
extern NSString * userHasChangeNotification;

@property BOOL isNecessaryAdjustThePositionAndTheSizeOfTheNavigationBar;

@end
