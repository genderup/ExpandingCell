//
//  MainViewController.h
//  CustomDetailTable
//
//  Created by Mitul Bhadesiya on 29/01/14.
//  Copyright (c) 2014 logistic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController <UITableViewDataSource , UITableViewDelegate>
{
    NSArray *dataArray;
    NSInteger selectedIndex;
    NSMutableArray *mDetailArray;
    
    
}
@property (strong , nonatomic)IBOutlet UITableView *mainTable;



@end
