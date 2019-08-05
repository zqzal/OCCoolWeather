//
//  AppDelegate.h
//  CoolWeathre
//
//  Created by xuxi on 2019/8/5.
//  Copyright © 2019 xuxi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

