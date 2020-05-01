//
//  HomeViewController.h
//  Onjyb
//
//  Created by etech-dev on 5/21/16.
//  Copyright © 2016 eTech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MIBadgeButton.h"

@interface ParentSFOHomeViewController : UIViewController
{
    
    __weak IBOutlet UIView *absentNoticeView;
    __weak IBOutlet UIView *groupMassageView;
    __weak IBOutlet UIView *massageView;
    __weak IBOutlet MIBadgeButton *btnMassage;
    __weak IBOutlet MIBadgeButton *btnAbsentNotice;
    __weak IBOutlet UIButton *btnGroupMassage;
    __weak IBOutlet UIButton *btnInteralMsg;
    __weak IBOutlet UIButton *btnStudant;
    __weak IBOutlet UIButton *btnSFO;
    __weak IBOutlet UILabel *lblStudant;
    __weak IBOutlet UILabel *lblInternal;
    __weak IBOutlet UILabel *lblSFO;
    __weak IBOutlet MIBadgeButton *btnInternalBadge;
    __weak IBOutlet MIBadgeButton *btnStudentBadge;
    __weak IBOutlet MIBadgeButton *btnSFOBadge;
}
-(void)setBadge;

- (IBAction)btnMessagePress:(id)sender;
- (IBAction)btnGroupMessagePress:(id)sender;
- (IBAction)btnAbsentNoticePress:(id)sender;
- (IBAction)btnStudentPress:(id)sender;
- (IBAction)teacherMsgPress:(id)sender;
- (IBAction)sfoPress:(id)sender;
@end
