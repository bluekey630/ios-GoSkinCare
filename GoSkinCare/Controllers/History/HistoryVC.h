//
//  HistoryVC.h
//  GoSkinCare
//
//  Created by Luokey on 11/20/15.
//  Copyright © 2015 Luokey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HistoryCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UILabel* orderLabel;
@property (weak, nonatomic) IBOutlet UILabel* dateLabel;

@end

@interface HistoryVC : UIViewController

@end
