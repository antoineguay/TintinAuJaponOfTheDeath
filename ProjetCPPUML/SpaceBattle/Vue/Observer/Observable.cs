﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
namespace Vue.Observer
{
	using System;
	using System.Collections.Generic;
	using System.Linq;
	using System.Text;

	public abstract class Observable
	{
        private IList<Observer> observers
		{
			get;
			set;
		}

		public virtual void addObserver()
		{
			throw new System.NotImplementedException();
		}

		public virtual void notify()
		{
			throw new System.NotImplementedException();
		}

	}
}

