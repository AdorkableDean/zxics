//
//  personfootprintlist.h
//  zxics
//
//  Created by johnson on 14-8-21.
//  Copyright (c) 2014年 moko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface personfootprintlist : UIViewController
{
    NSMutableArray *list;
    NSInteger page;
    NSString *tname;
    NSArray *typelist;
}
@property (weak, nonatomic) IBOutlet UINavigationBar *UINavigationBar;
@property (weak, nonatomic) IBOutlet UITableView *pfpTView;

@end
