﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
namespace Controleur.command
{
	using Controleur.instrument;
	using System;
	using System.Collections.Generic;
	using System.Linq;
	using System.Text;

	/// <remarks>Memento</remarks>
	/// <remarks>Singleton</remarks>
	public class UndoCollector
	{
		public static object INSTANCE
		{
			get;
			set;
		}

		private Stack<Action> pileRedo
		{
			get;
			set;
		}

        private Stack<Action> pileUndo
		{
			get;
			set;
		}

		public virtual void undo()
		{
			throw new System.NotImplementedException();
		}

		public virtual void redo()
		{
			throw new System.NotImplementedException();
		}

		public virtual void addUndoable()
		{
			throw new System.NotImplementedException();
		}

		public virtual void hasUndo()
		{
			throw new System.NotImplementedException();
		}

		public virtual void hasRedo()
		{
			throw new System.NotImplementedException();
		}

	}
}

